#ifndef CLASS_EX_H
#define CLASS_EX_H

#include <iostream>


class class_ex{
public:
    int somevar = 1;

    // initializer
    class_ex(int);

    int getter_ex();
private:
    int private_var = 2;

};


#endif
