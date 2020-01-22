#include<stdio.h>
int factorial(int num);
void main()
{
    int num , fact;
    printf("Enter the no: ");
    scanf("%d",&num);
    fact = factorial(num);
    printf("Factorial of given no is: %d\n",fact);
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