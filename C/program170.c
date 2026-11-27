// 8967    ->  6   8
#include<stdio.h>
#include<stdlib.h>

float AverageDigits(int ino)
{
   int iDigit = 0;
   int iSum = 0;
   int iCount = 0;
   float favg = 0.0f;

   if(ino < 0)
   {
    ino = -ino;
   }

    while(ino != 0)
    {
        iDigit = ino % 10;
        iSum = iSum + iDigit;
        iCount++;
        ino = ino / 10;
    }
    favg = (float)iSum / (float)iCount;   

    return favg;

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