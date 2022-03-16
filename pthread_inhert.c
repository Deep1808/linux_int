#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

void* Proc(void* param)
{
	sleep(3);
	return 0;
}

int main(int arg,char *argv[])
{
	pthread_attr_t Attr;
	pthread_t Id;
	int err,info;
	
	pthread_attr_init(&Attr);
	pthread_attr_getinheritsched(&Attr,&info);
	switch(info)
	{
		case PTHREAD_INHERIT_SCHED:
			printf("Sched 	!!!");
			break;
		case PTHREAD_EXPLICIT_SCHED:
			printf("Explicit !!!");
			break;
	}
	pthread_create(&Id,&Attr,Proc,NULL);
return 0;
}
