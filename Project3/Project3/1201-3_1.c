#include<stdio.h>
main() {
	int ar[5] = { 47,95,64,21,66 };
	int i, j, temp, x;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < i; j++) {
			if (ar[i] > ar[j]) {
				temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
		for (x = 0; x < 5; x++) {
			printf("%d ", ar[x]);
		}
		printf("\n");
	}
	//선택 정렬(버블정렬 반대로) 다음번에는 삽입 정렬
}