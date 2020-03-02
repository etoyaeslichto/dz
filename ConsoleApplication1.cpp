﻿#include <iostream>
using namespace std;
int main()
{
	int n, k;
	cout << "n="; cin >> n;

	int* a = new int[n];

	cout << "Enter " << n << " elements:\n";
	for (int i = 0; i < n; i++)
		cin >> a[i];

	cout << "k="; cin >> k;

	int* b = new int[n * 2]; // создаем новый массив удвоенного размера
	int bcnt = 0;            // инициализируем счетчик элементов нового массива
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 1) // проверяем значение на нечетность
		{
			b[bcnt++] = k;  // если нечетное, то помещаем в новый массив число Х          
		}	
		b[bcnt++] = a[i]; // помещаем в новый массив значение из первоначального
	}

	for (int i = 0; i < bcnt; i++)
		cout << b[i] << " ";
	cout << endl;

	delete[]a;
	delete[]b;
	system("pause");
	return 0;
}