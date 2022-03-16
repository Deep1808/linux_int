#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("I am going to execute an 'ls' program\n");
	
	//execl("/bin/ls","ls","-lh",0);
	execl("/home/deep/linux_int","file_opr.c","./",0);

return 0;
}
