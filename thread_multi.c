#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void *start_one(void *arg)
{	
	int i;
	for(i=0;i<100;i++)
		printf("Under control of Thread-1");
}

void *start_two(void *arg)
{	
	int i;
	for(i=0;i<100;i++)
		printf("**Under control of Thread-2");
}

void main()
{
	pthread_t pt1,pt2;
	getchar();
	pthread_create(&pt1,NULL,start_one,NULL);
	pthread_create(&pt2,NULL,start_two,NULL);
	getchar();
	printf("End of main\n");
}

