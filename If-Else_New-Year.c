#include <stdio.h>

int main() 
{
    int budget,numGuests,foodCostPerGuest,decorationCost,musicCost,extraExpenses,total;
    scanf("%d\n",&budget);
    scanf("%d\n",&numGuests);
    scanf("%d\n",&foodCostPerGuest);
    scanf("%d\n",&decorationCost);
    scanf("%d\n",&musicCost);
    scanf("%d\n",&extraExpenses);

    total=(numGuests*foodCostPerGuest)+decorationCost+musicCost+extraExpenses;
    if(total<=budget)
    {
        if(numGuests>5 && numGuests<=50)
        {
            if(decorationCost<budget*0.3 || numGuests*foodCostPerGuest<budget*0.5)
            {
                if(numGuests>25)
                {
                    if(musicCost>0)
                    {
                        printf("Celebration Approved");
                    }
                    else
                    {
                        printf("Celebration Denied");
                    }
                
                }
                else
                {
                    printf("Celebration Approved");
                }
            }
            else
            {
                printf("Celebration Denied");
            }
        }
        else
        {
            printf("Celebration Denied");
        }
    }
    else
    {
        printf("Celebration Denied");
    }
        
    return 0;
}