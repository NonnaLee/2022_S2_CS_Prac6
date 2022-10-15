#ifndef S_H
#define S_H

class S {
public:
    static const int globalStackAddress = 100;
    static const int globalStaticAddress = 1000;
    static int stackCounter;
    static int PushGlobalStack();
    static int PopGlobalStack();
};

#endif