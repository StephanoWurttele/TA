#include<iostream>

int suma(int num, int* ptr){
    return num + *ptr;
}

int main(){
    int var1 = 3, var2 = 2;
    int *var3 = &var1, *var4 = &var2;
    std::cout << suma(var1, var3);
}
