#include<stdio.h>
int main()
{
    float d, r, pi=3.14, area, pr;

  

    printf ("d=");
    scanf("%f",&d);

      r=d/2;

    area=pi*r*r;
    pr=2*pi*r;

    printf("area=%f \n pr=%f", area,pr);

    return 0;


}