#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <clocale>
using namespace std;
int main()
{
	double x, y;
	bool c;
	setlocale(LC_ALL, "Russian_Russia.1251");
	cout << "x= ";
	cin >> x;
	cout << "y= ";
	cin >> y;
	if ((x * x + y * y) < 0 && y<1 && y>-1 && x<0 && x>-1)
		cout << "Точка попала в область C" << endl;
	else
		if (x < -1 && y<1 && y>-1)
			cout << "Точка попала в область D" << endl;
		else
			if (y > 1 && x < 2)
				cout << "Точка попала в область G" << endl;
			else
				if (y < -1 && x - 1 < -1)
					cout << "Точка попала в область K" << endl;
				else
					if ((x * x + y * y) > 1 && x - 1 < 1)
						cout << "Точка попала в область E" << endl;
					else
						if ((x * x + y * y) < 1 && x > 0 && x - 1 > -1)
							cout << "Точка попала в область A" << endl;
						else
							if ((x * x + y * y) < 1 && x - 1 < 0)
								cout << "Точка попала в область F" << endl;
							else
								cout << "Точка попала в область B" << endl;
	
		
	return 0;
}