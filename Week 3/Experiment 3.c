/*to find area of a triangle using heron's formula*/
#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,s,area;
    printf("\nEnter three sides of the triangle:");
    scanf("%f%f%f",&a,&b,&c);
    s= (a+b+c)/2;
    area =sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nArea of the triangle = %f",area);
}
