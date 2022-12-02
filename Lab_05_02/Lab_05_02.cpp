// ����������� ������ � 5.2

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double S(const double x, const double eps, int& n, double& s);
double A(const double x, const int n, double& a);

int main()
{
	double xp, xk, x, dx, eps, a = 0, R = 0, s = 0;
	int n = 0;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	cout << fixed;
	    cout << "-------------------------------------------------" << endl;
	    cout << "|" << setw(5) << "x" << " |"
		            << setw(17) << "exp(x)" << " |"
		            << setw(15) << "S" << " |"
		            << setw(5) << "n" << " |"
		            << endl;
	    cout << "-------------------------------------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		S(x, eps, n, s);

		cout << "|" << setw(7) << setprecision(2) << x << " |"
			        << setw(10) << setprecision(5) << exp(x*x) << " |"
			        << setw(10) << setprecision(5) << s << " |"
			        << setw(5) << n << " |"
			        << endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}

double S(const double x, const double eps, int& n, double& s)
{
	n = 0;
	double a = 1;
	s = a;

	do {
		n++;
		a = A(x, n, a);
		s += a;
	} while (abs(a) >= eps);
	return s;
}

double A(const double x, const int n, double& a)
{
	double R = (x * x) / n; // ����� �������� �� ����� �������� �������
	a *= R;
	return a;
}
