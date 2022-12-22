#include <stdio.h>
#include <math.h>// C���
#include <cmath>// C++

/*
// C���
* �ø�
double ceil(double n); 
* ����
double floor(double n);
*/

/*
// C++
* �ø�
double ceil(double n);
float ceil(float n);
long double ceil(long double n);

* ����
double floor(double n);
float floor(float n);
long double floor(long double n);

* �ݿø�
double round(double n);
float round(float n);
long double rounf(long double n);
*/

void main() {
	double pi = 3.141592;
	printf("�ø�: %lf\n", ceil(pi)); // �ø� : 4.000000
	printf("����: %lf\n", floor(pi)); // ���� : 3.000000
	printf("�ݿø�: %lf\n\n", round(pi)); // �ݿø� : 3.000000

	printf("�ø�: %lf\n", ceil(pi * 100)/100); // �ø� : 3.150000
	printf("����: %lf\n", floor(pi * 100) / 100); // ���� : 3.140000
	printf("�ݿø�: %lf\n\n", round(pi * 100) / 100); // �ݿø� : 3.140000

	printf("�ø�: %0.2lf\n", ceil(pi * 100) / 100); // �ø� : 3.15
	printf("����: %0.2lf\n", floor(pi * 100) / 100); // ���� : 3.14
	printf("�ݿø�: %0.2lf\n\n", round(pi * 100) / 100); // �ݿø� : 3.14

	// C������ �ݿø� �Լ� round�� ����
	double simipi = 3.9;
	int result = (int)(pi + 0.5);
	double result2 = floor(simipi + 0.5);
	printf("�ݿø� : %d\n", result); // 3
	printf("�ݿø� : %f\n", result2); // 4.000000

}