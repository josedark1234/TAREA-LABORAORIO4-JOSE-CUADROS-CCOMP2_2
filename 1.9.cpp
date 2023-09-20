#include <iostream>

int main() {

  for(int a = 0; a < 1000; a++){
    for(int b = 0; b < 1000; b++){
      if((a+b+(1000-a-b) == 1000) && (a*a+ b*b == (1000-a-b)*(1000-a-b))){

        int c = 1000-a-b;
        if(a < b && b < c){
          std::cout << a << "+" << b << "+" << c << "= " << a+b+c << "\n"; 
          std::cout << "El producto de abc es: " << a*b*c;
        }
      }
    }

  }  
}