#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "rus");
	int x, y, z;
	printf("Ввод x: ");
	scanf_s("%d", &x);
	printf("Ввод y: ");
	scanf_s("%d", &y);
	printf("Ввод z: ");
	scanf_s("%d", &z);
	if (x!=y && x != z && y != z)
	{
		if (x > y && x > z)
		{
			z = z + x;
		}
		else if (y > z && y > x)
			z = z + y;
		else z = pow(z, 2);
		printf("z=%d\n", z);
	}
	else{
		if (x == y && x == z && y == z)
			printf("Все переменные равны.");
		else{
			if (x == y) printf("x = y = %d\n",x);
		    if (x == z) printf("x = z = %d\n", x);
			if (y == z) printf("y = z = %d\n", y);
		}
	}

	system("pause");
	return 0;
}