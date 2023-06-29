#include <iostream>
#include <utility>

using namespace std;


class Player {
public:
    string name;
    int x, y;
    int speed;

    //构造函数
    Player(string name, int x, int y, int speed) : name(std::move(name)), x(x), y(y), speed(speed) {}

    void move(int xa, int ya) {
        x += xa * speed;
        y += ya * speed;
    }

     ///当前位置
     virtual void currentPosition() const {
        cout << "( " << x << " , " << y << " )" << endl;
    }
};

//武器枚举
enum WeaponType {
    SWORD, AXE, BOW, SPEAR
};

//装备类
class Equipment {
public:
    //武器
    string weapon;
};

class MainPlayer : public Player, public Equipment {
public:
    MainPlayer(const string &name, int x, int y, int speed) : Player(name, x, y, speed) {
        weapon = "sword";
    }
};


void test() {
    Player player{"player1",1, 2, 3};
    player.currentPosition();
    player.move(1, -1);
    player.currentPosition();

    MainPlayer mainPlayer{"zhu jue",5, 2, 1};
    cout << mainPlayer.name << endl;
    mainPlayer.currentPosition();

    cout << mainPlayer.weapon << endl;
}


int main() {
    test();
}
