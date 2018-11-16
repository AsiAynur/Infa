#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool CheckPali (string s) {
	int length = s.size;
for (int i = 0; i < length / 2; i++) {
	if ( s[i] != s[length - 1 - i]) {
		return false;
	}
}
return true;
}

int main () {
	string s;
	cin >> s;
   cout << CheckPali << endl;
		}


