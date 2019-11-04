#include<stdio.h>
int main(void)

{
    double x,y;
    printf("Enter x:");
    scanf("%1f",&x);
    if (x<=50) {
        y=0.53*x;
    }
    else if (x>50);{
        y=26.5+(x-50)*0.58;
    }
    printf ("y is %.2f",y);
    return 0;
}