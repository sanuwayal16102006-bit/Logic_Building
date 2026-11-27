// 8967    ->  6   8
#include<stdio.h>
#include<stdlib.h>

float AverageDigits(int ino)
{
   int iDigit = 0;
   int iSum = 0;
   int iCount = 0;
   float avg = 0.0f

    while(ino != 0)
    {
        iDigit = ino % 10;
        iCount++;
        iSum = iSum + iDigit;
        ino = ino / 10;
    }
    return avg;

}

int main()
{
    int iValue = 0;
    int fret = 0.0f;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    fret = AverageDigits(iValue);

    printf("Average of digit is: %f\n",fret);

    return EXIT_SUCCESS;
}