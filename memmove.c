#include<stdio.h>
#include<string.h>

int main()
{
	char dest[]="OLD STRING";
	const char src[]="new string";
	
	printf("Before memmove dest=%s and scr=%s",dest,src);
	memmove(dest,src,9);
	printf("After memove dest=%s and scr=%s",dest,src);
return 0;
}
