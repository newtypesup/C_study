#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
    srand(time(NULL));
    int coin;
    int game;
    int money = 1000;
    int i = 0;
    int k = 2;
    int luk = 0;
    int re;
    int cnt = 1;

    money -= 500;
    while (money >= 0) {
        printf("0. 앞면   1. 뒷면 : ");
        scanf("%d", &game);
        coin = rand() % 2;

        if (coin == 0) {
            printf("컴퓨터 동전 앞면\n");
        }
        else {
            printf("컴퓨터 동전 뒷면\n");
        }

        if (game == coin) {
            cnt++;
            printf("맞춤");
            luk = (1000 * k) / 2;
            k = k * 2;
            printf("다시하시겠습니까? 0.yes 1.no : ");
            scanf("%d", &re);
            if (re == 1) {
                break;
            }
        }
        else {
            printf("틀림");
            luk = 0;
            printf("다시하시겠습니까? 0.yes 1.no : ");
            scanf("%d", &re);
            if (re == 1) {
                break;
            }
            money -= 500;
        }
        if (cnt == 4) {
            break;
        }
        printf("획득 금액 : %d\n", luk);
    }
    if (money < 0) {
        money = 0;
    }
    money = money + luk;
    printf("현재 잔액 : %d\n", money);
}