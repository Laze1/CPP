//
// Created by Laze1 on 2023/6/27.
//
#include "Log.h"
#include <iostream>

void initLog(){
    system("chcp 65001");
    log("init finish");
}


void log(const char* message){
    std::cout << message << std::endl;
}

void log(const int number){
    std::cout << number << std::endl;
}
