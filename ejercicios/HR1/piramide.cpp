#include <iostream>

using namespace std;

void printPiramid(int n){
    for(int i=0 ; i < n ; i++){
        int numCarac = n - i;
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 0; j < numCarac; j++){
            cout << "+";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printPiramid(n);
}
