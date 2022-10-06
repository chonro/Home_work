#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "rus");
	int x1, x2, x3;
	printf("Введите ваши оценки:");
	scanf_s(" %d %d %d", &x1, &x2, &x3);
	//printf("x1=%d,x2=%d,x3=%d\n", x1,x2,x3);
	if (((x1 == 5) || (x1 == 4) || (x1 == 3) || (x1 == 2) || (x1 == -1))
		&& ((x2 == 5) || (x2 == 4) || (x2 == 3) || (x2 == 2) || (x2 == -1))
		&& (x3 == 5) || (x3 == 4) || (x3 == 3) || (x3 == 2) || (x3 == -1))
	{
		if (x1 == 5 && x2 == 5 && x3 == 5)
			printf("Результат: Вы отличник\n");
		else if ((x1 == 2) || (x2 == 2) || (x3 == 2) || (x1 == -1) || (x2 == -1) || (x3 == -1))
			printf("Результат: Вы двоечник\n");
		else if ((x1 == 3) || (x2 == 3) || (x3 == 3))
			printf("Результат: Вы троечник\n");
		else
			printf("Результат: Вы хорошист\n");
	}
	else
		printf("Вы ввели некоректные оценки!\n");
	system("pause");
	return 0;
}