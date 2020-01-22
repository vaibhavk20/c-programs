#include<stdio.h>
void main()
{
    int array[7] = {12,1,34,123,54,23,99};
    int small = array[0];
    for(int i=0;i<7;i++)
    {
        if(array[i]<small)
            small = array[i];
    }
    printf("small no is:%d\n",small);
    printf("Array is:-");
    for (int i = 0; i < 7; i++)
    {
        /* code */
        printf("%d\t",array[i]);
    }
    printf("\n");
}