#include<stdio.h>
int main ()
{
    int i,n;
    printf("n=");
    scanf("%d",&n);


    for(i=1; i<n; i++)
    {
        if(i%2==0)
            {
                printf("even=%d \n",i);
            }
        else 
            {
                printf("odd=%d \n",i);
            }
    }
return 0;
}