//program to Find the length of string.

#include<stdio.h>
void main()
{
	char str[100];
	char * ptr;
	fgets(str,100,stdin);
	ptr=str;
	while(*ptr!='\0')
	{
		ptr++;
	}
	printf("The length of the string is %ld",ptr-str-1);
}