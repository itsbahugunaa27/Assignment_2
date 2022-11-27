#include<stdio.h>
int main()
{
    int x=49,y=13,t;
    t=x;
    x=y;
    y=t;
    printf("x=%d y=%d",x,y);
    return 0;
}
