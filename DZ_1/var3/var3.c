#include <stdio.h>
#include <locale.h>
#include <math.h>
// ���������� ������� �������
int main() {
	setlocale(LC_ALL, "rus");
	// ���������� ����������
	printf(".\n");
	printf(".........\n");
	printf(".................\n");
	printf(".........................\n");
	printf(".................................\n\n\n\n");
	
	
	for (int i = 1; i <= 6; i++) {
		if (i == 1 || i == 6)
		{
			printf(".................................\n");
		}
		else
		{
			printf(".\t\t\t\t.\n");
		}
	}
	printf("\n\n\n");

	printf("\n");
	printf("\t\t\t.........\n");
	printf("\t\t.................\n");
	printf("\t.........................\n");
	printf(".................................\n\n\n\n");
	
	for (int i = 1; i <= 6; i++) {
		if (i == 1 || i == 6)
		{ 
		printf(".................................\n");
		}
		else
		{
			printf(".\t|\t|\t|\t.\n");
		}
	}
	
	system("pause");
	return 0;
}