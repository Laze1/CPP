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
赋值将从右向左传递，88将首先被赋给steinway。

#### cin
从键盘输入
```c++
int a;
std::cin >> a;
std::cout << a+1;
```
