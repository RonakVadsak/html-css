# include <stdio.h>
void circle ();
void rectangle();
int main ()
{
    circle();
    rectangle();

    return 0;
}
void circle()
{
    int r,circle;

    printf("r=");
    scanf("%d",&r);

    circle=3.14*r*r;
    printf("%d \n",circle);
}
void rectangle()
{
    int l,b,rectangle;

    printf("l=");
    scanf("%d",&l);

    printf("b=");
    scanf("%d",&b);

    rectangle=l*b;
    printf("%d \n",rectangle);
}