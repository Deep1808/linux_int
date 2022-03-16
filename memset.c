#include<stdio.h>
#include<string.h>

int main()
{
	const char str[]="LINUX.COM";
	const char ch='#';
	
	printf("String befor set is %s\n",str);
	memset(str,ch,strlen(str));
	printf("String after set is %s\n",str);
return 0;
}
	
