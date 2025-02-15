#include <stdio.h>
int main()
{
    int a,b,n,r;
    scanf("%d %d",&a,&b);
    n=a^b;
    r=(n & (n-1));
    if(n>0 && r==0)printf("Yes");
    else printf("No");
}