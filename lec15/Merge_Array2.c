#include <stdio.h>

int main() {
    int n1, n2;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter %d elements: ", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter %d elements: ", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Merge into third array
    int c[n1 + n2];
    for (int i = 0; i < n1; i++) {
        c[i] = a[i];
    }
    for (int i = 0; i < n2; i++) {
        c[n1 + i] = b[i];
    }

    // Print merged array
    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
