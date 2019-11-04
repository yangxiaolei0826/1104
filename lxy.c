#include<stdio.h>
int main(void)
{
    int count,i,n;
    double grade,total;

    printf("Enter n:" );
    scanf ("%d",&n);
    total = 0;
    count = 0;
    for (i=1;i<=n;i++) {
        printf("Enter grade #%d:",i);
        scanf("%1f,&grade");
        total=total+grade;
        if (grade<60) {
            count++;
        }
    }
    printf ("Grade average=%.2f\n",total/n);
    printf("Number of failures=%d\n",count);
    return 0;
}