#include<stdio.h>
int main()
{
    int a,b;

    printf("a=");
    scanf("%d",&a);

    printf("b=");
    scanf("%d",&b);

    printf("%d",~a);
    printf("%d\n",~b);
    
    printf("%d\n",a<<1);
    printf("%d\n",a>>1);
    printf("%d\n",b<<1);
    printf("%d\n",b>>1);
    
    printf("%d\n",a&b);
    printf("%d\n",a|b);
    printf("%d\n",a^b);


    return 0;
}