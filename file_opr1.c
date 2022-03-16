#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fd;
	char len[50];
	char write_buff[50]="Hi!!hello how u doing!!";
	char read_buff[50];

	fd=open("linux.txt",O_CREAT|O_RDWR,777);
	len=write(fd,write_buff,50);
	printf("%s\n",len);


	lseek(fd,4,SEEK_SET);
	
	read(fd,read_buff,len);
	printf("%s\n",read_buff);
	close(fd);
	
	return 0;
}
	
