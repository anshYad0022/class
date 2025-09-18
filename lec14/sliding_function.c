#include <stdio.h>

int maxSumArr(int arr[], int n, int k) {
    
    int currentSum = 0;
    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }

    int maxSum = currentSum;

    for (int i = k; i < n; i++) {
        currentSum = currentSum - arr[i - k] + arr[i];  // remove left, add right
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
