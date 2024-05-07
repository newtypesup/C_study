#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
main() {
	char ar[5] = { 'a','b','c','d','e' };
	int i, j;

	while(1) {
		for (i = 0; i < 5; i++) {
			for (j = i; j < 5; j++) {
				printf("%c ", ar[j]);
			}
			for (j = 0; j < i; j++) {
				printf("%c ", ar[j]);
			}
			printf("\n");
			Sleep(1000);
			system("cls");
			//전광판 만들기2
		}
	}
}