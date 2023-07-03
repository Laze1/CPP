//
// Created by Laze1 on 2023/6/30.
//
#include "iostream"

using namespace std;

int main(){
    int example[5];
    example[0] = 1;
    example[1] = 2;

    int* ptr = example;
    ptr[2] = 3;
    cout<< example[2] << endl;
}