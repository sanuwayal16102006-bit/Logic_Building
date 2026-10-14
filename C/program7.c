/*
    Step 1: Understand the problem statement
    Step 2: Write the algorithm
    Step 3: Decide the programming language
    Step 4: Write the program
    Step 5: Test the program
*/
///////////////////////////////////////////////////////////////////
//
//  Step 1: Understand the problem statement
//         user is going to enter any 2 integers 
//         And we have to perform the addition
//
//////////////////////////////////////////////////////////////////
//
//  Step 2: Write the algorithm
/*
    Start
        Except first number as no1
        Except Second number as no1
        create the veriable as Ans to store the result
        perform the addition and store into Ans
        Display the result from Ans

    End
*/
///////////////////////////////////////////////////////////////////
//
//  Step 3: Decide the programming language
//          We select C programming
//
///////////////////////////////////////////////////////////////////
//
//  Step 4: Write the program
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

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

int Addition(int iNo1 , int iNo2)
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

    return 0;
}   
