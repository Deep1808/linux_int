#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{	int fd,len;
	int x;
	char buff[300];
	int res;
	char write_buff[60]="LInux kernel new program ?";

	//fd=open ("linuxabc.txt",O_CREAT | O_RDWR,0777);
	//write(fd,write_buff,60);

	fd=open("linuxabc.c",O_CREAT |O_RDWR,0777);
	if(fd>0)
	{
		read(fd,buff,300);
	}
	close(fd);
	return 0;
	
	
}


