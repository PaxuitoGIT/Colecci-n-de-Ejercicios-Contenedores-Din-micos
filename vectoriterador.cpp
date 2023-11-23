#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros;

    numeros.push_back(1);
    numeros.push_back(2);
    numeros.push_back(3);
    numeros.push_back(4);
    numeros.push_back(5);

    vector<int>::iterator it;

    for(it = numeros.begin(); it != numeros.end(); it++) {
        cout << *it << endl;
    }
    
    return 0;
}