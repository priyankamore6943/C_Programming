#include<stdio.h>
#include<stdlib.h>

void StrRevX(char * str)
{
    int start = 0;
    int end = 0;
    char temp;

    while(str[end] != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string is %s", arr);

    return EXIT_SUCCESS;
}