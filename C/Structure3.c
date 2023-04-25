#include <stdio.h>
#include <string.h>
#include<stdlib.h>

struct student
{
    char student[50];
    int rollno;
}*s;

int main ()
{
    char c;
    int i,n;
    s=(struct student *)malloc(sizeof(struct student));
    
    printf("n=");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
    printf("Enter rollno= \n");
    scanf("%d",&s->rollno); 
    scanf("%c",&c);
    printf("Enter student= \n");
    fgets(s->student,sizeof(s->student),stdin); 
    scanf("%c",&c);
    }
    for (i=0; i<n; i++)
    {
    printf("%s",s->student);
    printf("%d \n",s->rollno);
    }    
    
    return 0;

}