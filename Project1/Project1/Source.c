//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<locale.h>
#include<math.h>
// объявление главной функции
int main() {
	// настройки
	setlocale(LC_ALL, "rus");
	// объявление переменных
	float x1, x2, x3, y1, y2, y3, a, b, c, P, p2, S;
	// инициализация (заполнение значениями) переменных
	printf("Введите x1:\n");
	scanf_s("%f", &x1);
	printf("Введите y1:");
	scanf_s("%f", &y1);
	printf("Введите x2:");
	scanf_s("%f", &x2);
	printf("Введите y2:");
	scanf_s("%f", &y2);
	printf("Введите x3:");
	scanf_s("%f", &x3);
	printf("Введите y3:");
	scanf_s("%f", &y3);
	// выполнение задачи
	// Находим длины сторон треугольника
	a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	//Находим периметр
	P = a + b + c;
	p2 = P / 2;
	//Найдем площадь
	S = sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c));
	// вывод результата 
	printf("Периметр треугольника P=%f\n",P);
	printf("Площадь треугольника S=%f\n", S);
	// завершение программы
	system("pause");
	return 0;
}