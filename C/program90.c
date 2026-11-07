#include<stdio.h>
#include<stdlib.h>

int Summation(int ino)
{
    int icnt = 0, isum = 0;

    for(icnt = 1; icnt <= ino; icnt ++ )
    {
        isum = isum + icnt;
    }

    return isum;
}

int main()
{
    int iValue = 0, iret = 0; 
    
    printf("Enter number :\n");
    scanf("%d",&iValue);
    
    iret = Summation(iValue);

    printf("Summation is :%d\n",iret);
    
    return EXIT_SUCCESS;
}