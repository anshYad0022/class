#include <stdio.h>

int maxSumArr(int arr[], int n, int k) {
    int maxSum = 0;

    // Loop through each possible window of size k
    for (int i = 0; i <= n - k; i++) {
        int currentSum = 0;

        // Add k elements starting from i
        for (int j = 0; j < k; j++) {
            currentSum += arr[i + j];
        }

        // Update max if current window sum is larger
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}

int main() {
    int arr[100], n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    int result = maxSumArr(arr, n, k);
    printf("Maximum sum of %d consecutive elements is: %d\n", k, result);

    return 0;
}
