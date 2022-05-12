#include <stdio.h>
#include <conio.h>
#include <clocale>
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int n, s;
	cout << "n= ";
	cin >> n;
	s = 0;
	while(n>0)
	{
		s += n % 10;
		n /= 10;
	}
	cout << s << endl;
	return 0;

}