#include <stdio.h>
int main()
 {
    int a, b, i, r, s, n;

    printf("Enter range a and b: ");
    scanf("%d%d", &a, &b);

    printf("Armstrong numbers between %d and %d are:\n", a, b);

    for (i = a; i <= b; i++) {
        n = i;
        s = 0;

        while (n > 0)
        {
            r = n % 10;
            s = s + r * r * r;
            n = n / 10;
        }

        if (s == i)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}


