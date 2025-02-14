#include <stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    r=(n & (n+1));
    if(n==0)printf("No");
    else if(r==0)printf("Yes");
    else printf("No");
}