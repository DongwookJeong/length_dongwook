#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < 10; i++) {
		printf("%d", rand() % 100);
	}
	printf("\n");
}
/*
* ���� 1 ���� 10�� ����ϱ�
* 	int count = 0; ���� ����
	while (count < 10) { �ݺ���(����)
		printf("����\n");
		count += 1; ���� 1�� ����
	}

* ���� 2 ������ 2�� ���
* 	int n = 0, val;

	while (n < 9) {
		n += 1; ���� ����
		val = 2 * n; 2�� �������� ��� ����
		printf("2*%d = %d\n", n, val);
	}

* ���� 3 2�� �ŵ������� ���
* int n =1, a = 1;
	while (n < 10) {
		a = 2 * a;
		printf("2�� %d���� %d\n", n, a);
		n += 1;
	 }

* ���� 4 1~10������ ���� ���ϴ� ���α׷�
* int n = 0, sum = 0;

	while (n < 10) {
		n += 1; n�� 1�� ����
		sum += n; �� ���ϱ�
	}
	printf("1~%d������ �� : %d\n", n, sum);

* ���� 5 ����ڰ� �Է��� n���� �������� ����ϴ� ���α׷�
* int a = 9, b;

	printf("���ϴ� ���� �Է��Ͻÿ� : \n");
	scanf_s("%d", &b); ����ڰ� �Է��� ���� ����
	
	while (a > 0) {
		printf("%d*%d = %d\n", b, a, b * a);
		a--; a�� 1�� ����
	}

* ���� 6 1~500���� ¦���� �� ���ϱ�
* int a = 2, sum = 0;
	while (a <= 500) {
		sum += a; sum = sum + a�� ���� ����
		a += 2; a�� 2�� ����
	}
	printf("1~500���� ¦���� �� : %d", sum);

* ���� 7 ���� ���� n ������ k�� ����� ��� ã�� ����ϴ� ���α׷�
* int n, k;
	int a = 1;
	printf("�ִ� ���� ���� �Է� : \n");
	scanf_s("%d", &n);

	printf("����� ã�� k �Է� : \n");
	scanf_s("%d", &k);

	printf("%d���� ���� %d�� ��� \n", n, k);
	printf("=>");

	while (k <= n) {
		k = k * a;
		printf("%d", k);
		a++;
	}

* ���� 8 ������
* int main() {
	int n, val, a = 2;
	while (a <= 9) {
		n = 0;
		while (n < 9) {
			n += 1;
			val = a * n;
			printf("%d*%d = %d\n", a, n, val);
		}
		a++;
	}
}

* ���� 9 ũ�ų�, ���ų�, �۰ų� �˷��ִ� ���α׷�
* 	int a, b;

	printf("���� �Է� : ");
	scanf_s("%d", &a);
	printf("���� �Է� : ");
	scanf_s("%d", &b);

	if (a > b) {
		printf("%d > %d\n", a, b);
	}
	else if (a == b) {
		printf("%d == %d\n", a, b);
	}
	else {
		printf("%d < %d\n", a, b);
	}

* ���� 10 �ð��� ���� �޶����� ���� ���� ��� �Լ�
* #include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < 10; i++) {
		printf("%d", rand() % 100);
	}
	printf("\n");
}
*/