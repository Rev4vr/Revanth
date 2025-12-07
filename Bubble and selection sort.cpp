#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i];  
    }
    // Bubble Sort
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    // Selection Sort
    for(int i = 0; i < n - 1; i++) {
        int min = i;
        for(int j = i + 1; j < n; j++) {
            if(b[j] < b[min])
                min = j;
        }
        int temp = b[min];
        b[min] = b[i];
        b[i] = temp;
    }
    printf("\nBubble Sort: ");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nSelection Sort: ");
    for(int i = 0; i < n; i++)
        printf("%d ", b[i]);
    return 0;
}


