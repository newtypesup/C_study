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
		printf("%d번\t주사위1 : %d\t주사위2 : %d\n", num++, dice1, dice2);
		if (dice1 == dice2) {
			printf("더블!!!!\n");
			dice1 = rand() % 6 + 1;
			dice2 = rand() % 6 + 1;
			printf("%d번\t주사위1 : %d\t주사위2 : %d\n", num++, dice1, dice2);
			if (dice1 == dice2) {
				printf("무인도!!\n");
				break;
			}
		}
		i++;

	}
}//주사위 굴리기