#include<stdio.h>
#include<stdlib.h>

int SumFactors(int ino)
{
    int icnt = 0, isum = 0;

    for(icnt = 1; icnt <= ino/2; icnt ++ )
    {
       if((ino % icnt) == 0)
       {
         isum = isum + icnt;
       }
    }
    return isum;
}

int main()
{
    int iValue = 0, iret = 0; 
    
    printf("Enter number :\n");
    scanf("%d",&iValue);
    
    iret = SumFactors(iValue);

    printf("Summation of Factors : %d\n",iret);
    
    return EXIT_SUCCESS;
}

// Time complexity : 0(N/2)