#include <iostream>
using namespace std;
double f(double x)
{
	if (x <= 3) return x * x - 3 * x + 9;
	else return 1 / (x * x * x + 6);
}
void main()
{
	double x;
	cout << "x= ";
	cin >> x;
	cout << f(x);
}