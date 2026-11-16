#include<stdio.h>
#include<stdlib.h>

void Reverse(char * str)
{
   int iLen = 0;
   int iCnt = 0;

   while(str[iLen] != '\0')
   {
      iLen++;
   }

   for(iCnt = iLen - 1; iCnt >=0; iCnt--)
   {
      printf("%c", str[iCnt]);
   }
}
int main()
{
    char arr[20];
    int  iRet = 0;

    printf("Enter strig : ");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return EXIT_SUCCESS;
}