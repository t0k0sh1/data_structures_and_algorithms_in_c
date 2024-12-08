#include <stdio.h>

int main(void) {
    const int arr[] = {4, 8, 3, 5, 7};
    const int len = sizeof(arr) / sizeof(arr[0]);
    const int x = 5;
    int i;
    for (i = 0; i < len; i = i + 1) {
        if (arr[i] == x) {
            break;
        }
    }
    if (arr[i] == x) {
        printf("Found at index %d\n", i);
    } else {
        printf("Not found\n");
    }
    return 0;
}