#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {
	srand(time(NULL));
	int dice1, dice2;
	int i = 0;
	int num = 1;

	while (i < 10){
		dice1 = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		printf("%d��\t�ֻ���1 : %d\t�ֻ���2 : %d\n", num++, dice1, dice2);
		if (dice1 == dice2) {
			printf("����!!!!\n");
			dice1 = rand() % 6 + 1;
			dice2 = rand() % 6 + 1;
			printf("%d��\t�ֻ���1 : %d\t�ֻ���2 : %d\n", num++, dice1, dice2);
			if (dice1 == dice2) {
				printf("���ε�!!\n");
				break;
			}
		}
		i++;

	}
}//�ֻ��� ������