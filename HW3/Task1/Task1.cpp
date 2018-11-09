#include <iostream>
using namespace std;
int main()
{
double N, A, B, X, Y, S=0, result;
cin >> N >> A >> B >> X >> Y;
if ( N > A and N < B ){
X/=100;
S = N * X;
result = N - S;
cout << result << endl;}
else
{
if (N > B){
Y/=100;
S = N * Y;
result = N - S;
cout << result << endl;}
}
if (N < A)
cout << N << endl;
}
