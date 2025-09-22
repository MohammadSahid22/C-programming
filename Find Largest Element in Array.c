#include <stdio.h>

int main() {
    int arr[100], n, i, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    max = arr[0
