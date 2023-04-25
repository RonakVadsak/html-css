#include <stdio.h>
int main()
{
    float f, c;

    printf("f=");
    scanf("%f",&f);

    c=(f-32)*5/9;

    printf("c=%f",c);

    return 0;

}