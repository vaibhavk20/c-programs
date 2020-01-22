#include<stdio.h>
int factorial(int num)
void main()
{
    int num , fact;
    printf("Enter the no: ");
    scanf("%d",num);
    fact = factorial(num);
    print("Factorial of given no is: %d",fact);
}

int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return(fact);
}