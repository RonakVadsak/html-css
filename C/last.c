#include<stdio.h>
 
enum year{monday=1, tuseday, wesnesday, thursday, friday, staurday, sunday};
int main()
{
   int i;
   for (i=monday; i<=sunday; i++)     
      printf("%d ", i);
       
   return 0;
}