#include <stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    r=(n & (n-1));
    if(n>0 && r==0)printf("1");
    else printf("-1");
}