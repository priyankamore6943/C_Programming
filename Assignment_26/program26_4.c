#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
   if((ch == '!' || ch == '@' || ch == '#' || ch == '$' 
      || ch == '%' || ch == '^' || ch == '&' || ch == '*'))
      {
        return TRUE;
      }
      else
      {
        return FALSE;
      }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is Special Character");
    }
    else
    {
        printf("It is not Special Character");
    }

    return EXIT_SUCCESS;
}