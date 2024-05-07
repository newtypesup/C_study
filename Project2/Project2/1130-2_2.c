#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {
    srand(time(NULL));
    int com = rand() % 3 + 1;
    int saram;
    printf("0 - 가위 , 1 - 바위, 2 - 보 : ");
    scanf("%d", &saram);
    if (com == saram) {
        printf("비김");
    }
    else if (com > (saram + 1) % 3) {
        printf("사람이 이김");
    }
    else
    {
        printf("컴퓨터가 이김");
    }
}