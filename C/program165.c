// 8967    ->  6   8

#include<stdio.h>
#include<stdlib.h>

void DisplayDigits(int ino)
{
    int iDigit = 0;

    if(ino < 0)
    {
        ino = -ino;
    }

    while(ino != 0)
    {
        iDigit = ino % 10;
        if((iDigit % 2) == 0)
        {
        printf("Even :%d\n",iDigit);
        }
        else
        {
            printf("Odd : %d\n",iDigit);
        }
        ino = ino / 10;
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return EXIT_SUCCESS;
}