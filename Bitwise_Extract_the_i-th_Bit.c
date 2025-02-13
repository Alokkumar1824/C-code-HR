#include <stdio.h>

int main()
{
    int n,i,res;
    scanf("%d",&n);
    scanf("%d",&i);
    
    res=((n>>i)&1);
    
    if(res==0)printf("0");
    else {
        printf("1");
    }
    

    return 0;
}