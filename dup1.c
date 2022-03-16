#include<stdio.h>
#include<fcntl.h>

int main()
{
	int fd1,fd2,fd3,fd4;
	fd1=open("Linux.txt",O_WRONLY|O_CREAT|O_TRUNC,0777);
	fd2=open("LinuxNEW.txt",O_WRONLY|O_CREAT|O_TRUNC,0777);

	printf("F1=%d\n",fd1);
	printf("F2=%d\n",fd2);
	fd3=dup(fd1);
	fd4=dup(fd2,44);

	printf("F3 duplicate as F1 = %d\n",fd3);
	printf("F4 duplicate as F1 = %d\n",fd4);
	close(fd4);	
	close(fd3);
	close(fd2);
	close(fd1);
return 0;
}
