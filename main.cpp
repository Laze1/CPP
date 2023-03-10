#include <iostream>

using namespace std;

struct inflatable {
    char name[20];
    float volume;
    double price;
};

int main() {
    inflatable ball = {
            "basktball", 2.5, 22.88
    };
    cout<< ball.name << endl;
    cout<< ball.volume << endl;
    cout<< ball.price << endl;
    return 0;
}
