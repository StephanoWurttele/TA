#include <iostream>

using namespace std;

void funcion(int *puntero){
  *puntero = 5;
}

void funcion3(int &puntero){
  puntero = 5;
}

void funcion_sin_punteros(int numero){
  numero = 5;
}


int main(){
  int a = 8;
  int *b = &a; //
  int arr[5]; // { 1, 2, 3, 4, 5} 0x008 -> 0x00c -> 0x010
  int **c = &b;

  cout << a << endl;          // 8
  cout << b << endl;    // direccion de a
  cout <<"Arreglo: " << arr << endl; // direccion de arr
  for(int i = 0; i < 5; ++i)
    arr[i] = i;
  cout << "1:-----" << endl;

  for(int i = 0; i < 5; ++i)
    cout << &(arr[i]) << endl;

  cout << "2:-----" << endl;

  for(int i = 0; i < 5; ++i)
    cout << arr[i] << endl;

  cout << "3:-----" << endl;

  for(int i = 0; i < 5; ++i)
    cout << arr+i << endl;

  cout << "4:-----" << endl;
  int i = 0;
  while(i < 5){
    cout << c++ << endl;
    ++i;
  }

  int *arr2 = new int[5];
  int **arr2 = new int*[5];

  //funcion_sin_punteros(a);     // funcion sin puntero
  //cout << a << endl;          // 8
  //funcion(b);
  //funcion3(a);
  //cout << a << endl;          // 8

}

// int arr [5]; {1, 2, 3, 4, 5}; {0x000, 0x004, 0x008, 0x00c, 0x010}
// char arr2 [5]; {'a', 'b', 'c', 'd', 'e'}; {0x000, 0x001, 0x002, 0x003, 0x004}

// int a = 8; Direccion de memoria = 0x000 - 0x003
// int b = 5; Direccion de memoria = 0x004 - 0x007
// int c = 10; Direccion de memoria = 0x008 - 0x00b
// int *d = &a; Direccion de memoria = 0x00c - 0x00f
// int *e = &b; Direccion de memoria = 0x010 - 0x013
// &a;
// int *puntero = ;
// 0x01 -> 8
// 0x01 -> 5
