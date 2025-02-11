#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int case1= n%2==0 && n>10;
    int case2= n>15 && n%3==0;
    int case3= n%7==0;
    
    if (n<1)
    {
        printf("The verdict for the number %d is: INVALID",n);
    }
    else if (case1 && case2 && case3)
    {
        printf("The verdict for the number %d is: SUPERNATURAL",n);
    }
    else if ((case1 && case2)|| (case2 && case3) || (case1 && case3))
    {
        printf("The verdict for the number %d is: MIRACULOUS",n);
    }
    else if ( case1 || case2 || case3)
    {
        printf("The verdict for the number %d is: MAGICAL",n);
    }
    else
    {
        printf("The verdict for the number %d is: NORMAL",n);
    }

    
    return 0;
}