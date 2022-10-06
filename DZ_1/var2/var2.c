#include <stdio.h>
#include <locale.h>
#include <math.h>
// объ€вление главной функции
int main() {
	setlocale(LC_ALL, "rus");
// объ€вление переменных
	int a, n;
	n = 1;
	printf("¬ведите первое число : \n");
	scanf_s("%d", &a);
	for (int i=1; i <= 3; i++)
	{
	printf("%d: %d\n", i, a);
	a = a + 1;
	}
	system("pause");
	return 0;
}








	