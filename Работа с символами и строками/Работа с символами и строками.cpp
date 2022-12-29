#include <iostream>
#include <string>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "rus");
    int k, i, j;
    char s;
    char a[] = "АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдеёжзийклмнопрстуфхцчшщъыьэюя";
    cin >> k;
    cin >> s;
    for (int i = 0; i <= strlen(s); i++) {
        for (int j = 0; j <= strlen(a); j++) {
            if (s[i] == a[j]) {
                cout << a[j + k];
            }
        }
    }
}