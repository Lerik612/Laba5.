#define _USE_MATH_DEFINES
#include <stdio.h>
#include<locale.h>
#define M_PI 3.14

int main() {
	setlocale(LC_ALL, "RUS");
	double gr, rad, result;

	printf("¬ведите угол в градусах:");
	scanf_s("%lf", &gr);

	rad = gr * M_PI/ 180.0;
	result = sin(rad);

	printf_s("sin(%.0lf град)= %.6f\n", gr, result);

	return 0;
}