//Определить вид треугольника по заданным длинам сторон. Результат выводить в виде 
//ответа "равносторонний" / "равнобедренный" / "прямоугольный" / " произвольный " / "не 
//является треугольником"
#include<stdio.h>
#include<math.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c, S;
	printf("Введите стороны треугольника:");
	scanf_s("%d %d %d", &a, &b, &c);
	if (!(a <= b + c && b <= c + a && c <= a + b)) {
		printf("Не треугольник\n");
	}
	else if (a == b && a == c && b == c) {
		printf("Равносторонний:\n");
	}
	else if (a == b || a == c || b == c) {
		printf("Равнобедренный\n");
	}
	else if ((pow(a, 2) == pow(b, 2) + pow(c, 2)) || (pow(b, 2) == pow(a, 2) + pow(c, 2)) || (pow(c, 2) == pow(a, 2) + pow(b, 2))) {
		printf("Прямоугольный:\n");
	}
	else {
		printf("Произвольный:\n");
	}
	system("pause");
	return 0;
}