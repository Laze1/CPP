#include <iostream>
#include "Log/Log.h"
#include "Log/LogX.h"

using namespace std;


class Player {
public:
    int x, y;
    int speed;

    void move(int xa, int ya) {
        x += xa * speed;
        y += ya * speed;
    }

    //当前位置
    void currentPosition() const {
        cout << "x: " << x << " y: " << y << endl;
    }
};


void test() {
    Player player{1, 2, 3};
    player.currentPosition();
    player.move(1, -1);
    player.currentPosition();
    player.currentPosition();
}


//int main() {
//    initLog();
//    test();
//}
