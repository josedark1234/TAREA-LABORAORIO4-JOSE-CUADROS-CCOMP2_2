#include <iostream>

int main() {
  int cuadrado = 1;
  int suma = 1;
  int suma2;
  int fina;
  
  for(int i = 1; i<=100; i++){
    cuadrado = cuadrado + i * i;
  }
  std::cout<<cuadrado-1<<"\t";

  for(int j = 1; j<=100; j++){
    suma = suma + j;
  }
  suma2 = (suma-1)*(suma-1);
  std::cout<<suma2<<"\t";

  fina = suma2 - cuadrado+1;
  std::cout<<fina;
}

  