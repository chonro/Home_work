#include <stdio.h>
int main() {
	int age;
	scanf_s("%d", &age);//������������ ������ scanf ������ scanf_s, ����� age ����� �������� &
	if (age <= 13)
		printf("%d - �������", age);//��������� ����� � �������
	else if (14 <= age < 25)
		printf("%f - ���������", age);
	else if (25 <= age && age < 60)// �� ����� ���� ����� � �������
	printf("%f - ��������", age);
	else
		printf("%d - ��������", age);
	return 0;
}