// 8967    ->  6   8
//4268      -> 8  6  2   4
//5799   ->
#include<stdio.h>
#include<stdlib.h>

void DisplayEvenDigits(int ino)
{
    int iDigit = 0;

    if(ino < 0)
    {
        ino = -ino;
    }

    while(ino != 0)
    {
        iDigit = ino % 10;
        if((iDigit % 2) ==0)
        {
        printf("%d\n",iDigit);
        }
        ino = ino / 10;
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayEvenDigits(iValue);

    return EXIT_SUCCESS;
}