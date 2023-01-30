#include <iostream>
#include <string>

using namespace std;

class Fraction
{

    //���������� ������� �� ����� ������������ � ������

private:
    long first;
    unsigned short second;

    //���������� ��������� ������� ��������� �� ������ � ������� ����������
public:

    //���� ������ �� �����
    Fraction()
    {
        first = 0;
        second = 0;
    }

    //���� �����
    Fraction(long f, unsigned short s)
    {
        first = f;
        second = s;
    }

    //���� first part � second part �����
    void read()
    {
        cout << "������ �����: ";
        cin >> first;
        cout << "������ �����: ";
        cin >> second;
    }

    //����� ������������ ����� � �������
    void show()
    {
        cout << "�����: " << first << "." << second << endl;
    }

    //��� ������ ���������� ����������� � ���� ������.
    string toString()
    {
        string s = to_string(first) + "." + to_string(second);
        return s;
    }

    //��������
    static void Summa(Fraction a, Fraction b)
    {
        double one, two;
        one = a.second;
        while (one > 1)
            one /= 10;
        one += a.first;
        two = b.second;
        while (two > 1)
            two /= 10;
        two += b.first;
        cout << "��������: " << one + two << endl;
    }

    //���������
    static void minus(Fraction a, Fraction b)
    {
        double one, two;
        one = a.second;
        while (one > 1)
            one /= 10;
        one += a.first;
        two = b.second;
        while (two > 1)
            two /= 10;
        two += b.first;
        cout << "���������: " << one - two << endl;
    }
    //���������
    static void Umnoh(Fraction a, Fraction b)
    {
        double one, two;
        one = a.second;
        while (one > 1)
            one /= 10;
        one += a.first;
        two = b.second;
        while (two > 1)
            two /= 10;
        two += b.first;
        cout << "���������: " << one * two << endl;
    }
    //����������
    static void Equal(Fraction a, Fraction b)
    {
        double one_E, two_E;
        one_E = a.second;
        while (one_E > 1)
            one_E /= 10;
        one_E += a.first;
        two_E = b.second;
        while (two_E > 1)
            two_E /= 10;
        two_E += b.first;

        if (one_E == two_E)
            cout << "����� ����������." << endl;
        else if (one_E > two_E)
            cout << "������ ����� ������ �������." << endl;
        else
            cout << "������ ����� ������ �������." << endl;
    }
};
