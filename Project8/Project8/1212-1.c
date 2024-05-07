#include<stdio.h>
main() {
	int ar[5] = { 23, 45, 84, 61, 22 };
	int max = 0, min = 100;
	int l,s;

	for (int i = 0; i < 5; i++) {
		if (max < ar[i]) {
			max = ar[i];
			l = i+1;
		}
		if (min > ar[i]) {
			min = ar[i];
			s = i+1;
		}
	}
	printf("쵀대값 : %d \t 최소값 : %d \n", max, min);
	printf("최대값주소 : %d\t최소값주소 : %d\n", l, s);
}