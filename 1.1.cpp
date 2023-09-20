#include <iostream>

int main() {
  int n;
  int suma = 0;
  std::cout<<"Ingrese un numero: ";
  std::cin>>n;

  for(int i = 1; i<n; i++){
    if(i%3==0 || i%5==0){
      std::cout<<i<<"\t";
      suma = suma + i;

    }
  }
  std::cout<<suma;
}