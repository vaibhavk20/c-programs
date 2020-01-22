#include<stdio.h>
void revers(int array[10],int size);
void main()
{
    int array[20];
    int size,i;
    printf("Enter the Size of array:");
    scanf("%d",&size);
    printf("Enter the array element:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nYou enter array is:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",array[i]);
    }
    revers(array,size);
}

void revers(int array[10],int size)
{
    int low=0 ;
    int high=size-1, temp;
    // int lim=(low+high)/2;
    for(int i=0;i<size/2;i++)
    {
        temp = array[low];
        array[low]=array[high];
        array[high]=temp;
        low++;
        high--;
    }
    printf("\nyour revers array is:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
}