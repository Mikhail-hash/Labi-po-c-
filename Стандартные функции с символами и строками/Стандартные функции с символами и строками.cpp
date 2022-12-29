#include <iostream>
#include <string>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "rus");
    char s;
    char a[] = "АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯабвгдеёжзийклмнопрстуфхцчшщъыьэюя";
    cin >> s;
    for (int i = 1; i <= strlen(s); i++) {
        if (s[i - 1] = " ") {
            for (int j = 0; j <= strlen(a); j++) {
                if (s[i] == a[j] && j > 32 && j < 66) {
                    s[i] = a[j - 33];
                }
                else {
                    if (s[i] == a[j] && j < 33) {
                        continue
                    }
                }
            }
        }
    }
}