#include <iostream>
#include <conio.h>
#include <cmath>
#include <clocale>
using namespace std;
int stepen(int x, int k);
int factorial(int k);
void main()
{
	setlocale(LC_ALL, "Russain");
	int x, k = 0, s, sum = 0, e;
	cout << "Vvedite argument = ";
	cin >> x;
	cout << "Vvedite tochnost = ";
	cin >> e;
	int kk = 1;
	while (true)
	{
		s = stepen(-1, k - 1) * stepen(x, 2 * k + 1) / (factorial(2 * k - 1) * factorial(2 * k + 1));
		if (k)
		{
			if (fabs(s) < e) {
				break;
			}
			kk *= k;
		}
		sum += s;
		k++;
	}
	cout << "rezultat = " << sum << endl;
}
int stepen(int x, int k)
{
	int p;
	p = pow(x, k);
	return p;
}
int factorial(int k)
{
	int res = 1;
	for (int i = 1; i <= k; i++)
	{
		res = res * i;
	}
	return res;
}
