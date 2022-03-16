#include<stdio.h>
#include<string.h>


int main()
{
	char buff1[10];
	char buff2[10];
	int ret;
	
	memcpy(buff1,"DEEP",5);
	memcpy(buff2,"DEEP",5);
	
	ret = memcmp(buff1,buff2,5);
	
	if(ret>0)
	{
		printf("Buff1 is greater than buff2");
	}
	else if(ret<0)
	{
		printf("Buff1 is less thsn buff2");
	}
	else{
		printf("Buff1 and BUff2 are equals");
	}
return 0;
}
