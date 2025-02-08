#include <stdio.h>
#include <string.h>
 void askname(char *first, char *last)
{
\\kz ns xjhn
cout<<endl;
printf("Now enter your 1st name: ");
 fgets(first, 255, stdin);
    first[strlen(first)-2] = '\0'; /* remove the newline at the end */
	printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */
