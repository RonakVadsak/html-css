#include <stdio.h>
struct student 
{
    char name [20];
    int rollno;
};
int main ()
{
    struct student s;
    
    printf("name=");
    fgets(s.name, sizeof(s.name), stdin);

    printf("rollno= \n");
    scanf("%d",&s.rollno);

    puts(s.name);
    printf("%d",s.rollno);

    return 0;
}
// Student data with structure:-