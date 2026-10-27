/*to find distance travelled by an object*/
#include <stdio.h>
void main()
{
    float u,a,t,s;
    printf("\nEnter initial velocity,acceleration and time:");
    scanf("%f %f %f",&u,&a,&t);
    s = u*t + 0.5*a*t*t;
    printf("\nDistance travelled = %f",s);
}
