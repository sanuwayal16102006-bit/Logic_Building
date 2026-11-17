#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int ino)
{
    int icnt = 0; 

    for(icnt = 2; icnt <= ino/2; icnt++)
    {
        if((ino % icnt) == 0)
        {
            return false;  
        }
        
    }

    return true;
}

int main(void)
{
    int iValue = 0;
    bool bret = false;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bret = CheckPrime(iValue);
    
    if(bret)
    {
        printf("it is prime number\n");
    }
    else
    {
        printf("it not a prime number\n");
    }

    return EXIT_SUCCESS;
}