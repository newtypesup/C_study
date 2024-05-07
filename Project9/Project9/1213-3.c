#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main() {
	char s[] = "1+2+5-6+4-3";
	int num, sum = 0;
	int n = 0, i;
	int ar[100];
	char *pp = strtok(s, "+-");

	while (pp != NULL){
		num = atoi(pp);
		ar[n++] = num;
		pp = strtok(NULL, "+-");
	}
	for (i = 0; i < n; i++) {
		printf("%d ", ar[i]);
	}
}