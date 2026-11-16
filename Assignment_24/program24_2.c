#include<stdio.h>
#include<stdlib.h>

int CountChar(char * str, char ch)
{
    int i = 0;
    int Count = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            Count++;
        }
        i++;
    }
    return Count;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    printf("Enter the character :");
    scanf(" %c", &cValue);

    iRet = CountChar(arr,cValue);

    printf("Character frequency is %d", iRet);

    return EXIT_SUCCESS;
}