#include <stdio.h>

int main(void) {
	int arr[3];
	int* po = arr;
	int i;
	// arr 12바이트, 배열 전체 크기
	// po 4바이트, 포인터 하나의 크기
	// 포인터는 값을 바꿀수 있으나 배열명은 값을 바꿀 수 없음

	*po = 10;

	*(po + 1) = 20;
	po[2] = po[0] + po[1];

	for (i = 0; i < 3; i++) {
		printf("%5d", po[i]);
	}
	return 0;
}
