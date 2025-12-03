#include<stdio.h>
void main()
{
int a,b;
printf("Enter two numbers:\n ");
scanf("%d%d", &a, &b);
printf("\nBitwise AND (a & b) = %u\n", a & b);
printf("\nBitwise OR (a | b) = %u\n", a | b);
printf("\nBitwise XOR (a ^ b) = %u\n", a^ b);
printf("\nBitwise NOT (~a) = %u\n", a);
printf("\nBitwise NOT (~b) = %u\n", b);
printf("\nLeft Shift (a << 1) = %u\n", a << 1);
printf("\nLeft Shift (b << 1) = %u\n", b << 1);
printf("\nRight Shift (a >> 1) = %u\n", a >> 1);
printf("\nRight Shift (b >> 1) = %u\n", b >> 1);
}
