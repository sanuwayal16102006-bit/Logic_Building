//Input : 10
// 1  3  5  7  9

#include<stdio.h>
#include<stdlib.h>


int Summation(int ino)
{
    int icnt = 0;
    int isum = 0;
    
    for(icnt = 1; icnt <= ino; icnt++)  
    {
       isum = isum + icnt;
       
    }

    return isum;
}

int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter the frequency :\n");
    scanf("%d",&iValue);

    iret = Summation(iValue);

    printf("Summmation is :%d\n",iret);
    return EXIT_SUCCESS;
}