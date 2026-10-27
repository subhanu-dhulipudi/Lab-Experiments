/*to find the max and min of four numbers using if-else.*/
#include<stdio.h>
void main()
{
    int a,b,c,d,max,min;
    printf("Enter four numbers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    max=a;
    min=a;
    if(b>max)
       max= b;
    else if(b<min)
       min =b;
    if(c>max)
       max =c;
    else if(c<min)
        min= c;
    if(d>max)
        max= d;
    else if(d<min)
      min= d;
    printf("\nMaximum=%d",max);
    printf("\nMinimum=%d",min);
}
