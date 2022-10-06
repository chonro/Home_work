#include <stdio.h>
#include <locale.h>
#include <math.h>
// объявление главной функции
int main() {
	// настройки
	setlocale(LC_ALL, "rus");
	// объявление переменных
	int a, V, Sp, Sb;
	printf("Ввод: ");
	scanf_s("%d", &a);
	printf("\n");
	V = pow(a, 3);
	Sp = 6 * pow(a, 2);
	Sb = 4 * pow(a, 2);
	printf("Результат:\n\n");
	printf("Объем = %d \n\n", V);
	printf("Площадь полной поверхности = %d\n\n", Sp);
	printf("Площадь боковой поверхности = %d\n\n", Sb);
	system("pause");
	return 0;
}