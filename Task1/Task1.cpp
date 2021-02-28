#include <iostream>
using namespace std;
bool isInArea(double x, double y)
{
	if (x * x + y * y > 1 || (x < 0 && y < 0)) return 0;
	else return 1;
}
void main()
{
	double x, y;
	cout << "Enter x y\n";
	cin >> x >> y;
	if (isInArea(x, y) == 0) cout << "False";
	else cout << "True";
}