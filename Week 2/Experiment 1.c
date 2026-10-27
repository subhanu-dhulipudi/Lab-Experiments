/* to find sum and average of 3 numbers.*/
#include <stdio.h>
void main()
{
float n1,n2,n3,sum,average;
    printf("Enter three numbers:");
    scanf("%f %f %f", &n1, &n2, &n3);
    sum = n1+n2+n3;
    average = sum/3.0;
    printf("Sum = %f\n", sum);
    printf("Average = %f\n", average);
}
