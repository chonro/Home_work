//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<locale.h>
#include<math.h>
// ���������� ������� �������
int main() {
	// ���������
	setlocale(LC_ALL, "rus");
	// ���������� ����������
	float x1, x2, x3, y1, y2, y3, a, b, c, P, p2, S;
	// ������������� (���������� ����������) ����������
	printf("������� x1:\n");
	scanf_s("%f", &x1);
	printf("������� y1:");
	scanf_s("%f", &y1);
	printf("������� x2:");
	scanf_s("%f", &x2);
	printf("������� y2:");
	scanf_s("%f", &y2);
	printf("������� x3:");
	scanf_s("%f", &x3);
	printf("������� y3:");
	scanf_s("%f", &y3);
	// ���������� ������
	// ������� ����� ������ ������������
	a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	//������� ��������
	P = a + b + c;
	p2 = P / 2;
	//������ �������
	S = sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c));
	// ����� ���������� 
	printf("�������� ������������ P=%f\n",P);
	printf("������� ������������ S=%f\n", S);
	// ���������� ���������
	system("pause");
	return 0;
}