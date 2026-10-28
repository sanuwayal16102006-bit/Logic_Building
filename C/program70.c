#include<stdio.h>
#include<stdlib.h>


void Display(int ino)
{
    int icnt = 0;
    
    for(icnt = 1; icnt <= ino; icnt ++)
    {
       printf("Jay Ganesh...\n");
    }
   
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}