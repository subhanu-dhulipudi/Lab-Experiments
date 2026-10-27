/*to find the maximum of three numbers using conditional operator*/
#include<stdio.h>
void main()
{
    int a,b,c,max;
    printf("\nEnter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("\nMaximum = %d",max);
}
