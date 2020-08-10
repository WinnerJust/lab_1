#include <iostream>
#include <cmath>

int main() {
	double x1, y1, x2, y2, x3, y3, d1, d2, d3, p, a;
	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	d1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	d2 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	d3 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));

	p = (d1 + d2 + d3) / 2;
	a = sqrt(p * (p - d1) * (p - d2) * (p - d3));
	std::cout << a;

	system("pause");
	return 0;
}