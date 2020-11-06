#include<iostream>

int suma(int num, int num2, int &ans){
    ans = num + num2;
}

int main(){
    int var1 = 3, var2 = 2, var3 = 0;
    suma(var1, var2, var3);
      std::cout << var3;
}
