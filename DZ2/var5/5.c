//���������� ��� ������������ �� �������� ������ ������. ��������� �������� � ���� 
//������ "��������������" / "��������������" / "�������������" / " ������������ " / "�� 
//�������� �������������"
#include<stdio.h>
#include<math.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c, S;
	printf("������� ������� ������������:");
	scanf_s("%d %d %d", &a, &b, &c);
	if (!(a <= b + c && b <= c + a && c <= a + b)) {
		printf("�� �����������\n");
	}
	else if (a == b && a == c && b == c) {
		printf("��������������:\n");
	}
	else if (a == b || a == c || b == c) {
		printf("��������������\n");
	}
	else if ((pow(a, 2) == pow(b, 2) + pow(c, 2)) || (pow(b, 2) == pow(a, 2) + pow(c, 2)) || (pow(c, 2) == pow(a, 2) + pow(b, 2))) {
		printf("�������������:\n");
	}
	else {
		printf("������������:\n");
	}
	system("pause");
	return 0;
}