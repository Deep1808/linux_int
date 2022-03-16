#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>

static void *threadfunc(void *arg)
{
char *s=(char *) arg;
	printf("%s\n",s);
	sleep(5);
	return(void *)strlens(s);
	return 0;
}

int main(int arg,char *argv[])
{
	pthread_t t1;
	void *res;
	int s;
	pthread_create(&t1,NULL,threadfunc,"Hello World");
	printf("Message from main()\n");
	sleep(3);
	pthread_join(t1,&res);

printf("Thread return :%ld\n",long(res));
	exit(0);
}
