#include <stdalign.h>
#include <stdio.h>
#include <stdlib.h>//malloc �Լ��� ���Ե� ��� ����

void main() {
	int* arr;
	arr = (int*)malloc(sizeof(int) * 4);// size 4 ���� �Ҵ�

	arr[0] = 100;
	arr[1] = 200;
	arr[2] = 300;
	arr[3] = 400;

	for (int i = 0; i < 4; i++) {
		printf("arr[%d] : %d\n", i, arr[i]);
	}
	free(arr);//���� �Ҵ� ����
}





/*
* ������ �����ƴµ� ����� ���� �𸣰ڴ�.
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