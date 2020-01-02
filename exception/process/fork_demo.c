#include <unistd.h>
#include <stdio.h>

//fork 调用完成后会生成一个新的子进程，且父子进程都从 fork 返回处继续执行。这里需要特别注意的是 fork 的返回值的含义，在父进程和新的子进程中，它们的含义不一样。

// 在父进程中 fork 的返回值是新创建的子进程 id
// 在创建的子进程中 fork 的返回值始终等于 0
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("before fork, pid=%d\n", getpid());
  pid_t childPid;
  switch (childPid = fork()) {
    case -1: {
      // fork 失败
      printf("fork error, %d\n", getpid());
      exit(1);
    }
    case 0: {
      // 子进程代码进入到这里
      printf("in child process, pid=%d\n", getpid());
      break;
    }
    default: {
      // 父进程代码进入到这里
      printf("in parent process, pid=%d, child pid=%d\n", getpid(), childPid);
      break;
    }
  }
  return 0;
}