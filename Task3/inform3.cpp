#include <iostream>
#include <cmath>
using namespace std;
int main () {
	bool A, B, C, D, x1, x2;
	cin >> A >> B >> C;
	D = B*B - 4*A*C;
	x1 = (-B + sqrt(D)) / (2*A);
	x2 = ( -B - sqrt(D)) / (2*A);
cout  << x1 << " and " << x2 << endl;

	system ("pause");

}
