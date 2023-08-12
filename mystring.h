#ifndef MYSTRING_H
#define MYSTRING_H
/**
*****************************************************************************
* @file             :mystring.h
* @author           :Ahmed Elzaki
* @brief            :an implementation of string.h library
*****************************************************************************
*/

/*********************** Includes Section Start ***********************/
#include <stdint.h>
/*********************** Includes Section End ***********************/

size_t myStrlen(const char *str)
{
    size_t Length = 0;
    if (str == NULL)
    {
        printf("ERROR !!");
        return -1;
    }
    else
    {
        while (*str++ != '\0')
        {
            Length++;
        }
    }
    return Length;
}

void *myMemchr(const void *str, int c, size_t n)
{
    const unsigned char *temp = str;
    if (str == NULL)
    {
        return NULL;
    }
    else
    {
        while (n--)
        {
            if (*temp == c)
            {
                return temp;
            }
            temp++;
        }
    }
    return temp;
}

int myMemcmp(const void *str1, const void *str2, size_t n)
{
    int flag = 0;
    unsigned char *temp1 = str1;
    unsigned char *temp2 = str2;

    if (str1 == NULL || str2 == NULL)
    {
        printf("ERROR");
    }
    else
    {
        while (n--)
        {
            if (*temp1 != *temp2)
            {
                flag = *temp1 > *temp2 ? 1 : -1;
                break;
            }
            else
            {
                temp1++;
                temp2++;
            }
        }
    }
    return flag;
}

void *myMemset(void *StartAddress, unsigned char Value, unsigned int Length)
{
    unsigned char *TempPtr = StartAddress;

    if (NULL == StartAddress)
    {
        printf("MemSet function failed due to a NULL pointer !! \n");
    }
    else
    {
        while (Length--)
        {
            *TempPtr++ = Value;
        }
    }

    return StartAddress;
}

void *myMemcpy(void *DestAddress, const void *SrcAddress, unsigned int Length)
{

    unsigned char *TempDestAddress = DestAddress;
    unsigned char *TempSrcAddress = SrcAddress;

    if ((NULL == DestAddress) || (NULL == SrcAddress))
    {
        printf("MemCpy function failed due to a NULL pointer !! \n");
    }
    else
    {
        while (Length)
        {
            *TempDestAddress++ = *TempSrcAddress++;
            Length--;
        }
    }

    return DestAddress;
}

void *myMemmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;

    if ((NULL == dest) || (NULL == src))
    {
        printf("ERROR !! \n");
    }

    // Check for overlap and choose the appropriate direction to copy the data
    if (d > s && d < s + n)
    {
        for (size_t i = n; i > 0; i--)
        {
            d[i - 1] = s[i - 1];
        }
    }
    else
    {
        for (size_t i = 0; i < n; i++)
        {
            d[i] = s[i];
        }
    }

    return dest;
}

char *myStrcat(char *dest, const char *src)
{
    unsigned char *temp = src;

    size_t n = myStrlen(dest);
    size_t lenth = myStrlen(src);

    if ((NULL == dest) || (NULL == src))
    {
        printf("ERROR !! \n");
    }
    else
    {
        while (lenth--)
        {
            dest[n++] = *temp++;
        }
    }

    return dest;
}

char *myStrncat(char *dest, const char *src, size_t lenth)
{
    unsigned char *temp = src;

    size_t n = myStrlen(dest);

    if ((NULL == dest) || (NULL == src))
    {
        printf("ERROR !! \n");
    }
    else
    {
        while (lenth--)
        {
            dest[n++] = *temp++;
        }
        dest[n] = '\0';
    }

    return dest;
}

char *myStrchr(const char *str, int c)
{
    size_t n = myStrlen(str);
    if (str == NULL)
    {
        return NULL;
    }
    else
    {
        unsigned char *temp = str;
        while (n--)
        {
            if (*temp == c)
            {
                return temp;
            }
            temp++;
        }
    }
}

int myStrcmp(const char *str1, const char *str2)
{
    int flag = 0;
    size_t n1 = myStrlen(str1);
    size_t n2 = myStrlen(str1);
    unsigned char *temp1 = str1;
    unsigned char *temp2 = str2;

    if (str1 == NULL || str2 == NULL)
    {
        printf("ERROR");
    }
    else
    {
        if (n1 == n2)
        {
            while (n1--)
            {
                if (*temp1 != *temp2)
                {
                    flag = *temp1 > *temp2 ? 1 : -1;
                    break;
                }
                else
                {
                    temp1++;
                    temp2++;
                }
            }
        }
        else
        {
            flag = n1 > n2 ? 1 : -1;
        }
    }

    return flag;
}

int myStrncmp(const char *str1, const char *str2, size_t n)
{
    int flag = 0;
    unsigned char *temp1 = str1;
    unsigned char *temp2 = str2;

    if (str1 == NULL || str2 == NULL)
    {
        printf("ERROR");
    }
    else
    {
        while (n--)
        {
            if (*temp1 != *temp2)
            {
                flag = *temp1 > *temp2 ? 1 : -1;
                break;
            }
            else
            {
                temp1++;
                temp2++;
            }
        }
    }
    return flag;
}

int myStrcoll(const char *s1, const char *s2)
{
    if (s1 == NULL || s2 == NULL)
        return 0;

    while (*s1 && *s2)
    {
        uint32_t codepoint_s1 = (uint8_t)*s1;
        uint32_t codepoint_s2 = (uint8_t)*s2;

        if (codepoint_s1 != codepoint_s2)
        {
            return codepoint_s1 - codepoint_s2;
        }

        s1++;
        s2++;
    }

    return (int)((uint8_t)*s1 - (uint8_t)*s2);
}

char *myStrcpy(char *dest, const char *src)
{
    unsigned char *TempDestAddress = dest;
    unsigned char *TempSrcAddress = src;

    if ((NULL == dest) || (NULL == src))
    {
        printf("ERROR!! \n");
    }
    else
    {
        while (*TempSrcAddress != '\0')
        {
            *TempDestAddress++ = *TempSrcAddress++;
        }
        *TempDestAddress = '\0';
    }

    return TempDestAddress;
}

char *myStrncpy(char *dest, const char *src, size_t n)
{
    unsigned char *TempDestAddress = dest;
    unsigned char *TempSrcAddress = src;
    size_t Length = n;

    if ((NULL == dest) || (NULL == src))
    {
        printf("ERROR!! \n");
    }
    else
    {
        while (Length)
        {
            *TempDestAddress++ = *TempSrcAddress++;
            Length--;
        }
        *TempDestAddress = '\0';
    }

    return TempDestAddress;
}

size_t myStrcspn(const char *str1, const char *str2)
{
    int flag = -1;
    unsigned char *tempStr1 = str1;
    unsigned char c = str2[0];
    size_t Lentgh = myStrlen(str1);
    if (str1 == NULL || str2 == NULL)
    {
        printf("ERROR !!");
        return flag;
    }
    else
    {
        for (int i = 0; i < Lentgh; i++)
        {
            if (*tempStr1++ == c)
            {
                flag = i;
                break;
            }
        }
    }
    return flag;
}

char *myStrpbrk(const char *str1, const char *str2)
{
    unsigned char *flag = NULL;
    if (str1 == NULL || str2 == NULL)
    {
        printf("ERROR !!");
        return flag;
    }
    unsigned char *temp = str1;
    unsigned char *c = str2;
    size_t n1 = myStrlen(str1);
    size_t n2 = myStrlen(str2);

    while (n1--)
    {
        for (size_t i = 0; i < n2; i++)
        {
            if (*temp == c[i])
            {
                flag = temp;
                break;
            }
            else
            {
                temp++;
            }
        }
        if (flag != NULL)
        {
            break;
        }
    }
    return flag;
}

char *myStrrchr(const char *str, int c)
{
    unsigned char *flag = NULL;

    if (str == NULL)
    {
        printf("ERROR !!");
        return flag;
    }
    unsigned char *temp = str;

    size_t Lentgh = myStrlen(str);

    while (Lentgh--)
    {
        if (*temp == c)
        {
            flag = temp;
            break;
        }
        else
        {
            temp++;
        }
    }
    return flag;
}

size_t myStrspn(const char *str1, const char *str2)
{
    size_t flag = 0;
    if (str1 == NULL || str2 == NULL)
    {
        printf("ERROR !!");
        return flag;
    }
    unsigned char *temp = str1;
    unsigned char *c = str2;
    size_t n1 = myStrlen(str1);
    size_t n2 = myStrlen(str2);

    while (n2--)
    {
        for (size_t i = 0; i < n1; i++)
        {
            if (temp[i] == *c)
            {
                flag++;
                break;
            }
        }
        c++;
    }
    return flag;
}

char *myStrstr(const char *haystack, const char *needle)
{
    unsigned char *flag = NULL;
    if (haystack == NULL || needle == NULL)
    {
        printf("ERROR !!");
        return flag;
    }
    unsigned char *tempStr = haystack;
    unsigned char *TempNee = needle;
    size_t n1 = myStrlen(haystack);
    size_t n2 = myStrlen(needle);

    while (n1--)
    {
        if (*tempStr == *TempNee)
        {
            tempStr++;
            flag = needle;
            for (size_t i = 1; i < n2; i++)
            {
                if (*tempStr != needle[i])
                {
                    flag = NULL;
                    break;
                }
                tempStr++;
            }
        }
        if (flag != NULL)
        {
            break;
        }
        else
        {
            tempStr++;
        }
    }

    return flag;
}

char *myStrtok(char *str, const char *delim)
{
    static char *prev = NULL;

    if (prev != NULL)
    {
        str = prev;
    }

    if (str == NULL && prev == NULL)
    {
        return NULL;
    }
    char *tempStr = str;
    size_t n1 = myStrlen(str);

    while (n1--)
    {
        if (*tempStr == *delim)
        {
            *tempStr = '\0';
            prev = ++tempStr;
            break;
        }
        if (*(tempStr + 1) == '\0')
        {
            prev = NULL;
        }
        tempStr++;
    }

    return str;
}

size_t myStrxfrm(char *dest, const char *src, size_t n)
{
    if (dest == NULL, src == NULL)
    {
        return NULL;
    }
    unsigned char *tempSrc = src;
    unsigned char *tempDest = dest;

    while (n--)
    {
        *tempDest++ = *tempSrc++;
    }
    *tempDest = '\0';

    return myStrlen(dest);
}

#endif