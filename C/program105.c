#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPerfect(int ino)
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
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bret = false; 
    
    printf("Enter number :\n");
    scanf("%d",&iValue);
    
    bret = CheckPerfect(iValue);

    if(bret == true)
    {
        printf("it is perfect number\n");
    }
    else
    {
        printf("it is not prefect number \n");
    }
    
    return EXIT_SUCCESS;
}

// Time complexity : 0(N/2)