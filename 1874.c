#include<stdio.h>
int main(void)

{
    int year;
    printf("Enter year:\n");
    scanf("%d",&year);

    if((!(year % 4 )&&(year % 100 != 0)) ||!(year % 400 )){
        printf("Yes\n");
    }else{
        printf("No\n");

    return 0;
}