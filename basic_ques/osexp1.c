#include<stdio.h>
#include<unistd.h>
#include<wait.h>

int main()
{
    int i,status;
    pid_t pid;
    pid=fork();
    if(pid>0)
    {
        for(i=1;i<=5;i++)
        {
            printf("\nI am in parent process with its process id =%d\n",getpid());
            sleep(1);
        }
        wait(&status);
        printf("\n main process exiting\n");
    }
    else if(pid==0)
    {
        for(i=1;i<=5;i++)
        {
            printf("\nI am child process with its process id=%d and with its parent id=%d\n",getpid(),getppid());
            sleep(1);
        }
    }

    else
    {
        printf("error creating fork");
    }
    return 0;
}
