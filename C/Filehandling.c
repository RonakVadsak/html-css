#include <stdio.h>
int main ()
{
    char c;
    FILE *fp;
    fp=fopen("FILE1.RTF","r");
    c=fgetc(fp);
    while(c!=EOF)
    {
        printf("%c",c);
        c=fgetc(fp);
    }
    fclose(fp);

    return 0;
}