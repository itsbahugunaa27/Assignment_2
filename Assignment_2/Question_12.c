#include<stdio.h>
int main()
{
    int x;
    printf("Enter the three digit number\n");
    scanf("%d",&x);
    x=(x%10)*100+(x/10);
    printf("%d",x);
    return 0;
}
