#include <iostream>
#include <valarray>
using namespace std;

int main() {
    valarray<double> numeros = {1.1, 2.2, 3.3, 4.4, 5.5};
    
    valarray<double> suma = numeros + 10.0;
    valarray<double> resta = numeros - 10.0;
    valarray<double> multiplicacion = numeros * 2.0;
    valarray<double> division = numeros / 2.0;
}