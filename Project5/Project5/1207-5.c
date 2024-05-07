#include<stdio.h>

main() {
	int t = 62, sum;

	//int h = 0, m = 0, t = 0;
	//int sum = 0;

	//printf("시간(H) : ");
	//scanf("%d", &h);
	//printf("분(M) : "); 다시 생각해보기 정답 아님.
	//scanf("%d", &m);

	//
	//t = h * 60 + m - 30;

	if (t < 30) {
		sum = 0;
	}

	else {
		sum = 3000;
	}
	t = t - 30;
	while (t > 0) {
		t -= 10;
		sum += 1000;
	}
	printf("%d원 입니다.", sum);
	
}

//30분 이하는 무료. 초과시 10분 단위 1000원씩