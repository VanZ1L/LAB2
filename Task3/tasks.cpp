#include <iostream>
using namespace std;
bool isInArea(double x, double y)
{
	if (x * x + y * y > 1 || (x < 0 && y < 0)) return 0;
	else return 1;
}
void Task1()
{
	double x, y;
	cout << "Enter x y";
	cin >> x >> y;
	if (isInArea(x, y) == 0) cout << "False";
	else cout << "True";
}
double f(double x)
{
	if (x <= 3) return x * x - 3 * x + 9;
	else return 1 / (x * x * x + 6);
}
void Task2()
{
	double x;
	cout << "x= ";
	cin >> x;
	cout << f(x);
}