#include<pthread.h>

pthread_t tid;

void *thread1(void *arg){
	printf("Newly created THREAD !!\n");
	return NULL;
}

int main(void)
{
	int ret =pthread_create(&tid,NULL,thread1,NULL);
	int ret1 =pthread_create(&tid,NULL,thread1,NULL);
	if(ret)
		printf("THread is not created1\n");
	else
		printf("Thread is Create1\n");
		//sleep(2);
		pthread_join(tid,NULL);

return 0;
}
