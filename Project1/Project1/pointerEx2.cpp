#include <stdio.h>

int main(void) {
	int arr[3];
	int* po = arr;
	int i;
	// arr 12����Ʈ, �迭 ��ü ũ��
	// po 4����Ʈ, ������ �ϳ��� ũ��
	// �����ʹ� ���� �ٲܼ� ������ �迭���� ���� �ٲ� �� ����

	*po = 10;

	*(po + 1) = 20;
	po[2] = po[0] + po[1];

	for (i = 0; i < 3; i++) {
		printf("%5d", po[i]);
	}
	return 0;
}
