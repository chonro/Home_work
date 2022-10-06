#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() 
{
	setlocale(LC_ALL, "rus");
	int pause_size = 1;
	int fig_var, flag1=1;
	printf("Добро пожаловать!\n");
	Sleep(1000);
	system("cls");
	for (int i = 1; i < 3; i++)
	{
		printf("Загрузка");
		Sleep(pause_size);
		system("cls");
		printf("Загрузка.");
		Sleep(pause_size);
		system("cls");
		printf("Загрузка..");
		Sleep(pause_size);
		system("cls");
		printf("Загрузка...");
		Sleep(pause_size);
		system("cls");
	}
	while (flag1 == 1)
	{
		printf("Выбор фигуры:\n1. Прямоугольник.\n2. Треугольник.\n3. Круг.\n0. Выйти из приложения\nВвод:");
		scanf_s("%d", &fig_var);
		system("cls");

		if (fig_var == 1)
		{
			//Действие для прямоугольника
			printf("Введите две стороны прямоугольника:");
			int a, b, variant;
			float res;
			scanf_s("%d %d", &a, &b);
			system("cls");
			//Меню действий
			printf("Меню:\n1. Найти площадь прямоугольника.\n2. Найти периметр прямоугольника.\n3. Найти диоганаль прямоугольникаю.\n4. Вернуться к выбору фигуры.\n0. Выйти.\nВвод:  ");
			scanf_s("%d", &variant);
			if (variant == 1)
			{
				//Площадь
				res = a * b;
				printf("Площадь прямоугольника: %f \n", res);
				break;
			}
			else if (variant == 2)
			{
				//Периметр
				res = 2 * a + 2 * b;
				printf("Периметр прямоугольника: %f \n", res);
				break;
			}
			else if (variant == 3)
			{
				//Диагональ
				res = sqrt(pow(a, 2) + pow(b, 2));
				printf("Диагональ прямоугольника: %f \n", res);
				break;
			}
			else if (variant == 4)
			{
				//Вернуться к выбору фигуры
				system("cls");
			}
			else
			{
				//Выйти
				break;
			}
		}
		else if (fig_var == 2)
		{
			//Действие для треугольника
			printf("Введите две стороны прямоугольного треугольника:");
			int a1, b1, variant1;
			float res1;
			scanf_s("%d %d", &a1, &b1);
			system("cls");
			//Меню действий
			printf("Меню:\n1. Найти площадь треугольника.\n2. Найти периметр треугольника.\n3. Найти диоганаль треугольника.\n4. Вернуться к выбору фигуры.\n0. Выйти.\nВвод:  ");
			scanf_s("%d", &variant1);
			if (variant1 == 1)
			{
				//Площадь
				res1 = a1 * b1;
				printf("Площадь треугольника: %f \n", res1);
				break;
			}
			else if (variant1 == 2)
			{
				//Периметр
				res1 = sqrt(pow(a1, 2) + pow(b1, 2)) + a1 + b1;
				printf("Периметр прямоугольника: %f \n", res1);
				break;
			}
			else if (variant1 == 3)
			{
				//Диагональ
				res1 = sqrt(pow(a1, 2) + pow(b1, 2));
				printf("Диагональ прямоугольника: %f \n", res1);
				break;
			}
			else if (variant1 == 4)
			{
				//Вернуться к выбору фигуры
				system("cls");
			}
			else
			{
				//Выйти
				break;
			}
			}
		else if (fig_var == 3)
		{
			//Действие для круга
			printf("Введите радиус круга: ");
			int a2, variant2;
			float res2;
			scanf_s("%d", &a2);
			system("cls");
			//Меню действий
			printf("Меню:\n1. Найти площадь круга.\n2. Найти длину окружности круга.\n3. Найти диаметр круга.\n4. Вернуться к выбору фигуры.\n0. Выйти.\nВвод:  ");
			scanf_s("%d", &variant2);
			if (variant2 == 1)
			{
				//Площадь
				res2 = 3.14 * pow(a2, 2);
				printf("Площадь круга: %f \n", res2);
				break;
			}
			else if (variant2 == 2)
			{

				//Длина окружности
				res2 = (2 * 3.14 * a2);
				printf("Длина окружности круга: %f \n", res2);
				break;
			}
			else if (variant2 == 3)
			{
				//Диаметр
				res2 = a2 * 2;
				printf("Диаметр круга: %f \n", res2);
				break;
			}
			else if (variant2 == 4)
			{
				//Вернуться к выбору фигуры
				system("cls");
			}
			else
			{
				//Выйти
				break;
			}
		}
		else
		system("pause");
			break;
			
			
		}
		system("pause");
		return 0;




	}
