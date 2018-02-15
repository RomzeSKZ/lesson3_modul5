#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));
	int zadanie;
	do
	{
		cout << "������� ����� �������: ";
		cin >> zadanie;
		switch (zadanie)
		{
		case 1:
		{
			system("cls");
			cout << "������� 1." << endl;
			cout << "������ ��� ������� �������������� �����, ��������� �� 9 � 7 ���������. ������������ ������ ������ �� ������������� �� ����������� �������� ����� ��������." << endl;
			cout << "�������:" << endl;
			int a[7], b[9], ab[16], min, tmp;
			cout << "������ ������: ";
			for (int i = 0; i < 7; i++)
			{
				a[i] = 1 + rand() % 50;
				cout << "[" << a[i] << "] ";
			}
			cout << endl << "������ ������: ";
			for (int i = 0; i < 9; i++)
			{
				b[i] = 1 + rand() % 50;
				cout << "[" << b[i] << "] ";
			}
			cout << endl << "������ ������: ";
			for (int i = 0; i < 7; i++)
			{
				ab[i] = a[i];
			}
			for (int i = 7; i < 16; i++)
			{
				ab[i] = b[i - 7];
			}
			for (int i = 0; i < 16; i++)
			{
				min = i;
				for (int j = i + 1; j < 16; j++)
				{
					if (ab[j] < ab[min])
					{
						min = j;
					}
				}
				tmp = ab[i];
				ab[i] = ab[min];
				ab[min] = tmp;
			}
			for (int i = 0; i < 16; i++)
			{
				cout << "[" << ab[i] << "] ";
			}
			cout << endl;
			break;
		}
		case 2:
		{
			system("cls");
			cout << "������� 2." << endl;
			cout << "� �������� ������������� ������� R(9) ���������� ������ ����������� �� �������� �� �������� ������������� ���������." << endl;
			cout << "�������:" << endl;
			int a[9], max = 0, k = 0;
			for (int i = 0; i < 9; i++)
			{
				a[i] = -20 + rand() % 40;
				cout << "[" << i << "] - " << a[i] << endl;;
			}
			for (int i = 0; i < 9; i++)
			{
				if (a[i] % 2 != 0 && a[i] > max)
				{
					max = a[i];
					k = i;
				}
			}
			cout << "������������ �������� ������������� ����� - " << max << " � �������� - " << k << endl;
			break;
		}
		case 3:
		{
			system("cls");
			cout << "������� 3." << endl;
			cout << "������ ������, ��������� �� 9 ��������� (������ ���������� �����) ������ ����. �������� ����� ������, ��������� �� ���� ���� ��������� ��������� �������." << endl;
			cout << "�������:" << endl;
			int a[9], aa[9];
			cout << "�������� ������: ";
			for (int i = 0; i < 9; i++)
			{
				a[i] = 10 + rand() % 90;
				cout << a[i] << " ";
			}
			cout << endl << "����� ������: ";
			for (int i = 0; i < 9; i++)
			{
				aa[i] = a[i] / 10 + a[i] % 10;
				cout << aa[i] << " ";
			}
			cout << endl;
			break;
		}
		case 4:
		{
			system("cls");
			cout << "������� 4." << endl;
			cout << "���� �������������� ����� c1, c2, �, cn. ����� ������������ ����� ����� � ������� ��������� � ����� ����� � ��������� ���������." << endl;
			cout << "�������:" << endl;
			int c[21], chet = 0, nechet = 0;
			cout << "�������� ������: ";
			for (int i = 0; i < 10; i++)
			{
				c[i] = 10 + rand() % 90;
				cout << c[i] << " ";
			}
			cout << endl;
			for (int i = 0; i < 10; i++)
			{
				if (i % 2 == 0 || i == 0)
					chet += c[i];
				else if (i % 2 != 0)
					nechet += c[i];
			}
			cout << "����� ����� � ������� ���������: " << chet << endl;
			cout << "����� ����� � ��������� ���������: " << nechet << endl;
			cout << "������������ ����: " << chet*nechet << endl;
			break;
		}
		case 5:
		{
			system("cls");
			cout << "������� 5." << endl;
			cout << "������ ������, ��������� �� 14 ��������� ��������������� ����. �������� ������� ������ �������� �� ������. ���������� ���������� ������������� ��� ���� ������������." << endl;
			cout << "�������:" << endl;
			int a[14], k = 0, i = 0, tmp;
			cout << "�������� ������: ";
			for (i = 0; i < 14; i++)
			{
				a[i] = 1 + rand() % 30;
				cout << a[i] << " ";
			}
			cout << endl;
			cout << "���������� ������: ";
			i = 0;
			do
			{
				tmp = a[i];
				a[i] = a[7 + i];
				a[7 + i] = tmp;
				k++;
				i++;
			} while (i < 7);
			for (i = 0; i < 14; i++)
			{
				cout << a[i] << " ";
			}
			cout << endl << "���-�� ������������: " << k << endl;
			break;
		}
		case 6:
		{
			system("cls");
			cout << "������� 6." << endl;
			cout << "���������� ���������� ��������� ���������� � �������� �������� �������. (��������� �������� � �������� ������� � ��� ������������������ ���� ����� ������� �����, � ������� ������� ����� ������ ������� ����� � ������ �� ����)." << endl;
			cout << "�������:" << endl;
			int a[15], k = 0;
			for (int i = 0; i < 15; i++)
			{
				a[i] = 1 + rand() % 30;
				cout << "[" << i << "] - " << a[i] << endl;
			}
			cout << "----------------" << endl;
			for (int i = 1; i < 14; i++)
			{
				if (a[i] > a[i - 1] && a[i] > a[i + 1])
				{
					cout << "[" << i << "]" << " - ��������� ��������." << endl;
					k++;
				}
			}
			cout << "���-�� ��������� ���������� - " << k << endl;
			break;
		}
		case 7:
		{
			system("cls");
			cout << "������� 7." << endl;
			cout << "� �������� �������� ������� ���������� � ������� ������� ������������������� �����, ������� ��������� ������� (������ ��������� ����� ������ �����������)." << endl;
			cout << "�������:" << endl;
			int a[20];
			for (int i = 0; i < 20; i++)
			{
				a[i] = 1 + rand() % 50;
				cout << "[" << i << "] - " << a[i] << endl;
			}
			cout << "������� ��������� �������������������: ";
			for (int i = 0; i < 20; i++)
			{
				if (a[i] > a[i + 1])
					cout << "[" << i << "]";
				if (a[i - 1] > a[i] && a[i] < a[i + 1])
					cout << "[" << i << "]  ";
			}
			cout << endl;
			break;
		}
		case 8:
		{
			system("cls");
			cout << "������� 8." << endl;
			cout << "������ ������, ��������� �� 10 ��������� (������ ���������� �����) ������ ����. �������� ����� ������, ��������� �� ��������� ���� ��������� ��������� �������." << endl;
			cout << "�������:" << endl;
			int a[10], aa[10];
			cout << "�������� ������: ";
			for (int i = 0; i < 10; i++)
			{
				a[i] = 10 + rand() % 90;
				cout << a[i] << " ";
			}
			cout << endl << "����� ������: ";
			for (int i = 0; i < 10; i++)
			{
				aa[i] = a[i] / 10 - a[i] % 10;
				cout << aa[i] << " ";
			}
			cout << endl;
			break;
		}
		case 9:
		{
			system("cls");
			cout << "������� 9." << endl;
			cout << "����� ������������� ������. ���������� ���������� �������� �������, �� ������� �������� ��������� ���������� (������ ��������� ����� ������ �����������)." << endl;
			cout << "�������:" << endl;
			int a[20], k = 0;
			for (int i = 0; i < 20; i++)
			{
				a[i] = 1 + rand() % 50;
				cout << "[" << i << "] - " << a[i] << endl;
			}
			cout << "������� ��������� �������������������: ";
			for (int i = 0; i < 20; i++)
			{
				if (a[i] > a[i + 1])
				{
					cout << "[" << i << "]";
				}
				if (a[i - 1] > a[i] && a[i] < a[i + 1])
				{
					cout << "[" << i << "]  ";
					k++;
				}
			}
			cout << endl << "���-�� ��������: " << k + 1 << endl;
			break;
		}
		case 10:
		{
			system("cls");
			cout << "������� 10." << endl;
			cout << "������ ��� ������� �������������� �����. ���������� ������������ �������� � ������ ������� � �������� �� �������." << endl;
			cout << "�������:" << endl;
			int a[10], b[10], amax = 0, bmax = 0, ia, ib, tmp;
			cout << "������ ������: ";
			for (int i = 0; i < 10; i++)
			{
				a[i] = 1 + rand() % 100;
				cout << a[i] << " ";
			}
			cout << endl << "������ ������: ";
			for (int i = 0; i < 10; i++)
			{
				b[i] = 1 + rand() % 100;
				cout << b[i] << " ";
			}
			for (int i = 0; i < 10; i++)
			{
				if (a[i] > amax)
				{
					amax = a[i];
					ia = i;
				}
				if (b[i] > bmax)
				{
					bmax = b[i];
					ib = i;
				}
			}
			tmp = a[ia];
			a[ia] = b[ib];
			b[ib] = tmp;
			cout << endl << "������������ ��������: " << amax << " � " << bmax << endl;
			cout << "���������� ������ ������: ";
			for (int i = 0; i < 10; i++)
			{
				cout << a[i] << " ";
			}
			cout << endl << "���������� ������ ������: ";
			for (int i = 0; i < 10; i++)
			{
				cout << b[i] << " ";
			}
			cout << endl;
			break;
		}
		default:
			cout << "�������� ����� �������." << endl;
			break;
		}
	} while (zadanie > 0);
}