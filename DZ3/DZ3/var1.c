#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() 
{
	setlocale(LC_ALL, "rus");
	int pause_size = 1;
	int fig_var, flag1=1;
	printf("����� ����������!\n");
	Sleep(1000);
	system("cls");
	for (int i = 1; i < 3; i++)
	{
		printf("��������");
		Sleep(pause_size);
		system("cls");
		printf("��������.");
		Sleep(pause_size);
		system("cls");
		printf("��������..");
		Sleep(pause_size);
		system("cls");
		printf("��������...");
		Sleep(pause_size);
		system("cls");
	}
	while (flag1 == 1)
	{
		printf("����� ������:\n1. �������������.\n2. �����������.\n3. ����.\n0. ����� �� ����������\n����:");
		scanf_s("%d", &fig_var);
		system("cls");

		if (fig_var == 1)
		{
			//�������� ��� ��������������
			printf("������� ��� ������� ��������������:");
			int a, b, variant;
			float res;
			scanf_s("%d %d", &a, &b);
			system("cls");
			//���� ��������
			printf("����:\n1. ����� ������� ��������������.\n2. ����� �������� ��������������.\n3. ����� ��������� ���������������.\n4. ��������� � ������ ������.\n0. �����.\n����:  ");
			scanf_s("%d", &variant);
			if (variant == 1)
			{
				//�������
				res = a * b;
				printf("������� ��������������: %f \n", res);
				break;
			}
			else if (variant == 2)
			{
				//��������
				res = 2 * a + 2 * b;
				printf("�������� ��������������: %f \n", res);
				break;
			}
			else if (variant == 3)
			{
				//���������
				res = sqrt(pow(a, 2) + pow(b, 2));
				printf("��������� ��������������: %f \n", res);
				break;
			}
			else if (variant == 4)
			{
				//��������� � ������ ������
				system("cls");
			}
			else
			{
				//�����
				break;
			}
		}
		else if (fig_var == 2)
		{
			//�������� ��� ������������
			printf("������� ��� ������� �������������� ������������:");
			int a1, b1, variant1;
			float res1;
			scanf_s("%d %d", &a1, &b1);
			system("cls");
			//���� ��������
			printf("����:\n1. ����� ������� ������������.\n2. ����� �������� ������������.\n3. ����� ��������� ������������.\n4. ��������� � ������ ������.\n0. �����.\n����:  ");
			scanf_s("%d", &variant1);
			if (variant1 == 1)
			{
				//�������
				res1 = a1 * b1;
				printf("������� ������������: %f \n", res1);
				break;
			}
			else if (variant1 == 2)
			{
				//��������
				res1 = sqrt(pow(a1, 2) + pow(b1, 2)) + a1 + b1;
				printf("�������� ��������������: %f \n", res1);
				break;
			}
			else if (variant1 == 3)
			{
				//���������
				res1 = sqrt(pow(a1, 2) + pow(b1, 2));
				printf("��������� ��������������: %f \n", res1);
				break;
			}
			else if (variant1 == 4)
			{
				//��������� � ������ ������
				system("cls");
			}
			else
			{
				//�����
				break;
			}
			}
		else if (fig_var == 3)
		{
			//�������� ��� �����
			printf("������� ������ �����: ");
			int a2, variant2;
			float res2;
			scanf_s("%d", &a2);
			system("cls");
			//���� ��������
			printf("����:\n1. ����� ������� �����.\n2. ����� ����� ���������� �����.\n3. ����� ������� �����.\n4. ��������� � ������ ������.\n0. �����.\n����:  ");
			scanf_s("%d", &variant2);
			if (variant2 == 1)
			{
				//�������
				res2 = 3.14 * pow(a2, 2);
				printf("������� �����: %f \n", res2);
				break;
			}
			else if (variant2 == 2)
			{

				//����� ����������
				res2 = (2 * 3.14 * a2);
				printf("����� ���������� �����: %f \n", res2);
				break;
			}
			else if (variant2 == 3)
			{
				//�������
				res2 = a2 * 2;
				printf("������� �����: %f \n", res2);
				break;
			}
			else if (variant2 == 4)
			{
				//��������� � ������ ������
				system("cls");
			}
			else
			{
				//�����
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
