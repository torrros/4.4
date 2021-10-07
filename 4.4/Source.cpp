// Lab_04_4.cpp 
// Торос Владислав 
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 17
#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	double x, y, xp, xk, dx, R;
	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x <= (-1 - R))
			y=1;
		else
			if (-1 - R < x && x <= -1)
				y= R * R - ((x + 1) * (x + 1));
			else
				if (-1 < x && x <= 2)
					y = -R;
				else
					y = (-4 * R + R * x) / 2;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}