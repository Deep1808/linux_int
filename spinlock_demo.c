#include<stdio.h>
#include<semaphore.h>
#include<stdlib.h>
#include<pthread.h>
#include<sys/types.h>
#include<unistd.h>
#include<bits/types.h>
#include<errno.h>

static pthread_spinlock_t spinlock;
volatile int slock;

void *spin_lockThread(void *i)
{
int rc;
int count=0;
printf("Entered thread %d, getting spin lock \n", (int *)i);

rc=pthread_spin_lock(&slock);


printf("%d thread unlock the spin lock\n",(int *)i);
rc=pthread_spin_unlock(&slock);

printf("%d thread complete \n",(int *)i);

return NULL;
}

int main()
{
int        rc=0;

pthread_t  thread,thread1;

if(pthread_spin_init(&slock,PTHREAD_PROCESS_PRIVATE)!=0)
perror("init");

printf("main, get spin lock\n");

rc= pthread_spin_lock(&slock);


printf("main, create the spin lock thread \n");

rc= pthread_create(&thread,NULL,spin_lockThread, (int *)1);

printf("main, wait a bit holding the spin lock \n");
sleep(5);

printf("Main, Now unlock the spin lock\n");
rc= pthread_spin_unlock(&slock);
if(rc==0)
printf("\n main thread successfully unlocked\n");
else
printf("main thread unsuccessfully unlocked\n");


printf("main, wait for the thread to end\n");
rc= pthread_join(thread, NULL);
printf("main completed\n");
return 0;
}


