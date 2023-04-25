#include<stdio.h>
int main()
{
    int x;

    printf("x=");
    scanf("%d",&x);

    if (x>15)
    {
        printf("%d is greater than 15",x);
    }      
        else
        {
            if (x==15)
            {
                printf("%d is euqal to 15",x);
            }
            else
            {
                printf("%d is less than 15",x);
            }
        }
    return 0;
    }