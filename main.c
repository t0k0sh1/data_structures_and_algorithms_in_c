#include <stdio.h>

int main(void) {
    const int arr[] = {3, 4, 5, 7, 8};
    const int len = sizeof(arr) / sizeof(arr[0]);
    int l = 0;
    int r = len - 1;
    const int x = 3;
    int i = (l + r) / 2;
    while (arr[i] != x && l <= r) {
        if (arr[i] == x) {
            break;
        }
        if (x > arr[i]) {
            l = i + 1;
        } else {
            r = i - 1;
        }
        i = (l + r) / 2;
    }
    if (arr[i] == x) {
        printf("Found at index %d\n", i);
    } else {
        printf("Not found\n");
    }
    return 0;
}