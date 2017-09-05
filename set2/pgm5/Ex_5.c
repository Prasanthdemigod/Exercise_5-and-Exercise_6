#include <stdio.h>
#include <string.h>

 	int main() {
        char str_1[512], names[256];
        int i = 0, j = 0, count=0;

        /* get the input string from the user */
        printf("Enter your input string:");
        //fgets(str_1, 512, stdin);
        gets(str_1);
        str_1[strlen(str_1)] = '\0';

        /* checking whether the input string is NULL */
        if (str_1[0] == '\0') {
                printf("Input string is NULL\n");
                return 0;
        }

        /* printing names in the given string */
        while (str_1[i] != '\0') {
                /* ' '  is the separator to split words */
                if (str_1[i] == ' ') {
                        names[j] = '\0';
                        if(count == 0)
                        	printf(" First name: %s\n", names);
                        else
                        	if(count == 1)
                        	printf("Middle name :%s\n", names);

                        j = 0;
                } else {
                        names[j++] = str_1[i];
                }
                i++;
        }

        names[j] = '\0';

        /* printing last name in the input string */
        printf(" Last name :%s\n", names);
        return 0;
  	}