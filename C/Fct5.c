#include <stdio.h>
void circle (int r);
void rectangle (int l, int b);
void triangle (int l, int b);
int main ()
{
    int r,l,b;
    printf ("r=");
    scanf("%d",&r);
    circle(r);

    printf ("l=");
    scanf("%d",&l);
    printf ("b=");
    scanf("%d",&b);
    rectangle(l,b);

    printf ("l=");
    scanf("%d",&l);
    printf ("b=");
    scanf("%d",&b);
    triangle(l,b);

    return 0;
}
void circle (int r)
{
    int circle;
    circle= 3.14*r*r;
    printf("circle=%d \n",circle);
}
void rectangle (int l,int b)
{
    int rectangle;
    rectangle= l*b;
    printf("rectangle=%d \n",rectangle);
}
void triangle (int l,int b)
{
    int triangle;
    triangle= (l*b)/2;
    printf("triangle=%d",triangle);
}

// without return and with perameter of circle, rectangle, triangle:-