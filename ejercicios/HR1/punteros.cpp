#include <iostream>

using namespace std;

void test(int* a, int b){
    *a = b;
}

int main() {
    int x, y;
    cin >> x >> y;
    int  * num = new int(x);

    cout << *num << endl;
    test(num,y);
    cout << *num << endl;
}
