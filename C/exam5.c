#include <stdio.h>
#include <string.h>
struct student 
{
    char name [50];
    int rollno;
};
int main ()
{
    
    struct student s;
   
    printf ("name=");
    fgets (s.name, sizeof(s.name), stdin);

    printf("rollno=");
    scanf("%d",&s.rollno);

    puts(s.name);
    printf("%d",s.rollno);

    return 0;

    
}