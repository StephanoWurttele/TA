#include <iostream>

using namespace std;

bool isMagic(int n){
    int temp=0;
    for(int i = n/2 ; i > 0 ; i--){
        if(n % i == 0){
            temp+=i;
        }
    }
    if(temp == n)
        return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    cout << (isMagic(n) == 1 ? "Si" : "No") ;
}
