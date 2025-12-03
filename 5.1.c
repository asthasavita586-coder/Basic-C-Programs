#include<stdio.h>
void main()
{
    int i,n,t,s;
    printf("ente the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the elements to be stored in array\n");
    for (i=0;i<n;i++);
    {
       scanf("%d",&a[i]);
    }
        printf("n\Enter the elements to be searched\n");
        scanf("%d",&s);
        for (i=0;i<n;i++)
        {
            if(a[i==s])
            {
                printf("\nThe searched element is found at position:%d\n",i+1);

            }
            }
            printf("\nElement is not found in the array.\n");







}
