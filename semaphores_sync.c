#include<stdio.h>
#include<stdlib.h>
#include<semaphore.h>
#include<pthread.h>

int sharedVar=5;
sem_t my_sem;

void *thread_inc(void *arg)
{
	sem_wait(&my_sem);
	sharedVar++;
	sem_post(&my_sem);
	//printf("After INCREMENT=%d\n",sharedVar);

}

void *thread_dec(void *arg)
{
	sem_wait(&my_sem);
	sharedVar--;
	sem_post(&my_sem);
	//printf("After DECREMENT=%d\n",sharedVar);
}

int main()
{
	pthread_t thread1,thread2;
	sem_init(&my_sem,0,1);
	pthread_create(&thread1,NULL,thread_inc,NULL);
	pthread_create(&thread2,NULL,thread_dec,NULL);
	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);

printf("Shared VALUE=%d\n",sharedVar);
return 0;
}

