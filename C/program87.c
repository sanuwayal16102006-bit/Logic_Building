#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int ino)
{
    if(((ino % 5) == 0))
    {
        if( ((ino % 3) == 0))
        {
         printf("It is divisible \n");
        }
        else
        {
          printf("it Not Divisible \n");  
        }
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