#include <stdio.h>

int main() 
{
    int n;
    scanf("%d",&n);
    
    if(n==0)
    {
        printf("Circle");
    }
    
    else if (n==3)
    {
        int side1,side2,side3;
        scanf("%d %d %d",&side1,&side2,&side3);
        
        int angle1,angle2,angle3;
        scanf("%d %d %d",&angle1,&angle2,&angle3);
        
        if((angle1+angle2+angle3)==180 && side1+side2>side3 && side2+side3>side1 && side3+side1>side2 && side1>0 && side2>0 && side3>0 && angle1>0 && angle2>0 && angle3>0)
            
        {
            if(side1==side2 && side2==side3 && angle1==angle2 && angle2==angle3)
            {
                printf("Equilateral Triangle");
            }
            
            else if(side1==side2 || side2==side3 || side1==side3)
            {
                printf("Isosceles Triangle");
            }
            else if(side1!=side2 && side2!=side3)
            {
                printf("Scalene Triangle");
            }
            else
            {
            printf("Invalid Figure");
            }
        
        }
        else
        {
            printf("Invalid Figure");
        }
        
    }
    
    else if(n==4)
    {
        int side1,side2,side3,side4;
        scanf("%d %d %d %d",&side1,&side2,&side3,&side4);
        
        int angle1,angle2,angle3,angle4;
        scanf("%d %d %d %d",&angle1,&angle2,&angle3,&angle4);
        
        if((angle1+angle2+angle3+angle4)==360 && side1>0 && side2>0 && side3>0 && side4>0 && angle1>0 && angle2>0 && angle3>0 && angle4>0)
            
        {
            if(side1==side2 && side2==side3 && side3==side4 && angle1==90 && angle2==90 && angle3==90 && angle4==90 )
            {
                printf("Square");
            }
            else if (side1==side3 && side2==side4 && angle1==90 && angle2==90 && angle3==90 && angle4==90 )
            {
                printf("Rectangle");
            }
            else if(side1==side2 && side2==side3 && side3==side4 && angle1==angle3 && angle2==angle4 && angle1!=90 && angle2!=90 && angle3!=90 && angle4!=90 )
            {
                printf("Rhombus");
            }
            else if(side1==side3 && side2==side4 && angle1==angle3 && angle2==angle4)
            {
                printf("Parallelogram");
            }
            else
        {
            printf("Invalid Figure");
        }
            
            
        }
        else
        {
            printf("Invalid Figure");
        }
        
    }
    
    else 
    {
        printf("Invalid Figure");
    }
       
    return 0;
}