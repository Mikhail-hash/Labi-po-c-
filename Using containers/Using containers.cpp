#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>

using namespace std;

void show(const vector<int>& p) {
    cout << "Vector: ";
    for (int i : p)
        cout << i << " ";
    cout << "\n" << endl;
}

int main() {
    vector<int> a = { 13, 92, 4, 546, 42, 7, 666, 123, 45, 1, 69 };
    show(a);

    iter_swap(a.begin(), a.begin() + (max_element(a.begin(), a.end()) - a.begin()));
    show(a);
}
