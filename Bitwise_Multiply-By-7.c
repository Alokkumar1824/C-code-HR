#include <stdio.h>
int main() {

    int n ;

    scanf("%d",&n);

    int x=(n<<1)+(n<<1)+(n<<1)+n;
        // 2n  +  2n   +  2n + n  = 7n

    printf("%d",x);

    return 0;

}