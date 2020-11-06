#include<vector>
#include<iostream>
using namespace std;
int main(){
  int filas = 5, columnas = 5;
  std::vector<int> vec1;
  std::vector<std::vector<int>> mat1;

  for(int i = 0; i < 5; ++i)
    vec1.push_back(i);

  for (int i =0;i<filas; i++){ 
    vector<int> temporal;
    for (int j =0;j<columnas; j++){
      temporal.push_back(j);
    }
    mat1.push_back(temporal); 
  }

  vector<vector<int>> *pointer = &mat1;

  vector<int>* pointer2 = &mat1[0]; 
  int *pointer3 = &mat1[2][0];

  cout << *(++pointer3) << endl;

  for(int i = 0; i < 5; ++i){
    for(int j = 0; j < 5; ++j){
      std::cout << &mat1[i][j] << " ";
    }
    std::cout << endl;
  }
}
