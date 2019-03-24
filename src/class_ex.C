#include "class_ex.h"

class_ex::class_ex(int init_var){
    std::cout << "class ex init_val: " << init_var << std::endl;
    std::cout << "some public val: " << somevar << std::endl;
    somevar = init_var;
    std::cout << "initialized public val: " << somevar << std::endl;
}

int class_ex::getter_ex(){
    std::cout << "getter returns a private val" << std::endl;
    return private_var;
}
