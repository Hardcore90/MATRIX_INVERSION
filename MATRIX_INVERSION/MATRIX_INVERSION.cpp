#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	int n, m;
	printf("Введите количество строк: ");
	scanf("%d", &n);
	printf("Введите количество столбцов: ");
	scanf("%d", &m);

	int mas[100][100];
	for (int i = 0; i < n; i++)         // Пользователь заполняет массив
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &mas[i][j]);
		}
	}

	for (int i = 0; i < n; i++)          // Выводим заполненный массив в консоли
	{
		for (int j = 0; j < m; j++)
		{
			printf("%3d", mas[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n");

	int newMass[100][100];
	if (n == m)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				newMass[i][j] = mas[j][i];
			}
		}

		for (int i = 0; i < n; i++)          // Выводим измененный массив в консоли
		{
			for (int j = 0; j < m; j++)
			{
				printf("%3d", newMass[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Невозможно провести инверсию!");
	}
}