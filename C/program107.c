#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void CheckPrime(int ino)
{
    int icnt = 0;
    int isum = 0;

    for(icnt = 0; icnt <= ino/2; icnt++)
    {
        if((ino % icnt) == 0)
        {
            isum = isum + icnt;  
        }
        
    }

    if(isum == 1)
    {
        printf("it is prime number");
    }
    else
    {
        printf("it not prime number");
    }
}
int main(void)
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    CheckPrime(iValue);

    return EXIT_SUCCESS;
}