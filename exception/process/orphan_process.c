#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>

/* 
参考博客 http://www.cnblogs.com/Anker/p/3271773.html

输出: 

I am father process.
I am the child process.
pid: 10983      ppid:10982
I will sleep five seconds.
father process is  exited.

此时父进程退出了, 但是子进程还存活,此时的子进程就是孤儿进程, 会被init(1号进程)收为子进程
当子进程执行完了, 紧接着会输出

pid: 10983    ppid:1
child process is exited

*/
int main()
{
    pid_t pid;
    // 通过fork函数创建一个进程
    // fork函数是调用一次, 返回两次 父进程中返回的是子进程id, 子进程中返回0, 出错则为负数
    pid = fork();
    if (pid < 0)
    {
        perror("fork error:");
        exit(1);
    }
    //子进程
    if (pid == 0)
    {
        printf("I am the child process.\n");
        //输出进程ID和父进程ID
        printf("pid: %d\tppid:%d\n", getpid(), getppid());
        printf("I will sleep five seconds.\n");
        //睡眠5s，保证父进程先退出
        sleep(3);
        printf("pid: %d\tppid:%d\n",getpid(),getppid());
        printf("child process is exited.\n");
    }
    //父进程
    else
    {
        printf("I am father process.\n");
        //父进程睡眠1s，保证子进程输出进程id
        sleep(1);
        printf("father process is  exited.\n");
    }
    return 0;
}