#include<stdio.h>

main() {
	int t = 62, sum;

	//int h = 0, m = 0, t = 0;
	//int sum = 0;

	//printf("�ð�(H) : ");
	//scanf("%d", &h);
	//printf("��(M) : "); �ٽ� �����غ��� ���� �ƴ�.
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
	printf("%d�� �Դϴ�.", sum);
	
}

//30�� ���ϴ� ����. �ʰ��� 10�� ���� 1000����