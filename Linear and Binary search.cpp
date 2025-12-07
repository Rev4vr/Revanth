#include <stdio.h>
int main() {
    int n, key, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    // Linear Search
    int pos = -1;
    for(i = 0; i < n; i++) {
        if(a[i] == key) {
            pos = i;
            break;
        }
    }
    if(pos != -1)
        printf("Linear Search: Found at %d\n", pos);
    else
        printf("Linear Search: Not Found\n");
    // Binary Search (array must be sorted)
    // Simple Bubble Sort for binary search
    for(i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    int low = 0, high = n - 1, mid;
    pos = -1;
    while(low <= high) {
        mid = (low + high) / 2;

        if(a[mid] == key) {
            pos = mid;
            break;
        }
        if(key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    if(pos != -1)
        printf("Binary Search: Found at %d (in sorted array)\n", pos);
    else
        printf("Binary Search: Not Found\n");

    return 0;
}

