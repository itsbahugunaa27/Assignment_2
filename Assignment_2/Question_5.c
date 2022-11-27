#include<stdio.h>
int main()
{
    int x,sum=0;
    printf("Enter a three digit number\n");
    scanf("%d",&x);
    sum=x%10;
    x=x/10;
    sum=(x%10)+sum;
    x=x/10;
    sum=sum+x;
    printf("The sum of a three digit number is %d ",sum);
    return 0;
}
