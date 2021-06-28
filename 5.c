#include<stdio.h>

int main(void) {
    int juice, milk, money, price, change;
    double tax;

    juice = 198;
    milk =138;
    money = 1000;
    tax = 1.05;

    change = (int)(money - (juice + milk * 2) * tax);
    printf("おつり : %d", change);
    return 0;
}