#include <stdio.h>
#include<string.h>

struct student
{
    char name[50];
    int rollno;
};
int main ()
{
    int i,n;
    char c;
    struct student s[50];

    printf("n=");
    scanf("%d",&n);
    scanf("%c",&c);
    
    for (i=1; i<n; i++)
    {
        printf("rollno= \n");
        scanf("%d",&s[i].rollno);

        scanf("%c",&c);
        
        printf("name= \n");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        scanf("%c",&c);
    }
    printf("student are here \n");

    for (i=1; i<n; i++)
    {
        
        printf("%d \n",s[i].rollno);
        puts(s[i].name);
    }

    return 0;
}
