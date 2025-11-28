#include<stdio.h>
int Add(int a,int b)
{
    return a + b;
}

int Div(int a,int b)
{
    return a - b;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    Add(x,y);
    return 0;
}