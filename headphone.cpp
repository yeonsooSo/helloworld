#include <iostream>
#include "Headphone.h"
#include <string>
using namespace std;

int main() {
	string name;
	cout << "your name?: ";
	getline(cin, name);
	Headphone cus1(name, 1000000);
	cout << "your name?: ";
	getline(cin, name);
	Headphone cus2(name, 1000001);
	cout << "your name?: ";
	getline(cin, name);
	Headphone cus3(name, 1000002);

	cout << "\n" << cus1.getSerial() << "\t" 
		<< cus1.getName() << '\t' << cus1.getColor() << endl;
	cout << "\n" << cus2.getSerial() << "\t"
		<< cus2.getName() << '\t' << cus2.getColor() << endl;
	cout << "\n" << cus3.getSerial() << "\t"
		<< cus3.getName() << '\t' << cus3.getColor() << endl;

	return 0;
}