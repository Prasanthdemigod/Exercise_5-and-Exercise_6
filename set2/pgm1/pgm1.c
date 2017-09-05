//program to Copy contents of one string to another.

#include<stdio.h>
void main()
{
	char str1[100],str2[100];
	char * ptr1,* ptr2;
	printf("Enther the stirng\n");
	scanf("%s",str1);

	ptr1=str1;
	ptr2=str2;
	while(*ptr1!='\0')
	{	
		*ptr2=*ptr1;
		ptr1++;
		ptr2++;
	}
	*ptr2='\0';
	printf("THe copied string is %s \n",str2);
}