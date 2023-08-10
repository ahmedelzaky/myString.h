#include <stdio.h>
#include "mystring.h"

int main()
{
    const char *str = "Hello, ";
    const char *append = "world!";

    char dest[50];
    myStrcpy(dest, str);
    myStrcat(dest, append);

    printf("Concatenated string: %s\n", dest);

    return 0;
}