# include <iostream>
# include <conio.h>
#include <locale>
# include <time.h>
# include <cstdlib>
using namespace std;
void vvod(int a[], int n);
void vivod(int a[], int n);
void element(int a[], int n);
void sum(int a[], int n);
void zamena(int a[], int n);
void main()
{
	srand((unsigned)time(NULL));
	setlocale(0, "");
	int a[20];
	int n, k;
	cout << "Введите количество элементов массива: ";
	cin >> n;
	do
	{
		cout << "1. Ввод массива а " << endl;
		cout << "2. Вывод элементов массива: " << endl;
		cout << "3. Первый отрицательный элемент массива: " << endl;
		cout << "4. Сумма отрицательных элементов массива: " << endl;
		cout << "5. Замена элементов перед первым отрицательным элементом массива на сумму всех отриц элеменитов: " << endl;
		cout << "6. Конец работы" << endl;
		cout << "Укажите номер меню: ";
		cin >> k;
		switch (k)
		{
		case 1: vvod(a, n); break;
		case 2: vivod(a, n); break;
		case 3: element(a, n); break;
		case 4: sum(a, n); break;
		case 5: zamena(a, n); break;
		case 6: cout << "Конец работы" << endl; break;
		default: cout << "Такого пункта нет" << endl;
		}
		if (k == 6) break;
	} while (true);



}
void vvod(int a[], int n)
{
	cout << "Введите элементы массива" << endl;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void vivod(int a[], int n)
{
	cout << "Массив а" << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
	cout << endl;
}
void element(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		if (a[i] < 0)
			break;
	if (i < n)
		cout << "Первый отрицательынй элемент: "<< a[i] << endl;
	else
		cout << "Нет отрицательных элементов" << endl;
}
void sum(int a[], int n)
{
	int i;
	int summa = 0;
	for (i = 0; i < n; i++)
		if (a[i] < 0)
			summa += a[i];
	cout << "Сумма всех отрицательных элементов: " << summa << endl;

}
void zamena(int a[], int n)
{
	int i;
	int summa = 0;
	for (i = 0; i < n; i++);
	if (i < 0);
	for (i = 0; i < n; i++)
		if (a[i] < 0)
			summa += a[i];
	cout << "Элементы массива перед первым отрицательным элементом были заменены на " << summa << endl;

}