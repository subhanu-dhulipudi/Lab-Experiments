/*to evaluate the given expressions*/
#include<stdio.h>
void main()
{
    int A,B,C,D,E,F,G,i,J,r;
    printf("Enter values of A,B,C,D,E,F,G:");
    scanf("%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&G);

    r = A+B*C+(D*E)+F*G;
    printf("\na.A+B*C+(D*E)+F*G = %d",r);

    r = A/B*C-B+A*D/3;
    printf("\nb.A/B*C-B+A*D/3 = %d",r);

    r = A+++B---A;
    printf("\nc.A+++B---A = %d",r);

    printf("\nEnter value of i:");
    scanf("%d",&i);
    J = (i++)+(++i);
    printf("\nd.J=(i++)+(++i)= %d",J);
}
