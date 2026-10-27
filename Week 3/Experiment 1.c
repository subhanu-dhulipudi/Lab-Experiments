/*to find the square root of a given number*/
#include <stdio.h>
#include <math.h>
void main()
{
    float n,root;
    printf("\nEnter a number:");
    scanf("%f",&n);
    root = sqrt(n);
    printf("\nSquare root of %f = %f",n,root);
}
