//wap to find the maximum and minimum of an array
#include <stdio.h>

int main() {
    int arr[100], i, n, max, min;

    printf("enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("enter the value of arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}