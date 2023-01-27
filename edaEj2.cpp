#include <iostream>

using namespace std;
float solicitar_y_sumar();
int main() {
  int Check = 0 ;
  while(Check == 0 )
  {
  solicitar_y_sumar();
  cout << "Quieres seguir sumando(0 si / 1 no)? " <<endl ;
  cin >> Check ;
  }

}

float solicitar_y_sumar(){
float num1,num2;
float resultado = 0;
  cout<<"Digite el primer numero : ";
  cin>>num1;
  cout<<"Digite el segundo numero : ";
  cin>>num2;

  resultado = num1 + num2;
  cout<<"La suma de los numeros es igual a: "<<resultado<<endl;
}
