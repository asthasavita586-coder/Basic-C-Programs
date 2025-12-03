#include<stdio.h>
int main()
{
    int n;
    //Read number of elements
    printf("Enter number of elements:");
    scanf("%d", &n);
    int arr[n];
    //Read array elements
    printf("Enter %d elements:\n",n);
    for (int i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //print in reverse order with addresses
    printf("n\Array inn Reverse Order with addresses:\n");
    for (int i=n-1; i>=0;i--)
    {
        printf("Elements :%d\taddress:%p\n",arr[i],(void*)&arr[i]);
        }
        return 0;
}
