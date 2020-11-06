#include <iostream>

using namespace std;
int main(){
    int n;
    cin >> n;
    int totalSum = 0;
    auto arr = new int[n];
    auto arr2 = new int[n];
    for(int i = 0;  i <n ; i++){
        cin >> arr[i];
    }
    for(int i = 0;  i <n ; i++){
        cin >> arr2[i];
    }
    for(int i = 0;  i < n; i++){
        totalSum+= arr[i]*arr2[i];
    }
    cout << totalSum;
}
