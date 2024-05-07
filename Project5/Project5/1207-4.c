//for (i=0; ; i++); 무한
//while(1); 무한

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
	printf("합 : %d\n", sum);
	
}