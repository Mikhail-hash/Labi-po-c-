#include <iostream>
#include "Array.h"

using namespace std;

/* 15. Создать класс BitString (Класс для работы с битовыми строками не более чем из 100 бит.
Битовая строка должна быть представлена массивом типа unsigned char, каждый элемент которого принимает значение 0 или 1.)
и класс String (Класс для работы со строками, аналогичными строками Turbo Pascal (строка представляется как массив 255 байт, длина - в первом байте).
Максимальный размер строки должен задаваться.).
*/

int main() {
	Array x(7);
	for (int index = 0; index < x.length(); index++) {
		x[index] = rand() % 250;
	}
	cout << x;

	Array y(10);
	for (int index = 0; index < y.length(); index++) {
		y[index] = rand() % 250;
	}
	cout << y;

	Array z = x + y;
	cout << z;
}