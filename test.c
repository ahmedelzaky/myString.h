#include <stdio.h>
#include "mystring.h"

int main()
{
    const char *str1 = "Hello, ";
    const char *append = "world!";

    char dest[50];
    myStrcpy(dest, str1);
    myStrcat(dest, append);

    printf("Concatenated string: %s\n", dest);

    char str[80] = "This is - www.tutorialspoint.com - website";
    const char s[2] = "-";
    char *token;

    /* get the first token */
    token = myStrtok(str, s);

    /* walk through other tokens */
    while (token != NULL)
    {
        printf(" %s\n", token);

        token = myStrtok(NULL, s);
    }

    return 0;
}