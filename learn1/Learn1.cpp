#include "iostream"

void test1(){
    using namespace std;
    cout << "Hello, World!" << endl;
    cout << "what ?" ;
    cout << endl ;
    cout << 333;
    cout << "Hello World!" << endl;
    cout << "Hello World!" << "13213" << endl << "???";
}

void test2(){
    int steinway;
    int baldwin;
    int yamaha;
    yamaha = baldwin = steinway = 88;
    std::cout << yamaha;
}

int main() {
    test1();
    return 0;
}
