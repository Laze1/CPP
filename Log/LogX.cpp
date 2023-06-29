//
// Created by Laze1 on 2023/6/29.
//
#include "iostream"
#include "LogX.h"

class LogX {
public:
    enum Level {
        NONE, ERROR, WARN, INFO
    };
private:
    Level level = INFO;
public:
    void setLevel(Level newLevel) {
        this->level = newLevel;
    }

    void info(const char *message) {
        if (level >= INFO)
            std::cout << "[INFO]:" <<  message << std::endl;
    }

    void warn(const char *message) {
        if (level >= WARN)
            std::cout << "[WARN]:" << message << std::endl;
    }

    void error(const char *message) {
        if (level >= ERROR)
            std::cout << "[ERROR]:" <<  message << std::endl;
    }
};

int main() {
    LogX logX;
    logX.setLevel(LogX::WARN);
    logX.info("info");
    logX.warn("warn");
    logX.error("error");
}