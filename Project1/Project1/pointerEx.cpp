#include <stdio.h>

int main(void) {
	int arr[3];
	int i;

	*(arr + 0) = 10; // arr[0] = 10;
	*(arr + 1) = *(arr + 0) + 10; // arr[1] = arr[0] + 10;

	printf("세번째 배열 요소에 키보드 입력 : ");
	scanf_s("%d", arr + 2); // &arr[2]

	for (i = 0; i < 3; i++) {
		printf("%5d", *(arr + i)); // input 30, output 10 20 30
	}
	return 0;
}