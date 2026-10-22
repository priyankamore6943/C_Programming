// Accept one character from user and convert case of that character.
//inout :a output: A
//inout :B output: b


#include <stdio.h>

void DisplayConvert(char CValue)
{
    if((CValue >= 'a') && (CValue <= 'z'))
    {
        printf("%c", CValue - 32);
    }
    else if((CValue >= 'A') && (CValue <= 'Z'))
    {
        printf("%c", CValue + 32);
    }
    else
    {
        printf("%c", CValue);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf(" %c", &cValue);

    DisplayConvert(cValue);

    return 0;
}
