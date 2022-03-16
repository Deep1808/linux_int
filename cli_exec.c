#include<stdio.h>

int main(int argc,char *argv[])
{
	int i;
	printf("\n FILE NAME:%s\n",argv[0]);
	printf("\nTotal numbe of argrument:%d",argc);
	printf("\nArgrument Passed:");
	for(i=1;i<argc;i++)
	{
		printf("%s",argv[i]);
	}
return 0;
}


