// 8967    ->  6   8

#include<stdio.h>
#include<stdlib.h>

int SumDigits(int ino)
{
    int iDigit = 0;
    int isum = 0;

    if(ino < 0)
    {
        ino = -ino;
    }

    while(ino != 0)
    {
        iDigit = ino % 10;
        isum = isum + iDigit;
        ino = ino / 10;
        
    }
    return isum;
}

int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iret = SumDigits(iValue);

    printf("Summation of digit is:%d\n",iret);

    return EXIT_SUCCESS;
}