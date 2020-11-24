#include <iostream>
#include <vector> 
using namespace std;

class Persona{
  private:
    int edad;
  public:
    Persona(int _edad):edad(_edad){};
    bool operator >(Persona &persona){
      return edad > persona.edad;
    };
    int get_edad(){return edad;};
};

template<class T>
ostream& operator<<(ostream& stream, std::vector<T>& vec){
  for (auto it = vec.begin(); it != vec.end(); it++){
    stream << *it << " ";
  }
  stream << endl;
}

ostream& operator<<(ostream& stream, Persona persona){
  stream << persona.get_edad();
  stream << endl;
}

template <typename T>
void print(T obj){
  cout << obj;
}

template <typename T>
bool comparar_imprimir_mayor(T obj1, T obj2){
  if (obj1 > obj2)
    print(obj1);
  else
    print(obj2);
}


int main(){
  std::vector<int> vector = {3, 2, 3, 4};
  std::vector<int> vector2 = {2, 3, 4, 5};
  comparar_imprimir_mayor(vector, vector2);
  std::vector<char> vector3 = {'a', 'c', 'd'};
  std::vector<char> vector4 = {'a', 'b', 'e'};
  comparar_imprimir_mayor(vector3, vector4);
  Persona persona1(7);
  Persona persona2(6);
  comparar_imprimir_mayor(persona1, persona2);
  int num1 = 5;
  int num2 = 4;
  comparar_imprimir_mayor(num1, num2);
}
