#include<stdio.h>

int main(void) {
    double nums[4] = {1, 3, 5, 8};
    int price, i;

    printf("定価 : ");
    scanf("%d", &price);

    for (i = 0 ; i < 4 ; i++) {
        printf("%d割引 = %d円\n", (int)(nums[i]), (int)(price * (1 - nums[i] / 10)));
    }

    return 0;
}