/*to find compound interest*/
#include <stdio.h>
#include <math.h>
void main()
{
  float p,r,t,amount,ci;
  printf("Enter principal amount, rate of interest and time period:");
  scanf("%f%f%f",&p,&r,&t);
  amount = p*pow((1+r/100), t);
  ci = amount-p;
  printf("\nCompound Interest = %f",ci);
}
