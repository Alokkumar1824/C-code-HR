#include <stdio.h>

int main() {

    int n;

    scanf("%d",&n);

    int sign=n>>31;
    
    if (sign == 0)

        printf("Positive");

    else

        printf("Negative");

    return 0;
}