#include <stdio.h>

int main() {
    int x, terms;
    float total = 1.0, y= 1.0;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    for (int i = 1; i < terms; ++i) {
        y = y*x/ i;
        total = total + y;
    }

    printf("Value of e^%d is: %.4f\n", x, total);

    return 0;
}

