#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {
    srand(time(NULL));
    int com;
    int saram;
    printf("0 - ���� , 1 - ����, 2 - �� : ");
    scanf("%d", &saram);
    com = rand() % 3; // 0 ~ 2 ����
    printf("%d\n", com);
    if (saram == com) {
        printf("�����ϴ�.");
    }
    else if ((saram == 0 && com == 2) || (saram == 1 && com == 0) || (saram == 2 && com == 1)) {
        printf("����� �̰���ϴ�.");
    }
    else
    {
        printf("����� �����ϴ�.");
    }
}