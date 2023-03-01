#### cout
打印消息
```c++
cout << "what ?";

std::cout << "Hello";

cout << 33;
```
可以输出数字
#### 控制符 endl
重启一行/换行  和"\n" 同义
```c++
cout << endl;

cout << "Hello World!" << endl;
//连续输出
cout << "Hello World!" << "13213" << endl << "???";
```

#### 语法
```c++
void test2(){
    int steinway;
    int baldwin;
    int yamaha;
    yamaha = baldwin = steinway = 88;
    std::cout << yamaha;
}
```
赋值将从右向左传递，`88`将首先被赋给`steinway`。

#### cin
从键盘输入
```c++
int a;
std::cin >> a;
std::cout << a+1;
```

#### 无符号类型
如果 short 表示的范围为-32768 到+32767，则无符号版本的表示范围为 0-65535。
仅当数值不会为负时才应使用无符号类型，如人口、粒数等。
要创建无符号版本的基本整型，只需使用关键字unsigned 来修改声明即可。
```c++
unsigned x = 555;
unsigned short y = 40000;
```
`unsigned` 本身是 `unsigned int` 的缩写

#### const
常量，不可修改
```c++
const int Months = 12;
```

#### 浮点数
* 12.56
* 2.52e+8
* 8.33E-4
* 1.69e12

e6/E6表示乘以10的6次方，1.69e3 = 1.69*1000 = 1690

![E表示法](img/E.png)
