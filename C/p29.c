#include<stdio.h>
int main ()
{
    int n, p, a, percentage, marathi, english, guj, hindi, math, sum;

    printf("marathi=");
    scanf("%d",&marathi);

    printf("english=");
    scanf("%d",&english);

    printf("guj=");
    scanf("%d",&guj);

    printf("hindi=");
    scanf("%d",&hindi);

    printf("math=");
    scanf("%d",&math);

    sum=marathi+english+guj+hindi+math;

    printf("sum=%d\n",sum);

    percentage=(sum*100)/500;

    printf ("percentage=%d\n",percentage);

    if (percentage>=70)
        {
            printf(" distinction");
        }
            else if(percentage>=60 && percentage<70)
            {printf("first class");}
            else if(percentage>60 && percentage<50)
            {printf("sencond class");}
            else if (percentage>=50 && percentage<40)
            {printf("third class");}
    else
    { printf ("fail");}

    return 0;

}