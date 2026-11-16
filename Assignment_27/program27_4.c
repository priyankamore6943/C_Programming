#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define BOOL bool
#define TRUE true
#define FALSE false

BOOL ChkVowel(char * str)
{
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') || 
             (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
             {
                return TRUE;
             }
        str++;
    }
    return FALSE;
}
int main()
{
    char arr[20];
    BOOL bRet = 0;

    printf("Enter strig : ");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);
    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return EXIT_SUCCESS;
}