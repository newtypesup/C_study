#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main() {
	srand(time(NULL));
	int su;
	int ar[6];
	int in[6] = { 2, 7, 10, 14, 20, 26 };
	int i, j, cnt = 0;

	for (i = 0; i < 6; i++) {
		su = rand() % 45 + 1;
		ar[i] = su;
		for (j = 0; j < i; j++) {
			if (ar[i] == ar[j]) {
				i--;
				break;
			}
		}
	}

	for (i = 0; i < 6; i++) {
		printf("%d ", ar[i]);
	}
	for (i = 0; i < 6; i++) {
		for (j = 0; j < 6; j++) {
			if (ar[i] == in[j]) {
				cnt++;
			}
		}
	}
	printf("���� ���� : %d\n", cnt);
	//�ߺ� ���� ����. �ζ� ��ȣ.2
}