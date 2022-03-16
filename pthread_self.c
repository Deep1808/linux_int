#include<stdio.h>
#include<pthread.h>
#include<string.h>
#include<stdlib.h>

struct my_thread
{
	int thread_id;
	char mesg[100];
};

void *PrintHello(void *threadobj)
{
	pthread_t thread_ID;
	struct my_thread *t1;
	t1=(struct my_thread *) threadobj;\
	thread_ID =pthread_self();
	printf("\nThread ID:%u",thread_ID);
	printf("\n THread Message is%s\n",t1->mesg);
}

int main()
{
	pthread_t thread4,thread_ID;
	int rc;
	struct my_thread t4;
	t4.thread_id=4;
	strcpy(t4.mesg,"I am fourth Thread\n");

	thread_ID=pthread_self();
	printf("\nMain Thread ID:%u",thread_ID);
	pthread_create(&thread4,NULL,PrintHello,(void *)&t4);

	printf("Exit from main thread\n");
	pthread_exit(NULL);
return 0;
}
