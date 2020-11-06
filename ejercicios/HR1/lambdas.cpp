#include<iostream>
#include<string.h>

using namespace std;

void insert_smaller_int_list(auto list, int pos, auto x, auto y, bool func(int, int)){
  list[pos] = func(x, y) ? x : y;
  if (func(x, y)){
    list[pos]= x;
  }
  else{
    list[pos] = y;
  }
}

int main(){
  int N;
  int temp1;
  int temp2;
  cin >> N;
  int int_list[5];
  auto num_comparator1 = [](int x, int y){ return x/10 < y%10;};
  auto num_comparator2 = [](int x, int y){ return x*5 < y*3;};


  for(int i = 0; i < N/2; i++){
    cin >> temp1 >> temp2;
    insert_smaller_int_list(int_list, i, temp1, temp2, num_comparator1);
  }


  for(int i = N/2; i < N; i++){
    cin >> temp1 >> temp2;
    insert_smaller_int_list(int_list, i, temp1, temp2, num_comparator2);
  }
  for(int i = 0; i < N; i++){
    cout << int_list[i] << " ";
  }

}
