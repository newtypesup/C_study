#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {
    srand(time(NULL));
    int com = rand() % 3 + 1;
    int saram;
    printf("0 - ���� , 1 - ����, 2 - �� : ");
    scanf("%d", &saram);
    if (com == saram) {
        printf("���");
    }
    else if (com > (saram + 1) % 3) {
        printf("����� �̱�");
    }
    else
    {
        printf("��ǻ�Ͱ� �̱�");
    }
}