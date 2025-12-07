#include <stdio.h>
int main() {
    int n, result = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        result = result * i;
    }
    printf("Factorial of %d = %d\n", n, result);
    return 0;
}

