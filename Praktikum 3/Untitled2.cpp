#include<iostream>

using namespace std;

int main() {
	int a, b, c = 0, d = 0;
	
	cout << "masukan nilai A : ";
	cin >> a;
	cout << "masukan nilai b : ";
	cin >> b;
	
	c = a % b;
	d = a * b;
	cout << "hasil nilai c dari A % B = " << c << endl;
	cout << "hasil nilai d dari a * B = " << d << endl;
	
	return 0;
}
