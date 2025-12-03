#include<stdio.h>
int swaprefernce(int*a,int*b)
{int temp=*a;
*a=*b;
b=temp
}
int main()
{
    int x=10,y=20;
    swap refernce(&x,&y);
    printf("After call by refernce swap:\nx=%d,y=%d",x,y);
    return 0;

}
