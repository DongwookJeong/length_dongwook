#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 6 //define ��ũ�θ� ������ �� �տ� ���ִ� Ű���� 
void sort(int arr[]);
/*
* #define [��ũ�� �����][��ũ�� Ȯ�� ���ڿ�]
* �̸� ������ ��ũ�� ������� ���̸�, ��ũ�� Ȯ�� ���ڿ��� ġȯ�Ѵ�.
* ��ũ�θ��� ���� �빮�ڷ� ���δ�.  ���������� ����, ������ ����ϴ� �ͺ��� ó���ӵ��� ������.
*
* #difine [��ũ�� �Լ���(��������)][��ũ�� Ȯ�� ���ڿ�]
* ��ȣ�� ���� ū ����
*/
int main() {
	int ditto[SIZE];
	int i, j;

	srand((unsigned)time(NULL));

	for (i = 0; i < SIZE; i++) {
		ditto[i] = (rand() % 45) + 1;
		for (j = 0; j < i; j++) {//�˿��� j
			if (ditto[i] == ditto[j]) i--;//���� �� ����
		}
	}
	sort(ditto);

	printf("�λ� �� ��: \n");
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