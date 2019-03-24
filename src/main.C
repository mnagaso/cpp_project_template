#include "class_ex.h"
#include <iostream>


int main(int argc, char **argv) {
    int mode = 0;

    if (argc != 2) {
        std::cout << "ex: ./main 1" << std::endl;
        mode = 100;
    }
    else
        mode = atoi(argv[1]);

    // input arg example 
    if (mode == 0)
        std::cout << "input arg: " << mode << std::endl;
    else
        std::cout << "input arg is not 0" << std::endl;

    // class initialization
    class_ex testclass(100);
    // call member function
    testclass.getter_ex();
}
