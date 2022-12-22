#include <stdio.h>
#include <math.h>// C언어
#include <cmath>// C++

/*
// C언어
* 올림
double ceil(double n); 
* 내림
double floor(double n);
*/

/*
// C++
* 올림
double ceil(double n);
float ceil(float n);
long double ceil(long double n);

* 내림
double floor(double n);
float floor(float n);
long double floor(long double n);

* 반올림
double round(double n);
float round(float n);
long double rounf(long double n);
*/

void main() {
	double pi = 3.141592;
	printf("올림: %lf\n", ceil(pi)); // 올림 : 4.000000
	printf("내림: %lf\n", floor(pi)); // 내림 : 3.000000
	printf("반올림: %lf\n\n", round(pi)); // 반올림 : 3.000000

	printf("올림: %lf\n", ceil(pi * 100)/100); // 올림 : 3.150000
	printf("내림: %lf\n", floor(pi * 100) / 100); // 내림 : 3.140000
	printf("반올림: %lf\n\n", round(pi * 100) / 100); // 반올림 : 3.140000

	printf("올림: %0.2lf\n", ceil(pi * 100) / 100); // 올림 : 3.15
	printf("내림: %0.2lf\n", floor(pi * 100) / 100); // 내림 : 3.14
	printf("반올림: %0.2lf\n\n", round(pi * 100) / 100); // 반올림 : 3.14

	// C에서는 반올림 함수 round가 없음
	double simipi = 3.9;
	int result = (int)(pi + 0.5);
	double result2 = floor(simipi + 0.5);
	printf("반올림 : %d\n", result); // 3
	printf("반올림 : %f\n", result2); // 4.000000

}