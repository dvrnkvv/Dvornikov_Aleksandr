# include <iostream>
# include <conio.h>
#include <locale>
# include <time.h>
# include <cstdlib>
using namespace std;
int bolshesrednego(int a[], int n);
int main()
{
	srand((unsigned)time(NULL));
	setlocale(0, "");
	int a[20];
	int n;
	cout << "Введите количество элементов массива: ";
	cin >> n;
	cout << "Введите элементы массива" << endl;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "Среднее значение элементов: " << bolshesrednego(a, n) << endl;
	system("pause");
	return 0;
}
int bolshesrednego(int a[], int n)
{
	int sum, k;
	sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > (double) sum / n)
			k++;
	}
	return k;
}

		
