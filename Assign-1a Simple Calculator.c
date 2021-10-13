/*This program performs basic tasks such as addition, subtraction, multiplication and division.
   Written By :Prashik Chavan
         Date :11/10/2021
      Roll No.:SEITA120
*/  
#include <stdio.h>
#include <math.h>
int main ()
{
    char operator;
    double n1, n2, result;
    
    printf("Enter an operator (+,-,*,/) :");
    scanf ("%c", &operator);
    
    switch (operator)
    {
        case'+':
        printf ("Enter two operands:\n");
        scanf ("%lf %lf", &n1, &n2);

        printf("%lf + %lf = %lf",n1 ,n2, n1+n2 );
        break;
        
        case'-':
        printf ("Enter two operands:\n");
        scanf ("%lf %lf", &n1, &n2);

        printf("%lf - %lf = %lf",n1 ,n2, n1-n2);
        break;
        
        case'*':
        printf ("Enter two operands:\n ");
        scanf ("%lf %lf", &n1, &n2);

        printf("%lf * %lf = %lf",n1 ,n2, n1*n2/2);
        break;
        
        case'/':
        printf ("Enter two operands:\n ");
        scanf ("%lf %lf", &n1, &n2);

        printf("%lf / %lf = %lf",n1 ,n2, n1/n2);
        break;
    
        default:
        printf("\nYou have not Entered Correct Operators");
      
    }
    return 0;
}
