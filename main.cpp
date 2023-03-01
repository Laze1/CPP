#include <iostream>

using namespace std;

int main() {
    unsigned x = 555;
    unsigned short y = 40000;
    int du;
    cout<< "Please enter a Celsius value:";
    cin>> du;
    cout<< du <<" degrees Celsius is "<< 1.8*du+32 <<" degrees Fahrenheit";
    cout << endl << x << " + "<< y;
    return 0;
}
