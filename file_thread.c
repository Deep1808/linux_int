#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<sys/types.h>

void *th_fn(void * p);

int fd;
int main()
{
	pthread_t t1,t2;
	fd=open("/etc/passwd",RDONLY);
	printf("File opened with fd:\n",fd);
pthread_create(&t1,NULL,th_fn,"THread One");
pthread_create(&t2,NULL,th_fn,"THread TWO");

pthread_join(t1,NULL);
pthread_join(t2,NULL);

}

void *th_fn(void *p)
{
	char *str,buff[100];
	int n,pid;
	str=(char *)p;
	pid=getpid();
	printf("%s \t Started Now:\tFor Process %d\n\n",str,pid);
do
{
	n=read(fd,buff,100);
	printf("%s \t READ:\t %d\n\n",str,pid);
	printf("\n----------------");

	write(1,buff,n);
	printf("\n----------------");
	sleep(2);
}while(n);
	printf("%s\t FINISHED\t For process%d\n",str,pid);
}
printf("\n------------------\n");

