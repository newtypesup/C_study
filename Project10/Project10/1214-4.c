#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
    srand(time(NULL));
    int com[9];
    int in[3];
    int i, j;
    int s = 0, b = 0, o = 3;

    for (i = 0; i < 9; i++) {
        com[i] = rand() % 9 + 1;
        for (j = 0; j < i; j++) {
            if (com[i] == com[j]) {
                i--;
                break;
            }
        }
    }

    for (int x = 0; x < 10; x++) {
        s = 0;
        b = 0;
        o = 3;
        printf("숫자입력 : ");
        scanf("%d %d %d", &in[0], &in[1], &in[2]);

        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if (i == j) {
                    if (com[i] == in[j]) {
                        s++;
                        o--;
                    }
                }
                else {
                    if (com[i] == in[j]) {
                        b++;
                        o--;
                    }
                }
            }
        }
        printf("%d번 : %dS  %dB  %do\n", x + 1, s, b, o);
        if (s == 3) {
            break;
        }
    }

}//숫자야구
