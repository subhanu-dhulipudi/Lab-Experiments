/*to take marks of 5 subjects and find total and average*/
#include<stdio.h>
void main()
{
    int m1,m2,m3,m4,m5,total;
    float average;
    printf("\nEnter marks of 5 subjects:");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total= m1+m2+m3+m4+m5;
    average =total/5.0;
    printf("\nTotal=%d",total);
    printf("\nAverage=%f",average);
}
