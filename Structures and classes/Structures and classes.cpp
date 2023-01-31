#include <iostream>
#include <stdio.h>using namespace std;
using namespace std;

struct solution {
	double first;
	double second;

	void read() {
		cout << "a";
		cin >> first;
		cout << "b";
		cin >> second;
	}
	void display() {
		cout << "a=" << first << ";" << "b=" << second << endl;
	}

	void function(int x) {
		cout << "y=" << first * x + second << endl;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	solution one;
	int a;
	cout << "Вставьте x";
	cin >> a;
	one.read();
	one.display();
	one.function(a);
	return 0;
}
