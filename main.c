#include <stdio.h>
#include <string.h>


int main(int argc, char **argv)
{
    char name[255],last [255];

    printf("Enter your first name: ");
    fgets(name, 255, stdin);
    first[strlen(name)-1] = '\0'; /* remove the newline at the end */
<<<<<<< HEAD
        printf("Hello, %s!\n", name);
return 0;
=======
   printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */

    printf("Hello %s!\n", first, last);
>>>>>>> cdc105e4bc7ecd890d0fae4a4c93ce9922c83767
    return 0;
}
