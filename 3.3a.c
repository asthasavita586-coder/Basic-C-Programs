#include<stdio.h>
#include<math.h>
void main()
{
int ch;
float n,sq,sqroot;
printf("1. Check number is even or odd\n");
printf("2. Check number is positive or negative\n");
printf("3. Printing square of the number\n");
printf("4. Printing square root of the number\n");
printf("Enter the number\n");
scanf("%f",&n);
printf("Enter the choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
if((int)n%2==0)
printf("The number is even.\n");
else
printf("The number is odd.\n");
break;
case 2:
if (n>0)
printf("The number is positive.\n");
else
printf("The number is negative.\n");
break;
case 3:
sq=n*n;
printf("The square of the number is %f\n", sq);
break;
case 4:
sqroot= sqrt(n);
printf("The square root of the number is %f\n", sqroot);
break;
default:
printf ("Invalid choice\n");
}
}
