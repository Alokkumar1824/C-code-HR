#include <stdio.h>

int main()
{
   int a,b,n,maxN;
   scanf("%d %d",&a,&b);
   n=((a-b)>>31)&1;
   maxN=a*(1-n)+b*n;
   printf("%d",maxN);
   
   
   return 0;
}