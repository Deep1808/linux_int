#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#define Num_Threa 3

int i=0;
void *my_fun(void *null)
{
i++;
int result;
result=result+i*1000;
printf("RESULT is done!!\n");
pthread_attr
}
