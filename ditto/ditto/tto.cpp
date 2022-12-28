#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 6 //define 매크로를 정의할 때 앞에 써주는 키워드 
void sort(int arr[]);
/*
* #define [매크로 상수명][매크로 확장 문자열]
* 미리 정의한 매크로 상수명이 쓰이면, 매크로 확장 문자열로 치환한다.
* 매크로명은 보통 대문자로 쓰인다.  유지보수에 용이, 변수를 사용하는 것보다 처리속도도 빠르다.
*
* #difine [매크로 함수명(전달인자)][매크로 확장 문자열]
* 괄호의 유무 큰 차이
*/
int main() {
	int ditto[SIZE];
	int i, j;

	srand((unsigned)time(NULL));

	for (i = 0; i < SIZE; i++) {
		ditto[i] = (rand() % 45) + 1;
		for (j = 0; j < i; j++) {//검열용 j
			if (ditto[i] == ditto[j]) i--;//같은 값 빼기
		}
	}
	sort(ditto);

	printf("인생 한 방: \n");
	for (i = 0; i < SIZE; i++) {
		printf("%d\t", ditto[i]);
	}
	return 0;
}
void sort(int arr[]) {
	int i, j, min, temp;
	for (i = 0; i < SIZE - 1; i++) {
		min = i;
		for (j = i + 1; j < SIZE; j++) {
			if (arr[j] < arr[min]) min = j;
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}