#include"Header.h"

//////////////////////////////////////////////////////////////////
//
//  Entery point of the application
//
//////////////////////////////////////////////////////////////////


int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0; 

    printf("Enetr first number :\n");
    if(scanf("%d",&iValue1) !=1)
    {
        fprintf(stderr,"Unable to proceed as Input is invalid\n");

        return EXIT_FAILURE;
    }

    printf("Enetr second number :\n");
    if(scanf("%d",&iValue2) !=1)
    {
        fprintf(stderr,"Unable to proceed as Input is invalid\n");

        return EXIT_FAILURE;
    }

    iResult = Addition(iValue1, iValue2); 

    printf("Addition is : %d\n",iResult);

    return EXIT_SUCCESS ;
}   
