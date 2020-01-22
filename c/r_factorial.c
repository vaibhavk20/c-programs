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
    // int fact=1
    if(num>2)
    {
        return(num*factorial(num-1));
    }
}