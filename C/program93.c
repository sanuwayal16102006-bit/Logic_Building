#include<stdio.h>
#include<stdlib.h>

long int Factorial(int ino)
{
    int icnt = 0;
    long int ifact = 0;
    
    for(icnt = 1, ifact = 1; icnt <= ino; icnt ++ )
    {
        ifact = ifact * icnt;
    }

    return ifact;
}

int main()
{
    int iValue = 0;
    long int iret = 0; 
    
    printf("Enter number :\n");
    scanf("%d",&iValue);
    
    iret = Factorial(iValue);

    printf("Factorial is :%ld\n",iret);
    
    return EXIT_SUCCESS;
}