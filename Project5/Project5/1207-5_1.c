#include<stdio.h>
main() {
    int t, money, minute;
    int h1, h2, m1, m2;
    printf("���½ð�(00:00) : ");
    scanf("%d:%d", &h1, &m1);
    printf("�����ð�(00:00) : ");
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
    printf("�� �����ð��� %d�� �Դϴ�.\n", minute);
    printf("��������� %d�� �Դϴ�.", money);
}