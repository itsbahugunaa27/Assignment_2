#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the number and digit \n");
    scanf("%d%d",&x,&y);
    x=(x*10)+y;
    printf("%d",x);
}
