#include <stdio.h>
#include <string.h>
int main ()
{
    char a[50],b[50];
    int i,j,l1=0,l2=0;

    printf("Enter name-");
    scanf("%s",a);
    

    printf("Enter name-");
    scanf("%s",b);

    for (i=0; a[i]!='\0'; i++)
    {
        l1++;
    }

    for (j=0; b[j]!='\0'; j++)
    {
        l2++;
    }
    
    for (j=0,i=l1; j<=l2; i++,j++)
    {
        a[i]=b[j];
        
    }
    puts(a);
    return 0;
}