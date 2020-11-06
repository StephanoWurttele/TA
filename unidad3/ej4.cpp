#include <iostream>

int main(){
    int var1 = 5;
    int *var2 = &var1;
    std::cout << "A)" << *var2 << std::endl;
    std::cout << "B)" << var2 << std::endl;
    std::cout << "C1)" << *&var2 << std::endl;
    std::cout << "C2)" << &var2 << std::endl;
    std::cout << "D)" << &*var2 << std::endl;
    //std::cout << "E)" << &(&var1);
    std::cout << "F)" << *&var1 << std::endl;
    //std::cout << "G)" << &&var2;
}

