#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main() {
    char s[100];
    char buho[100];
    int num, sum = 0;
    int n = 0, i, k = 0;
    int ar[100];
    //char h[100];

    printf("°è»ê½Ä ÀÔ·Â : ");
    scanf("%s", &s);

    strcpy(buho, s);
    char* pp = strtok(s, "+-");

    while (pp != NULL) {
        num = atoi(pp);
        ar[n++] = num;
        pp = strtok(NULL, "+-");
    }
    sum = ar[0];
    n = 1;
    char* bb = strtok(buho, "0123456789");
    while (bb != NULL) {
        if (*(bb) == '+') {
            sum += ar[n];
        }
        else {
            sum -= ar[n];
        }
        n++;
        bb = strtok(NULL, "0123456789");
    }
    printf("%d\n", sum);

}//µ¡¼À »¬¼À °è»ê±â