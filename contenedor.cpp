#include <iostream>
#include <list>
#include <stack>    
using namespace std;

int main() {
    list<double> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
    stack<double, list<double>> pila(lista);
    pila.push(6.6);
    cout <<"Elemento en la cima de la pila: " << pila.top() << endl;
    pila.pop();
    cout << "Nuevo elemento en la cima de la pila: " << pila.top() << endl;
    return 0;
}