#include <stdio.h>
#include <locale.h>
#include <math.h>
// ���������� ������� �������
int main() {
	// ���������
	setlocale(LC_ALL, "rus");
	// ���������� ����������
	int a, V, Sp, Sb;
	printf("����: ");
	scanf_s("%d", &a);
	printf("\n");
	V = pow(a, 3);
	Sp = 6 * pow(a, 2);
	Sb = 4 * pow(a, 2);
	printf("���������:\n\n");
	printf("����� = %d \n\n", V);
	printf("������� ������ ����������� = %d\n\n", Sp);
	printf("������� ������� ����������� = %d\n\n", Sb);
	system("pause");
	return 0;
}