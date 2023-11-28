#include <iostream>
#include <boost/lexical_cast.hpp>
using namespace std;

int main() {
    string str = "123";

    try {
        int num = boost::lexical_cast<int>(str);
        cout << "El numero es: " << num << endl;
    } catch(boost::bad_lexical_cast &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}