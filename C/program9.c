
#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////
//
//  Fumction Name : Addition
//  Input         : Interger, Integer
//  Output        : Integer
//  Description   : Performance addition
//  Date          : 04/10/2026
//  Author        : Saniya Sudhir Wayal
//
//////////////////////////////////////////////////////////////////

int Addition(
                int iNo1 ,      //first input
                int iNo2        //second input
            )
{
    int iAns = 0; 

    iAns = iNo1 + iNo2;     // Business Logic

    return iAns;
}

//////////////////////////////////////////////////////////////////
//
//  Entery point of the application
//
//////////////////////////////////////////////////////////////////


int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0; 

    printf("Enetr first number :\n");
    scanf("%d",&iValue1);

    printf("Enetr second number :\n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1, iValue2); 

    printf("Addition is : %d\n",iResult);

    return EXIT_SUCCESS ;
}   

//////////////////////////////////////////////////////////////////
//
//  Step 5: Test the program
//      Tested test cases
//  --------------------------------------------------
//      Input1       Input2     Output
//  --------------------------------------------------
//       10             11          21
//       10             0           10
//       0              11          11
//       20             -9          11
//       9              20          11
//       -9             -20         -29
//
//////////////////////////////////////////////////////////////////
