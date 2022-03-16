#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("My process PID:%d\n",getpid());
	printf("My parent PID:%d\n",getppid());

return 0;
}
