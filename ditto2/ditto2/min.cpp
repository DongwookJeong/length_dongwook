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
* 예제 1 문장 10번 출력하기
* 	int count = 0; 변수 선언
	while (count < 10) { 반복문(조건)
		printf("문장\n");
		count += 1; 변수 1씩 증가
	}

* 예제 2 구구단 2단 출력
* 	int n = 0, val;

	while (n < 9) {
		n += 1; 변수 설정
		val = 2 * n; 2씩 곱해지는 등비 수열
		printf("2*%d = %d\n", n, val);
	}

* 예제 3 2의 거듭제곱을 출력
* int n =1, a = 1;
	while (n < 10) {
		a = 2 * a;
		printf("2의 %d승은 %d\n", n, a);
		n += 1;
	 }

* 예제 4 1~10까지의 합을 구하는 프로그램
* int n = 0, sum = 0;

	while (n < 10) {
		n += 1; n을 1씩 증가
		sum += n; 합 구하기
	}
	printf("1~%d까지의 합 : %d\n", n, sum);

* 예제 5 사용자가 입력한 n단을 역순으로 출력하는 프로그램
* int a = 9, b;

	printf("원하는 단을 입력하시오 : \n");
	scanf_s("%d", &b); 사용자가 입력한 값을 받음
	
	while (a > 0) {
		printf("%d*%d = %d\n", b, a, b * a);
		a--; a를 1씩 감소
	}

* 예제 6 1~500까지 짝수의 합 구하기
* int a = 2, sum = 0;
	while (a <= 500) {
		sum += a; sum = sum + a와 같은 문장
		a += 2; a를 2씩 증가
	}
	printf("1~500까지 짝수의 합 : %d", sum);

* 예제 7 양의 정수 n 이하인 k의 배수를 모두 찾아 출력하는 프로그램
* int n, k;
	int a = 1;
	printf("최대 양의 정수 입력 : \n");
	scanf_s("%d", &n);

	printf("배수를 찾을 k 입력 : \n");
	scanf_s("%d", &k);

	printf("%d보다 작은 %d의 배수 \n", n, k);
	printf("=>");

	while (k <= n) {
		k = k * a;
		printf("%d", k);
		a++;
	}

* 예제 8 구구단
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

* 예제 9 크거나, 같거나, 작거나 알려주는 프로그램
* 	int a, b;

	printf("정수 입력 : ");
	scanf_s("%d", &a);
	printf("정수 입력 : ");
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

* 예제 10 시간에 따라 달라지는 램덤 숫자 출력 함수
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