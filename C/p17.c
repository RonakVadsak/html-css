#include<stdio.h>
int main()
{
    float basic, da=0.4, hra=0.2, ra=0.1, total;

    printf ("basic=");
    scanf("%f",&basic);

    da=basic*0.4;
    printf("da=%.2f\n",da);

    hra=basic*0.2;
    printf("hra=%.2f\n",hra);

    ra=basic*0.1;
    printf("ra=%.2f\n",ra);

    total=basic+da+hra+ra;

    printf("total=%.2f\n",total);

    return 0;

}