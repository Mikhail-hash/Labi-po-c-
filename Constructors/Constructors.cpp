#include <iostream>
#include <string>

using namespace std;

/*. Создать класс Fraction для работы с дробными числами. Число должно быть представлено двумя полями: целая часть – длинное целое со знаком,
дробная часть – беззнаковое короткое целое. Реализовать арифметические операции сложения, вычитания, умножения и операции сравнения.*/


int main()
{
    setlocale(LC_ALL, "ru");
    Fraction A;
    A.show();
    cout << "\n";

    //Для проверки 2 зафиксированных числа
    Fraction N(5, 2);
    N.show();
    cout << "Число 1: " << N.toString() << "\n\n";

    Fraction M = Fraction{ 5, 0 };
    M.show();
    cout << "Число 2: " << M.toString() << "\n\n";

    //Часть где пользователь вводит само число.
    Fraction K;
    K.read();
    K.show();
    cout << "Число 3: " << K.toString() << "\n\n";

    A.Summa(N, M);
    A.minus(N, M);
    A.Umnoh(N, K);
    A.Equal(N, K);
}