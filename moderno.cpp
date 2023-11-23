#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
using namespace std;

int main() {
    auto cuadrado = [](int x) { return x * x; };
    vector<int> numeros = {1, 2, 3, 4, 5};
    for_each(numeros.begin(), numeros.end(), [](int &num) { num *= 2; });
    unique_ptr<int> ptr(new int(10));
    cout << "\nValor del puntero inteligente: " << *ptr << endl;
    return 0;   
}