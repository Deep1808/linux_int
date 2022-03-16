#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>

int main()
{
	pid_t pid1;
	pid1=fork();
	
	if(pid1==0)
	{
		sleep(5);
		printf("I am child with delay of 5 secwith my PID:%d\n",getpid());
	}
	else{
		int pid2;
		printf("I am parent my paren PID:%d\n",getpid());
		pid2=wait(0);		
	printf("Parent saying....child %d exited/terminated\n",pid2);
	printf("I am parent process PID:%d\n",getpid());
	}
	return 0;
}
