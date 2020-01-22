#include<stdio.h>
void display(char *string);

void main ()
{
    char accept_string[50];
    printf("Enter the String:-");
    //get function are use to get warning but it work
    // gets(accept_string);
    scanf("%s",accept_string);
    // printf("your sting is :%c\n",accept_string);
    display(accept_string);
}   
void display(char *string)
{
    printf("Your string is :-%s\n",string);
  
    // while (*string!='\0')
    // {
    //     printf("%c\n",string);
    //     string++;
    // }
    
}