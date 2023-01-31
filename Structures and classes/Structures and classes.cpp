#include <iostream>
#include <stdio.h>using namespace std;
using namespace std;
/*
Линейное уравнение y=Ax+B. Поле first - дробное число, коэффициент А; поле second – дробное число, коэффициент В.
Реализовать метод function() – вычисление для заданного x значения функции y.
*/

struct solution {
	double first;
	double second;

	void read() {
		cout << "A:";
		cin >> first;
		cout << "B:";
		cin >> second;
	}
	void display() {
		cout << "A=" << first << ";" << "B=" << second << endl;
	}

	void function(int x) {
		cout << "y=" << first * x + second << endl;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	solution one;
	int a;
	cout << "Вставьте X:";
	cin >> a;
	one.read();
	one.display();
	one.function(a);
	return 0;
}
