#include<stdio.h>
main() {
    int i = 0, j = -1, su = 1, s = 1;
    int x, m = 5;
    int ar[5][5];
    while (1) {
        for (x = 0; x < m; x++) {
            j = j + s;
            ar[i][j] = su++;
        }
        m--;
        if (m == 0) {
            break;
        }
        for (x = 0; x < m; x++) {
            i = i + s;
            ar[i][j] = su++;
        }
        s = s * (-1);
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%2d ", ar[i][j]);
        }
        printf("\n");
    }
}//°ñ¹ðÀÌ ¸¸µé±â