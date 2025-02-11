#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int angle;
    scanf("%d",&angle);
    if(angle>=0 && angle<90 )
    {printf("Acute Angle");}
    else if(angle==90) 
    { printf("Right Angle");}
    else if (angle>90 && angle<180)
             { printf("Obtuse Angle");}
   else if(angle==180) 
             { printf("Straight Angle");}
    else if(angle>180 && angle<360) 
             {printf("Reflex Angle");}
    else if(angle==360|| angle%360==0)
             { printf("Full Rotation");}
             else
             {
                 if(angle%360!=0)
                 {
                     int ang=angle%360;
                      if(ang>=0 && ang<90 ) 
    {printf("Acute Angle");}
    else if(ang==90) 
    { printf("Right Angle");}
    else if (ang>90 && ang<180) 
             { printf("Obtuse Angle");}
   else if(ang==180) 
             { printf("Straight Angle");}
    else if(ang>180 && ang<360)
             {printf("Reflex Angle");}
    else if( ang==360||  ang%360==0)
             { printf("Full Rotation");}
                 }
             }
             
    return 0;
}