#include <iostream>

using namespace std;

int numero_par_o_impar();

int main() {
  int Check = 0 ;
  while(Check==0)
  {
      numero_par_o_impar();
      cout << "Quieres seguir determinando si es par o impar? (0 si/1 no)" <<endl ;
      cin >> Check ;
  }


  return 0;
}

int numero_par_o_impar()
{
  int num1;
  cout<<"Ingrese un numero: ";
  cin>>num1;
  if(num1%2==0)
  {
    cout<<"El numero "<<num1<<" es par." <<endl;
  }else{
    cout<<"El numero "<<num1<<" es impar."<<endl;
  }
return num1;
}
