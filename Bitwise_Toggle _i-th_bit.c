#include <stdio.h>

int main() 
{
    int n,i,a;
    scanf("%d",&n);
    scanf("%d",&i);
    a=n^(1<<i);
    printf("%d",a);
    
    return 0;
}