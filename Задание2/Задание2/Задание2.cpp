#include <iostream>
#include <conio.h>
#include <clocale>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int N,c,k,o;
	cout << "Введите число: " ;
	cin >> N;
	c = 4;
	k = N / c;
	o = N % c;
	if (o == 0)
		cout << "N = " <<c <<" * " << k << endl;
	else
		cout <<"N = " <<c <<" * " <<k<< " + " <<o << endl;
	return 0;



	
}