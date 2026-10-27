/*to find the roots of the quadratic equation*/
#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,r1,r2;
    printf("Enter coefficients a,b and c:");
    scanf("%f%f%f",&a,&b,&c);
    d = b*b-4*a*c;
    if(d>0)
    {
     r1=(-b+sqrt(d))/(2*a);
     r2=(-b-sqrt(d))/(2*a);
     printf("\nRoots are real and distinct: %f and %f",r1,r2);
    }
    else if(d==0)
    {
     r1 = -b/(2*a);
     printf("\nRoots are real and equal: %f and %f",r1,r1);
    }
    else
    {
     printf("\nRoots are complex: %f + %fi and %f - %fi",-b/(2*a),sqrt(-d)/(2*a),-b/(2*a),sqrt(-d)/(2*a));
    }
}
