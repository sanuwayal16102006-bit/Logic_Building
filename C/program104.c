#include<stdio.h>
#include<stdlib.h>

void CheckPerfect(int ino)
{
    int icnt = 0, isum = 0;

    for(icnt = 1; icnt <= ino/2; icnt ++ )
    {
       if((ino % icnt) == 0)
       {
         isum = isum + icnt;
       }
    }

    if(isum == ino)
    {
        printf("It is Perfect number \n");
    }
    else
    {
        printf("it is not perfect number \n");
    }
}

int main()
{
    int iValue = 0, iret = 0; 
    
    printf("Enter number :\n");
    scanf("%d",&iValue);
    
    CheckPerfect(iValue);
    
    return EXIT_SUCCESS;
}

// Time complexity : 0(N/2)