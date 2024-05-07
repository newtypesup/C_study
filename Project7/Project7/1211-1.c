#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
    srand(time(NULL));
    int i, j, su, in;
    int ar[5][5];
    int cr[5][5];
    int rd1[25], rd2[25];
    for (i = 0; i < 25; i++) {
        su = rand() % 25 + 1;
        rd1[i] = su;
        for (j = 0; j < i; j++) {
            if (rd1[i] == rd1[j]) {
                i--;
                break;
            }
        }
    }

    for (i = 0; i < 25; i++) {
        su = rand() % 25 + 1;
        rd2[i] = su;
        for (j = 0; j < i; j++) {
            if (rd2[i] == rd2[j]) {
                i--;
                break;
            }
        }
    }
    while (1) {
        su = 0;
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                ar[i][j] = rd1[su];
                cr[i][j] = rd2[su];
                su++;
            }
        }

        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                printf("%2d ", ar[i][j]);
            }
            printf("\t\t\t\t\t");
            for (j = 0; j < 5; j++) {
                printf("%2d ", cr[i][j]);
            }
            printf("\n");
        }
        printf("숫자 입력 (1~25): ");
        scanf("%d", &in);

        for (i = 0; i < 25; i++) {
            if (rd1[i] == in) {
                rd1[i] = 0;
            }
            if (rd2[i] == in) {
                rd2[i] = 0;
            }
        }
    }
}//빙고판 게임 만들기