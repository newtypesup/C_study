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
        printf("0. �ո�   1. �޸� : ");
        scanf("%d", &game);
        coin = rand() % 2;

        if (coin == 0) {
            printf("��ǻ�� ���� �ո�\n");
        }
        else {
            printf("��ǻ�� ���� �޸�\n");
        }

        if (game == coin) {
            cnt++;
            printf("����");
            luk = (1000 * k) / 2;
            k = k * 2;
            printf("�ٽ��Ͻðڽ��ϱ�? 0.yes 1.no : ");
            scanf("%d", &re);
            if (re == 1) {
                break;
            }
        }
        else {
            printf("Ʋ��");
            luk = 0;
            printf("�ٽ��Ͻðڽ��ϱ�? 0.yes 1.no : ");
            scanf("%d", &re);
            if (re == 1) {
                break;
            }
            money -= 500;
        }
        if (cnt == 4) {
            break;
        }
        printf("ȹ�� �ݾ� : %d\n", luk);
    }
    if (money < 0) {
        money = 0;
    }
    money = money + luk;
    printf("���� �ܾ� : %d\n", money);
}