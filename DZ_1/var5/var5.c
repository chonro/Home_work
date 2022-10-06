#include <stdio.h>
#include <locale.h>
#include <math.h>
// объявление главной функции
int main() {
	// настройки
	setlocale(LC_ALL, "rus");
	// объявление переменных
	int n1, n2, Ost,Sum, Ras, Prois;
	float Chas, SrArPow, SrArAbs;
	printf("Введите  первое число: ");
	scanf_s("%d", &n1);
	printf("Ведите второе число: ");
	scanf_s("%d", &n2);
	Sum = n1 + n2;
	Ras = n1 - n2;
	Prois = n1 * n2;
	Chas = (float)n1 / n2;
	SrArPow = (pow(n1, 2) + pow(n2, 2)) / 2;
	SrArAbs = (abs(n1) + abs(n2)) / 2;
	Ost = n1 % n2;
	printf("Sum = %d, Ras = %d, Prois = %d, Chas = %.2f, SrArPow= %.2f, SrArAbs = %.2f, Ost = %d\n", Sum, Ras, Prois, Chas, SrArPow, SrArAbs, Ost);
	system("pause");
	return 0;

}