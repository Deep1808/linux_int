#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>

int main()
{
	pid_t pid;
	pid =fork();
	if(pid <0){
			fprintf(stderr,"Fork Failed");
		}
	else if(pid =0)
