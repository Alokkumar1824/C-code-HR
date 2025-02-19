 #include <stdio.h>

int main() {

    int a,b;

    scanf("%d %d",&a,&b);

    int x = a^b;

    if (x == -1 )

        printf("YES");

    else

        printf("NO");

    return 0;

}