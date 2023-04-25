#include<stdio.h>
int main()
{
    int n;

    printf("n=");
    scanf("%d",&n);
        if (n==1)
        {
            printf("%c monday",n);
        }
        else if (n==2){printf("%c tuseday",n);}
        else if (n==3){printf("%c wednesday",n);}
        else if (n==4){printf("%c thursday",n);}
        else if (n==5){printf("%c friday",n);}
        else if (n==6){printf("%C saturday",n);}
        else if (n==7){printf("%c sunday",n);}
        else
        {
            printf("this is invaild");
        }


        return 0;

} 