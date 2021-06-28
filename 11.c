#include<stdio.h>

int olympic (int year);

int main(void) {
    int year;

    printf("西暦 : ");
    scanf("%d", &year);

    switch (olympic(year)) {
        case 0:
            printf("やらん");
            break;
        
        case 1:
            printf("夏");
            break;

        case 2:
            printf("冬");
            break;
    }

    return 0;
}

int olympic(int year) {
    if (year % 2 == 0) {
        if (year % 4 == 0) {
            return 1;
        } else {
            return 2;
        }
    }
    return 0;
}