#include<stdio.h>

main() {
	int i = 1;
	int su;

	printf("자연수 입력 : ");
	scanf("%d", &su);

	while (i < su) {
		if (su % i == 0) {
			printf("%d,", i);
		}
		i++;
	}
	printf("%d", i);
	
}//약수 출력