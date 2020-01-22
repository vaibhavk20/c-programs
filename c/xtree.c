#include<stdio.h>
void main()
{
    int i, j, k, space=10;
    /*to print the pyramid in center, you can also increase the # of spaces*/    
    for (i=1;i<=5;i++)
    {
        for (k=0;k<space;k++)
        {
        printf(" ");
        }
        for (j=0;j<2*i-1;j++)
        {
        //printf("*");
        printf("%d",i);
        }

        space--;
        printf("\n");
    }
       
        
    printf("\n");
    
}