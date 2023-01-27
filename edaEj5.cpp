#include <iostream>

using namespace std;

int serie();

int main() {

  serie();

  return 0;
}

int serie(){

  int num = 1;
  for(int i=0; i<10;i++){
    cout<<num<<endl;
    num++;
  }

  return num;
}