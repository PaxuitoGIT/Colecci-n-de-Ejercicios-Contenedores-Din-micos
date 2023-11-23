#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numeros = {5, 2, 8, 1, 3};
    sort(numeros.begin(), numeros.end());
    vector<int>::iterator maxElem = max_element(numeros.begin(), numeros.end());
    cout << "El elemento maximo es: " << *maxElem << endl;
    return 0;
}