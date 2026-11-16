#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char * str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            printf("%c", str[i]);
        }
        i++;
    }
}
int main()
{
    char arr[20];

    printf("Enter String :");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    printf("Modified string is %s", arr);

    return EXIT_SUCCESS;
}