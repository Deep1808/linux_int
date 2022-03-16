#include<stdio.h>
#include<unistd.h>

int main(void)
{
	int pid_1;
	pid_1 = fork();
	pid_2 = fork();
	if(pid_1)

