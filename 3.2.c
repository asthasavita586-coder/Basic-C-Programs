#include<stdio.h>
void main()
{
float phy, chem, maths, eng, comp, total, avg;
printf("Enter the marks of five subjects\n");
scanf("%f%f%f%f%f",&phy, &chem, &maths, &eng, &comp);
total=phy+chem+maths+eng+comp;
avg= total/5;
printf("\nAverage marks=%f\n",avg);
if (avg>=90)
printf("Grade A\n");
else if (80<=avg<90)
printf("Grade B\n");
else if (70<=avg<80)
printf("Grade C\n");
else if (60<=avg<70)
printf("Grade D\n");
else
printf("Grade F\n");
}
