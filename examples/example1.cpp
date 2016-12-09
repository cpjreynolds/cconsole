#include <iostream>

#include "cconsole/cconsole.h"

int main(int argc, char* argv[]) {
    int ret = cconsole::dummy();
    std::cout << "example1 hello" << std::endl;
    std::cout << "dummy: " << ret << std::endl;
    return 0;
}
