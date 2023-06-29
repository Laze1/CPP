//
// Created by Laze1 on 2023/6/29.
//
#include "refAndPtr.h"
#include "../Log/Log.h"
#include "iostream"

using namespace std;

void increment(int &value){
    value++;
}

void incrementPtr(int* value){
    (*value)++;
}

///引用、指针
void testPtrAndRef() {
    int var = 5;
    log(var);
    int* ptr = &var;
    cout<< ptr << endl;
    *ptr = 10;
    cout<< *ptr << endl << ptr <<endl ;

    int& ref = var;
    ref = 15;
    increment(var);
    cout<< "ref="<< ref << "--" << "var=" << var <<endl;
    incrementPtr(&var);
    cout<< "ref="<< ref << "--" << "var=" << var <<endl;
}