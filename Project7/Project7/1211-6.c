#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
    srand(time(NULL));
    int rd[9];
    int i, j, x;
    int a, b;
    int m;
    while (1) {
        m = 1000;
        a = 0;
        b = 0;
        for (i = 0; i < 9; i++) {
            rd[i] = rand() % 9 + 1;
            for (j = 0; j < i; j++) {
                if (rd[i] == rd[j]) {
                    i--;
                    break;
                }
            }
        }
        /*
        a = (rd[0] * 10000) + (rd[1] * 1000) + (rd[2] * 100) + (rd[3] * 10) + rd[4];
        b = (rd[5] * 1000) + (rd[6] * 100) + (rd[7] * 10) + rd[8];
        */
        a = rd[0] * 10000;
        for (x = 1; x <= 4; x++) {
            a = a + (rd[x] * m);
            b = b + (rd[x + 4] * m);
            m /= 10;
        }
        if (a - b == 77777) {
            break;
        }
    }
    printf(" %d %d %d %d %d\n", rd[0], rd[1], rd[2], rd[3], rd[4]);
    printf(" - %d %d %d %d\n", rd[5], rd[6], rd[7], rd[8]);
    printf("----------\n");
    printf(" 7 7 7 7 7\n");
}