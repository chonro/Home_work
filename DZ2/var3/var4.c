#include <stdio.h>
#include <locale.h>
#include <math.h>
int main() {
	setlocale(LC_ALL, "rus");
	int x1, x2, x3;
	printf("������� ���� ������:");
	scanf_s(" %d %d %d", &x1, &x2, &x3);
	//printf("x1=%d,x2=%d,x3=%d\n", x1,x2,x3);
	if (((x1 == 5) || (x1 == 4) || (x1 == 3) || (x1 == 2) || (x1 == -1))
		&& ((x2 == 5) || (x2 == 4) || (x2 == 3) || (x2 == 2) || (x2 == -1))
		&& (x3 == 5) || (x3 == 4) || (x3 == 3) || (x3 == 2) || (x3 == -1))
	{
		if (x1 == 5 && x2 == 5 && x3 == 5)
			printf("���������: �� ��������\n");
		else if ((x1 == 2) || (x2 == 2) || (x3 == 2) || (x1 == -1) || (x2 == -1) || (x3 == -1))
			printf("���������: �� ��������\n");
		else if ((x1 == 3) || (x2 == 3) || (x3 == 3))
			printf("���������: �� ��������\n");
		else
			printf("���������: �� ��������\n");
	}
	else
		printf("�� ����� ����������� ������!\n");
	system("pause");
	return 0;
}