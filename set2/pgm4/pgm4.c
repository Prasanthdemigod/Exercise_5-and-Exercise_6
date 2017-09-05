//program to Check whether two strings are same.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	char str1[50],str2[50];
	char *ptr1=str1,*ptr2=str2,*dummy;
	printf("Enter the String 1 \n");
	scanf("%s",str1);
	printf("Enter the String 2 \n");
	scanf("%s",str2);
	if(strlen(str1)!=strlen(str2))
	{
		printf("Strings are unequal\n");
			exit(1);
		
	}
	while(*ptr1!='\0')
	{
		if(*ptr1!=*ptr2)
		{
			printf("Strings are unequal\n");
			exit(1);
		}
		ptr1++;
		ptr2++;
	}
	printf("strings are equal");

}