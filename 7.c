#include<stdio.h>

int main(void) {
    int year;

    printf("西暦 : ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        printf("夏季五輪\n");
    } else if (year % 2 == 0) {
        printf("冬季五輪\n");
    } else {
        printf("やらん\n");
    }
    return 0;
}