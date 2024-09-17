#include <iostream>
using namespace std;

int main() {
	int x, y, tambah, kurang, kali, bagi;
	
	cout << "Masukan Bilangan kesatu : ";
	cin >> x;
	cout << "masukan bilangan kedua : ";
	cin >> y;
	
	tambah = x+y;
	kurang = x-y;
	kali = x*y;
	bagi = x/y;
	
	cout << "masukan perjumlahan x dan y adalah " << tambah << endl;
	cout << "masukan pengurangan x dan y adalah " << kurang << endl;
	cout << "masukan perkalian x dan y adalah " << kali << endl;
	cout << "masukan pembagian x dan y adalah " << bagi << endl;
	
	return 0;
}
