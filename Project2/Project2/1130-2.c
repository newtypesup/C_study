#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {
	srand( time(NULL) );
	int com;
	int saram;
	printf("0 - 가위, 1 - 바위, 2 - 보 : ");
	scanf("%d", &saram);
	//printf("%d\n", saram);
	com = rand()% 3; // 0~2까지
	//printf(" %d\n", com);
	// 0은 가위 1은 바위 2는 보

	if (com == 0) {
		printf("컴퓨터 : 가위\t");
			if (saram == com) {
				printf("나 : 가위\n비김");
			}
			else if (saram == 1) {
				printf("나 : 바위\n이김");
			}
			else {
				printf("나 : 보\n짐");
			}
	}
	else if (com == 1) {
		printf("컴퓨터 : 바위\t");
			if (saram == com) {
				printf("나 : 바위\n비김");
			}
			else if (saram == 2) {
				printf("나 : 보\n이김");
			}
			else {
				printf("나 : 가위\n짐");
			}
	}
	else {
		printf("보\t");
			if (saram == com) {
				printf("나 : 보\n비김");
			}
			else if (saram == 0) {
				printf("나 : 가위\n이김");
			}
			else {
				printf("나 : 바위\n짐");
			}
	}	
}