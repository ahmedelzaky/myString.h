#include <stdio.h>
#include "mystring.h"

int main()
{
    char str1[15];
    char str2[15];
    int ret;

    myStrcpy(str1, "abcdef");
    myStrcpy(str2, "ABCDEF");

    ret = myStrncmp(str1, str2, 4);
    printf("%s\n", str1);
    printf("%s\n", str2);

    if (ret < 0)
    {
        printf("str1 is less than str2");
    }
    else if (ret > 0)
    {
        printf("str2 is less than str1");
    }
    else
    {
        printf("str1 is equal to str2");
    }

    return (0);
}
