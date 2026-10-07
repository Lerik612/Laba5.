#define _USE_MATH_DEFINES
#include <stdio.h>
#include<locale.h>
#define M_PI 3.14

int main() {
	setlocale(LC_ALL, "RUS");
	Task2();
	Task3();
	double gr, rad, result;

	printf("Введите угол в градусах:");
	scanf_s("%lf", &gr);

	rad = gr * M_PI/ 180.0;
	result = sin(rad);

	printf_s("sin(%.0lf град)= %.6f\n", gr, result);

	return 0;
}
int Task2() {
	const double c = 0.4;
	double x, a, b, y;
	printf("Введите значение x; ");
	scanf_s("%lf", &x);

	a = log10(x);
	b = pow(a, 2) + sqrt(c * x);
	y = exp(2 * x) + pow(9.7, b);

	printf("\n===Результаты расчётов===\n");
	printf(" Константа с    =%.2lf\n", c);
	printf("Введенное значение х   =%.2lf\n", x);
	printf("Промежуточный параметр а  =%.6lf\n", a);
	printf("Промежуточный параметр b =%.6lf\n",b);
	printf("Вычисленное значение y   =%.2lf\n", y);

	return 0;
}

Task3() {
	




	return 0;
}
