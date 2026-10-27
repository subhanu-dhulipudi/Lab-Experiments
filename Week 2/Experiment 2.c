/*to convert Fahrenheit to Celsius and vice versa*/
#include <stdio.h>
void main() 
{
 float fahrenheit, celsius;
 int choice;
 printf("\n1. Fahrenheit to Celsius");
 printf("\n2. Celsius to Fahrenheit");
 printf("\nEnter your choice (1 or 2):");
 scanf("%d",&choice);

    if(choice == 1) 
    {
        printf("\nEnter temperature in Fahrenheit:");
        scanf("%f",&fahrenheit);
        celsius =(fahrenheit - 32)* 5.0/ 9.0;
        printf("\n%f Fahrenheit = %f Celsius",fahrenheit,celsius);
    } 
    else if(choice == 2) 
    {
        printf("Enter temperature in Celsius:");
        scanf("%f",&celsius);
        fahrenheit=(celsius*9.0/5.0)+ 32;
        printf("\n%.f Celsius = %.2f Fahrenheit",celsius,fahrenheit);
    } 
    else 
    {
        printf("\nInvalid choice");
    }
}
