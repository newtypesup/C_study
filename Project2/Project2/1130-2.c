#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {
	srand( time(NULL) );
	int com;
	int saram;
	printf("0 - ����, 1 - ����, 2 - �� : ");
	scanf("%d", &saram);
	//printf("%d\n", saram);
	com = rand()% 3; // 0~2����
	//printf(" %d\n", com);
	// 0�� ���� 1�� ���� 2�� ��

	if (com == 0) {
		printf("��ǻ�� : ����\t");
			if (saram == com) {
				printf("�� : ����\n���");
			}
			else if (saram == 1) {
				printf("�� : ����\n�̱�");
			}
			else {
				printf("�� : ��\n��");
			}
	}
	else if (com == 1) {
		printf("��ǻ�� : ����\t");
			if (saram == com) {
				printf("�� : ����\n���");
			}
			else if (saram == 2) {
				printf("�� : ��\n�̱�");
			}
			else {
				printf("�� : ����\n��");
			}
	}
	else {
		printf("��\t");
			if (saram == com) {
				printf("�� : ��\n���");
			}
			else if (saram == 0) {
				printf("�� : ����\n�̱�");
			}
			else {
				printf("�� : ����\n��");
			}
	}	
}