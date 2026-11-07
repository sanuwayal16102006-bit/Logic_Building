#include<stdio.h>
#include<stdlib.h>

long long Factorial(int ino)
{
    int icnt = 0;
    long long ifact = 0;
    
    for(icnt = 1, ifact = 1; icnt <= ino; icnt ++ )
    {
        ifact = ifact * icnt;
    }

    return ifact;
}

int main()
{
    int iValue = 0;
    long long iret = 0; 
    
    printf("Enter number :\n");
    scanf("%d",&iValue);
    
    iret = Factorial(iValue);

    printf("Factorial is :%lld\n",iret);
    
    return EXIT_SUCCESS;
}