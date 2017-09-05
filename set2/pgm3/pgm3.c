//program to Reverse the content of string

#include<stdio.h>
void main()
{
	char str[100];
	char *ptr;
	fgets(str,100,stdin);
	ptr=str;
	while(*ptr!='\0')
	{
		ptr++;
	}
	do{
		printf("%c",*ptr);
		ptr--;
	}while(ptr!=str);
	printf("%c\n",*ptr);
}