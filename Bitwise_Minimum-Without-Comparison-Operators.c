#include <stdio.h>

int main()
{
   int a,b,r,n;
   scanf("%d %d",&a,&b);
   r=a&b;
   n=r<<31;
   if(n-r)printf("%d",b);
   else printf("%d",a);
   return 0;
}