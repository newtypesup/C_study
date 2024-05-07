#include<stdio.h>
main() {
    int i = 0, j = -1, su = 1, s = 1;
    int x, m = 10;
    int ar[10][10];
    while (1) {
        for (x = 0; x < m; x++) {
            j = j + s;
            ar[j][i] = su++;
        }
        m--;
        if (m == 0) {
            break;
        }
        for (x = 0; x < m; x++) {
            i = i + s;
            ar[j][i] = su++;
        }
        s = s * (-1);
    }
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%3d ", ar[i][j]);
        }
        printf("\n");
    }
}//°ñ¹ðÀÌ ¸¸µé±â