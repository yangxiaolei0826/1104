#include<stdio.h>

int main(void)
{
    int m,n,max;
    printf("Enter m and n:\n");
    scanf("%d%d",&m,&n);

    if(m > n){
        max = m;
    }else{
        max = n;
    }

    max = (m > n) ? m : n;

    printf("Larger is %d\n",max);
    return 0;
}