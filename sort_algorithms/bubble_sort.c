#include <stdio.h>

int main(void) {
    int arr[] = {150, 120, 160, 130, 155, 125, 140};
    const int len = sizeof(arr) / sizeof(arr[0]);
    int n = 1;
    int i;
    while (n < len) {
        i = len - 1;
        while (i > n - 1) {
            if (arr[i - 1] > arr[i]) {
                const int w = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = w;
            }
            i = i - 1;
        }
        n = n + 1;
    }

    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}