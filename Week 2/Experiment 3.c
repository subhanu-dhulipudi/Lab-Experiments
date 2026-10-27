/*to calculate simple interest*/
#include <stdio.h>
void main()
{
   float p,r,t,si;
   printf("Enter principal amount,rate of interest and time period:");
   scanf("%f%f%f",&p,&r,&t);
   si=(p*r*t)/100;
   printf("\nSimple Interest = %f",si);
}
