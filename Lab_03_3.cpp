// Lab_03_3.cpp
// Кругліцький Мстислав
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 14

#include <iostream>

using namespace std;
int main()
{
	double x;
	double y;

	cout << "x = "; 
	cin >> x;

	if (x <= -4)
		y = -2;
	else if (-4 < x && x <= 0)
	{
		y = 1./4. * x;
	}
	else if (0 < x && x <= 2)
	{
		y = x * x;
	}
	else
	{
		y = -1./2. * x + 5;
	}

	cout << endl;
	cout << "y = " << y << endl;

	return 0;
}