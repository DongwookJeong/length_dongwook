#include <stdalign.h>
#include <stdio.h>
#include <stdlib.h>//malloc 함수가 포함된 헤더 파일

void main() {
	int* arr;
	arr = (int*)malloc(sizeof(int) * 4);// size 4 동적 할당

	arr[0] = 100;
	arr[1] = 200;
	arr[2] = 300;
	arr[3] = 400;

	for (int i = 0; i < 4; i++) {
		printf("arr[%d] : %d\n", i, arr[i]);
	}
	free(arr);//동적 할당 해제
}





/*
* 예제를 따라쳤는데 뭐라는 건지 모르겠다.
struct align16 {
	float data[4];
};

int main(void) {
	alignas(32) struct align16 a, b;
	struct align16 c;

	printf("%p\n", (void*)&a);
	printf("%p\n", (void*)&b);
	printf("%p\n", (void*)&c);
	
	00000048922FF600
	00000048922FF640
	00000048922FF678
}
	*/