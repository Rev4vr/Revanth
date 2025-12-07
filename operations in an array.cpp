#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int sum = 0, min = a[0], max = a[0];
    for(int i = 0; i < n; i++) {
        sum += a[i];

        if(a[i] < min)
            min = a[i];

        if(a[i] > max)
            max = a[i];
    }
    float avg = (float)sum / n;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
    return 0;
}

