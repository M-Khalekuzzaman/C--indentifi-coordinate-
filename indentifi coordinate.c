#include<stdio.h>
int main()
{
    int x,y;
    printf("Inter your x value :");
    scanf("%d",&x);
    printf("Inter your y value :");
    scanf("%d",&y);

    printf("Input the coordinate(x,y) : (%d,%d)\n",x,y);

    if(x>0 &&y>0)
        printf("Quadrant - 1(+,+)");
     else  if(x>0 &&y<0)
        printf("Quadrant - 3(+,-)");
       else   if(x<0 &&y>0)
        printf("Quadrant - 2(-,+)");
       else if(x<0 &&y<0)
        printf("Quadrant - 4(-,-)");
        else
            printf("Not Correct value");
        getch();
}
