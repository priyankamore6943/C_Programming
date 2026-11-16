#include<stdio.h>
#include<stdlib.h>

int LastChar(char * str, char ch)
{
    int i = 0;
    int index = -1;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            index = i;
        }
        i++;
    }
    return index;
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

    iRet = LastChar(arr,cValue);

    printf("Character location is %d", iRet);

    return EXIT_SUCCESS;
}