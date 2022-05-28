#include <iostream>
#include <locale>
using namespace std;
int sum(int a)
{
    int b = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
            b += i;
    }
    return b;
}

void main()
{
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Введите число: "; cin >> n;
    while (n <= sum(n))
    {
        if (n == sum(n))
        {
            cout << "Число " << n << " совершенное";
        }
        else
        {
            cout << "Число " << n << " не совершенное" << endl;
            int sum = 0;
            for (int i = 1; i < n; i++)
            {
                sum = 0;
                for (int j = 1; j < i / 2 + 1; j++)
                {
                    if (i % j == 0)
                        sum += j;
                }

                if (sum == i)
                    cout << "Cовершенное число  " << i << endl;

            }
        }
    }
}