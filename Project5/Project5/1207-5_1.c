#include<stdio.h>
main() {
    int t, money, minute;
    int h1, h2, m1, m2;
    printf("들어온시간(00:00) : ");
    scanf("%d:%d", &h1, &m1);
    printf("나간시간(00:00) : ");
    scanf("%d:%d", &h2, &m2);
    t = (h2 * 60 + m2) - (h1 * 60 + m1);
    minute = t;

    if (t < 30) {
        money = 0;
    }
    else {
        money = 3000;
    }
    t = t - 30;
    while (t > 0) {
        t -= 10;
        money += 1000;
    }
    printf("총 주차시간은 %d분 입니다.\n", minute);
    printf("주차요금은 %d원 입니다.", money);
}