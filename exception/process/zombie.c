#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>

int main()
{
    pid_t pid;
    pid = fork();
    if (pid < 0)
    {
        perror("fork error:");
        exit(1);
    }
    else if (pid == 0)
    {
        printf("I am child process.I am exiting.\n");
        exit(0);
        // 子进程已结束,此后 该子进程就是 僵死进程
    }
    printf("I am father process.I will sleep two seconds\n");
    //等待子进程先结束
    sleep(2);
    
    //输出进程信息
    system("ps -o pid,ppid,state,tty,command");
    printf("father process is exiting.\n");
    
    return 0;
    // 至此, 父进程就执行结束了
    // 当父进程结束后,原来的僵死子进程, 会成为孤儿进程且是僵死进程, 此时会被1号进程收养, 最终也会被回收  
    
    // https://yq.aliyun.com/articles/61894
    // 在 Docker 中, 由于没有 init 这个1号进程(往往是应用进程作为1号进程) 很有可能子进程称为僵死进程且一直存在  
    // Docker 1.11 之前的版本，孤儿进程是否有可能成为僵尸进程取决于容器内pid为1的进程是否在子进程退出时调用wait/waitpid
    // Docker 1.11 版本之后孤儿进程不会成为僵尸进程
    //
}
