#include <stdio.h>
#include<string.h>

int main ()
{
    char c[100];
    FILE *fp;
    fp=fopen("file2.txt","w");
    printf("enter string=");
    scanf("%s",c);
    fputs(c,fp);
    fclose(fp);
    return 0;

}