#include<stdio.h>

int main()
{
    //initialization of array
    int array[50];
    int size_of_array;

    //TAke the size array from the user
    printf("Enter the size of array:-");
    scanf("%d",&size_of_array);

    //accept the element from user
    printf("Enter the Elements:\n");
    for(int i=0;i<size_of_array;i++)
        scanf("%d",&array[i]);

    //print the elements in array
    printf("Your elements are:-\n");
    for(int i=0;i<size_of_array;i++)
        printf("%d\n",array[i]);

    //disply the sum of array elements
    int sum=0;
    printf("\nSum operation is perform\n");
    for(int i=0;i<size_of_array;i++)
        {
            printf("element :%d",sum);
            sum = sum + array[i];
            printf("+%d = %d\n",array[i],sum);
        }
    printf("\nFinal sum of the element is :%d\n",sum);

    //Display the Even position elements
    printf("\nEven position no:\n");
    for(int i=0;i<size_of_array;i=i+2)
        printf("\t\t%d\t",array[i]);
    printf("\n");

    //Display the Odd position elements
    printf("\nodd position no:\n");
    for(int i=1;i<size_of_array;i=i+2)
        printf("\t\t%d\t",array[i]);
    printf("\n");

    //Diffrence between sum of even and odd opsition elements
    //Display the sum of Even position elements
    printf("\nSum of Even position no:\n");
    int even_sum = 0;
    for(int i=0;i<size_of_array;i=i+2)
        {  
            printf("%d",even_sum);
            even_sum = even_sum  + array[i];
            printf("+ %d = %d\n",array[i],even_sum);
        }
    printf("Your even sum is: %d",even_sum);
    printf("\n");

     //Display the sum of Odd position elements
    printf("\nSum of Odd position no:\n");
    int odd_sum = 0;
    for(int i=1;i<size_of_array;i=i+2)
        {  
            printf("%d",odd_sum);
            odd_sum = odd_sum  + array[i];
            printf("+ %d = %d\n",array[i],odd_sum);
        }
    printf("Your odd sum is : %d",odd_sum);
    printf("\n");
    int diff_sum;
    if(even_sum>=odd_sum)
        {
            diff_sum = even_sum - odd_sum ;
            printf("Here use even_sum - odd_sum\n");
            printf("Diffrence of even and odd sum is :\n\t\t%d\n",diff_sum);
        }
    else
    {
        diff_sum = odd_sum - even_sum;
        printf("Here use odd_sum - even_sum\n");
        printf("Diffrence of even and odd sum is :\n\t\t%d\n",diff_sum);
    } 

    //insertion of element of at the last 
    // size_of_array = size_of_array + 1 ; 
    printf("Enter the element which you want to insert at the last in array : ");
    scanf("%d",&array[size_of_array]);
    size_of_array = size_of_array + 1 ; 
    //print the new array 
    printf("updated array is :\n");
    for(int i= 0;i<size_of_array ;i++)
    {
        printf("%d\n",array[i]);
    }    
    return 0;
}    