#include<stdio.h>
void main()
{
    int a[10] = {10,12,13,14,15,16,17};
    int b[10] = {0};        //assing the whole index as the zero  
    for(int i=0;i<5;i++)
    {
        b[i]=a[i];
        //printf("second arry is :-%d",b[i]);
    }
    printf("second array is :-");
    for(int i=0;i<10;i++)
    {
        printf("%d",b[i]);
    }
    printf("\n");
}