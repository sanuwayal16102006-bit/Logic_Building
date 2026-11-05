/*
    ------------------------------------
            Operation &&
    ------------------------------------
    Result1    Result2     Final Result
    ------------------------------------
     TRUE       TRUE          TRUE
     TRUE       FALSE         FALSE
     FALSE      TRUE          FALSE         //short circuit  evaluation
     FALSE      FALSE         FALSE         //short circuit evaluation
    -------------------------------------
*/
#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int ino)
{
    if(((ino % 5) == 0) && ((ino % 3) == 0))
    {
        printf("It is divisible \n");

    }
    else
    {
        printf("it Not Divisible \n");
    }
}

int main()
{
    int iValue = 0; 

    printf("enter number :\n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}