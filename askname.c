#include <stdio.h>
#include <string.h>
 void askname(char *first, char *last)
{

printf("Now enter your first name: ");
 fgets(first, 255, stdin);
    first[strlen(first)-2] = '\0'; /* remove the newline at the end */
	printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */
