#include<stdio.h>
#include<string.h>

main() {
	// strlen = ���ڿ�����
	char str[10] = "com in";
	int cnt;
	cnt = strlen(str);
	printf("str�� ���� : %d\n", cnt);

	// strcpy:���ڿ�����
	char a[] = "hello" ;
	char b[10];
	strcpy(b, a);
	printf("%s\n", b);
	//for (int i = 0; strlen(a); i++)
	//printf("%s\n", b);
	// 
	// 
	//strcat: ���ڿ� �̾� ���̱�
	char s1[50] = "123";
	char s2[10];
	char s3[5] = "67";

	strcat(s1, "56");
	strcat(s1, s3);
	printf("%s\n", s1);

	// strcmp: ���ڿ� ��( ���� �� 0, �񱳹��ڿ��� Ŭ �� : -1, �񱳹��ڿ��� ���� �� : 1)

	char t1[] = "aaa";
	char t2[] = "abc";
	int d;

	d = strcmp(t1, t2);
	printf("%d \n", d);

}