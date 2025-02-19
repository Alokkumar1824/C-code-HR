#include <stdio.h>

int main() {

    int n ;

    scanf("%d",&n);\

    int x = (n&2) +(n&1);

      if (x==0)

        printf("Yes");

    else

        printf("No");

    return 0;

}