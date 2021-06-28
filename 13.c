#include <stdio.h>

int main(void) {
    int nums[10];
    int i, size;

    size = sizeof(nums) / sizeof(nums[0]);

    for (i = 0 ; i < size ; i++) {
        printf("No.%2d : ", i + 1);
        scanf("%d", &nums[i]);
    }

    for (i = 1 ; i <= size ; i++) {
        printf("%d ", nums[size - i]);
    }

    return 0;
}