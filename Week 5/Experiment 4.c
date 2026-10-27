/*menu-driven calculator using switch statement*/
#include <stdio.h>
void main()
{
    float a,b;
    int choice;
    printf("\nEnter two numbers:");
    scanf("%f%f",&a,&b);
    printf("\n1.Addition 2.Subtraction 3.Multiplication 4.Division");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("Result=%f",a+b);
                break;
        case 2: printf("Result=%f",a-b);
                break;
        case 3: printf("Result =%f",a*b);
                break;
        case 4: if(b==0)
                    printf("\nDivision by zero is not possible");
                else
                    printf("\nResult = %f", a/b);
                break;
        default: printf("Invalid option");
    }
}
