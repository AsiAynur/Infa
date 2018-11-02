//На вход вашей программе в стандартном вводе даны действительные коэффициенты A, B и C уравнения Ax² + Bx + C = 0.
//Выведите все его различные действительные корни в любом порядке. Гарантируется, что хотя бы один из коэффициентов не равен нулю.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	    double a, b, c, x1, x2, d;
	    cin >> a >> b >> c;
	    d = b*b - 4*a*c;
	    if (d>0 || d == 0){

	       x1=(-b + sqrt(d)) / (2*a);
	       x2=(-b - sqrt(d)) / (2*a);
	       cout << "x1 = " << x1 << " " << "x2 =" << x2 << endl;
	    }
	    else {
	    	cout << "No roots" << endl;
	    }
	}

