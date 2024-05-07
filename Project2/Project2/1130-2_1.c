#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {
    srand(time(NULL));
    int com;
    int saram;
    printf("0 - 가위 , 1 - 바위, 2 - 보 : ");
    scanf("%d", &saram);
    com = rand() % 3; // 0 ~ 2 까지
    printf("%d\n", com);
    if (saram == com) {
        printf("비겼습니다.");
    }
    else if ((saram == 0 && com == 2) || (saram == 1 && com == 0) || (saram == 2 && com == 1)) {
        printf("사람이 이겼습니다.");
    }
    else
    {
        printf("사람이 졌습니다.");
    }
}