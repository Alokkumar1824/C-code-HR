#include <stdio.h>

int main() {

    int a,b;

    scanf("%d %d",&a,&b);

    int or = a|b;

    int xor = a^b;

    printf("%d",or ^ xor);

    return 0;

}