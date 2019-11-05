#include<stdio.h>
int main(void)
{
    float distance;
    int time,cost;

    printf("Enter distance and time:\n");
    scanf("%f%d",&distance,&time);

    if(distance <= 3){
        cost = 10;
    }else if(distance <= 13){
        cost = 10+ (distance-3)*2;
    }else{
        cost = 10+10*2+(distance - 13)*3;
    }

    cost = time / 5 * 2;
    printf("Cost is %d\n",cost);

    return 0;
}