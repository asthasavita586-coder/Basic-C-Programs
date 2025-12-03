#include<stdio.h>
int func(int x,int y)
{
    int a,b,c;
    a=x*x;
    b=y*y;
    c=a+b;
printf("%d",c);
}
int main()
{
    int p,q;
    scanf("%d,%d",&p,&q);
    func(p,q);
}


