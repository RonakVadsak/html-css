#include<stdio.h>
int main ()
{
    char c,d[50];
    FILE*fp;
    
    fp=fopen("FILE1.RTF","r");
    fp=fopen("FILE2.txt","w");
    c=fgetc(fp);
    
    while(c!=EOF)
    {
        printf("%c",c);
        c=fgetc(fp);
    }
    
    printf("enter string=");
    scanf("%s",d);
    
    fputs(d,fp);
    
    fclose(fp);
    fclose(fp);

return 0;
}