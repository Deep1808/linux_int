#include<stdio.h>
#include<unistd.h>

int main(void)
{
	int pid_1;
	printf("Current process PID:%d\n",getpid());

	pid_1 = fork();

	if(pid_1==0){
		printf("New child process pid:%d\n",getpid());
		printf("New child parent process ppid = %d\n",getppid());

	}
	else{
		sleep(3);
		printf("Parent process pid:%d\n",getpid());
		printf("Parent parent process ppid = %d\n",getppid());
	}
	while(1);
return 0;
}

