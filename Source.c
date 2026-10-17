#define _USE_MATH_DEFINES
#include <stdio.h>
#include<locale.h>
#include <math.h>
#define M_PI 3.14159265358979323846

double a, b, y;

int main() {
	
	setlocale(LC_ALL, ".UTF-8");
	Task2();
	Task3();
	double gr, rad, result;
    printf("\n Задание 1\n");
	printf("Введите угол в градусах:");
	scanf_s("%lf", &gr);

	rad = gr * M_PI / 180.0;
	result = sin(rad);

	printf_s("sin(%.0lf град)= %.6f\n", gr, result);

	return 0;
}
int Task2() {
	printf("\n Задание 2\n");
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
	printf("Промежуточный параметр b =%.6lf\n", b);
	printf("Вычисленное значение y   =%.2lf\n", y);

	return 0;
}

Task3() {
	int A = (int) a;
	int B = (int)b;
	int C = (int)y;

	int cod1 = ((A % 2 == 0) && (B % 2 != 0)) || ((A % 2 != 0) && (B % 2 == 0));
	int cod2 = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
	printf("\n Задание 3\n");
	printf("Целые части: A=%d, B=%d, C=%d\n", A, B, C);
	printf("Условие выполнено (1-да, 0 - нет) для пункта a: %d\n", cod1);
	printf("Условие выполнено (1-да, 0 - нет) для пункта b: %d\n", cod2);


	return 0;
}
