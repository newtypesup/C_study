#include<stdio.h>

main() {
	int su;
	int i, s=1;
	

	printf("���� �Է��Ͻÿ�. : ");
	scanf("%d", &su);


	for (i = 1; i <= su; i++) {
		
		if (i == 1) {
			printf("%d", i);
			
		}
		else {
			printf("X%d", i);
		}
		s *= i;

		

	}

	printf("=%d", s);

}