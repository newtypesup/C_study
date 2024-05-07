#include<stdio.h>
main() {
	int jumsu;
	printf("점수 입력 : ");
	scanf("%d", &jumsu);
	if (jumsu >= 90) {
		printf("수\n");
	}
	else if (jumsu >= 80) {
		printf("우\n");
	}
	else if (jumsu >= 70) {
		printf("미\n");
	}
	else if (jumsu >= 60) {
		printf("양\n");
	}
	else {
		printf("가\n");
	}
	
}