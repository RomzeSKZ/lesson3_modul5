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
		cout << "Введите номер задания: ";
		cin >> zadanie;
		switch (zadanie)
		{
		case 1:
		{
			system("cls");
			cout << "Задание 1." << endl;
			cout << "Ввести два массива действительных чисел, состоящих из 9 и 7 элементов. Сформировать третий массив из упорядоченных по возрастанию значений обоих массивов." << endl;
			cout << "Решение:" << endl;
			int a[7], b[9], ab[16], min, tmp;
			cout << "Первый массив: ";
			for (int i = 0; i < 7; i++)
			{
				a[i] = 1 + rand() % 50;
				cout << "[" << a[i] << "] ";
			}
			cout << endl << "Второй массив: ";
			for (int i = 0; i < 9; i++)
			{
				b[i] = 1 + rand() % 50;
				cout << "[" << b[i] << "] ";
			}
			cout << endl << "Третий массив: ";
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
			cout << "Задание 2." << endl;
			cout << "В заданном целочисленном массиве R(9) определить индекс наибольшего из нечетных по значению положительных элементов." << endl;
			cout << "Решение:" << endl;
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
			cout << "Максимальное нечетное положительное число - " << max << " с индексом - " << k << endl;
			break;
		}
		case 3:
		{
			system("cls");
			cout << "Задание 3." << endl;
			cout << "Ввести массив, состоящий из 9 элементов (девять двузначных чисел) целого типа. Получить новый массив, состоящий из сумм цифр элементов исходного массива." << endl;
			cout << "Решение:" << endl;
			int a[9], aa[9];
			cout << "Исходный массив: ";
			for (int i = 0; i < 9; i++)
			{
				a[i] = 10 + rand() % 90;
				cout << a[i] << " ";
			}
			cout << endl << "Новый массив: ";
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
			cout << "Задание 4." << endl;
			cout << "Даны действительные числа c1, c2, …, cn. Найти произведение суммы чисел с четными индексами и суммы чисел с нечетными индексами." << endl;
			cout << "Решение:" << endl;
			int c[21], chet = 0, nechet = 0;
			cout << "Исходный массив: ";
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
			cout << "Сумма чисел с четными индексами: " << chet << endl;
			cout << "Сумма чисел с нечетными индексами: " << nechet << endl;
			cout << "Произведение сумм: " << chet*nechet << endl;
			break;
		}
		case 5:
		{
			system("cls");
			cout << "Задание 5." << endl;
			cout << "Ввести массив, состоящий из 14 элементов действительного типа. Поменять местами первую половину со второй. Определить количество произведенных при этом перестановок." << endl;
			cout << "Решение:" << endl;
			int a[14], k = 0, i = 0, tmp;
			cout << "Исходный массив: ";
			for (i = 0; i < 14; i++)
			{
				a[i] = 1 + rand() % 30;
				cout << a[i] << " ";
			}
			cout << endl;
			cout << "Измененный массив: ";
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
			cout << endl << "Кол-во перестановок: " << k << endl;
			break;
		}
		case 6:
		{
			system("cls");
			cout << "Задание 6." << endl;
			cout << "Определить количество локальных максимумов в заданном числовом массиве. (Локальный максимум в числовом массиве – это последовательность трех рядом стоящих чисел, в которой среднее число больше стоящих слева и справа от него)." << endl;
			cout << "Решение:" << endl;
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
					cout << "[" << i << "]" << " - локальный максимум." << endl;
					k++;
				}
			}
			cout << "Кол-во локальных максимумов - " << k << endl;
			break;
		}
		case 7:
		{
			system("cls");
			cout << "Задание 7." << endl;
			cout << "В заданном числовом массиве определить и вывести индексы последовательностей чисел, которые монотонно убывают (каждое следующее число меньше предыдущего)." << endl;
			cout << "Решение:" << endl;
			int a[20];
			for (int i = 0; i < 20; i++)
			{
				a[i] = 1 + rand() % 50;
				cout << "[" << i << "] - " << a[i] << endl;
			}
			cout << "Индексы убывающих последовательностей: ";
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
			cout << "Задание 8." << endl;
			cout << "Ввести массив, состоящий из 10 элементов (десять двузначных чисел) целого типа. Получить новый массив, состоящий из разностей цифр элементов исходного массива." << endl;
			cout << "Решение:" << endl;
			int a[10], aa[10];
			cout << "Исходный массив: ";
			for (int i = 0; i < 10; i++)
			{
				a[i] = 10 + rand() % 90;
				cout << a[i] << " ";
			}
			cout << endl << "Новый массив: ";
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
			cout << "Задание 9." << endl;
			cout << "Задан целочисленный массив. Определить количество участков массива, на котором элементы монотонно возрастают (каждое следующее число больше предыдущего)." << endl;
			cout << "Решение:" << endl;
			int a[20], k = 0;
			for (int i = 0; i < 20; i++)
			{
				a[i] = 1 + rand() % 50;
				cout << "[" << i << "] - " << a[i] << endl;
			}
			cout << "Индексы убывающих последовательностей: ";
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
			cout << endl << "Кол-во участков: " << k + 1 << endl;
			break;
		}
		case 10:
		{
			system("cls");
			cout << "Задание 10." << endl;
			cout << "Ввести два массива действительных чисел. Определить максимальные элементы в каждом массиве и поменять их местами." << endl;
			cout << "Решение:" << endl;
			int a[10], b[10], amax = 0, bmax = 0, ia, ib, tmp;
			cout << "Первый массив: ";
			for (int i = 0; i < 10; i++)
			{
				a[i] = 1 + rand() % 100;
				cout << a[i] << " ";
			}
			cout << endl << "Второй массив: ";
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
			cout << endl << "Максимлаьные значения: " << amax << " и " << bmax << endl;
			cout << "Измененный первый массив: ";
			for (int i = 0; i < 10; i++)
			{
				cout << a[i] << " ";
			}
			cout << endl << "Измененный второй массив: ";
			for (int i = 0; i < 10; i++)
			{
				cout << b[i] << " ";
			}
			cout << endl;
			break;
		}
		default:
			cout << "Неверный номер задания." << endl;
			break;
		}
	} while (zadanie > 0);
}