#include <iostream>
#include <stdio.h>
#include<clocale>
#include <conio.h>
using namespace std;
int main()
{
	int a, b,sum;
	setlocale(LC_ALL, "Rus");
	for (int i = 1; i <= 30; i++)
	{
		if (i % 2 == 0)
			a = i;
		else
			a = (i / 2);
		if (i % 2 == 0)
			b = i * i;
		else
			b = i * i * i;
		sum = pow((a - b), 2);
	}
	cout << sum << endl;
	return 0;
}