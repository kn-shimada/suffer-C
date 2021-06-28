#include <stdio.h>

int main(void)
{
    int score = 0;

    do {
        if (score != 0) {
            printf("ちゃんと入力してくれ\n");
        }

        printf("点数 : ");
        scanf("%d", &score);
    } while (score < 0 || score > 100);

    printf("入力 : %d", score);

    return 0;
}