/*to calculate a household electricity bill*/
#include<stdio.h>
void main()
{
    int units;
    float rate,bill;
    printf("\nEnter units consumed:");
    scanf("%d",&units);
    if(units<=100)
       rate = 1.50;
    else if(units<=200)
      rate = 2.50;
    else if(units<=500)
       rate = 4.00;
    else
       rate = 6.00;
    bill = units*rate;
    printf("\nTotal bill = Rs. %f", bill);
}
