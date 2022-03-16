#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int f1,f2,len;
	char read_buff[50];
	char write_buff[50];	

	f1=open("hello.txt",O_CREAT | O_RDWR,777);
	read(f1,read_buff,50);
	len=write(f1,write_buff,50);
for(int i=0;i<len;i++)
{
	write_buff[i]=read_buff[i];

}
	f2=open("linux_wr1.txt",O_CREAT|O_RDWR,777);
	write(f2,write_buff,50);
	printf("%s\n",write_buff);

	close(f1);
	close(f2);
return 0;
}
