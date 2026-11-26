// 8967    ->  6   8

#include<stdio.h>
#include<stdlib.h>

int CountDigits(int ino)
{
    int iDigit = 0;
    int iCount = 0;

    if(ino < 0)
    {
        ino = -ino;
    }

    while(ino != 0)
    {
        iDigit = ino % 10;
        iCount++;
        ino = ino / 10;
        
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iret = CountDigits(iValue);

    printf("number of digit is: %d\n",iret);

    return EXIT_SUCCESS;
}