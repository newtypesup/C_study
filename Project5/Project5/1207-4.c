//for (i=0; ; i++); ����
//while(1); ����

#include<stdio.h>
main() {
	int i = 0;
	int su, sum = 0;

	while (i < 5) {
		scanf("%d", &su);
		sum += su;
		/*sum = sum + sum;*/
		i++;
	}
	printf("�� : %d\n", sum);
	
}