 #include <stdio.h>
int main() {
    int n, i;
    long long t1 = 0, t2 = 1;
    long long next_term;
    printf("Enter the number of terms (n) for the Fibonacci series: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    if (n <= 0) {
        printf("The number of terms must be a positive integer.\n");
        return 0;
    }
    printf("\nFibonacci Series up to %d terms:\n", n);
    if (n >= 1) {
        printf("%lld", t1);
    }
    if (n >= 2) {
        printf(", %lld", t2);
    }
    for (i = 3; i <= n; ++i) {
        next_term = t1 + t2;
        printf(", %lld", next_term);
        t1 = t2;
        t2 = next_term;
    }
    printf("\n");
    return 0;
}
