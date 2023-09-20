#include <iostream>

int main() {

  int multiplicacion;
  int palindromo_mayor = 0;

  for(int x = 100; x < 1000; x++){
    for(int y = 100; y < 1000; y++){

      multiplicacion = x*y;

      std::string st = std::to_string(multiplicacion);
      int longitud = st.length();

      if(longitud == 6){
        if(st[0] == st[5] && st[2] == st[3] && st[1] == st[4]){

          if(palindromo_mayor < multiplicacion){
            palindromo_mayor = multiplicacion;
          }
          else{continue;}
          
        }
      else if (longitud == 5){

        if (st[0] == st[5] && st[1] == st[4]){

          if(palindromo_mayor < multiplicacion){
            palindromo_mayor = multiplicacion;
          }
          else{continue;}
          
        }
        
      }

        }
        
      }
  }
  std::cout << "\tEl mayor palindromo hecho por un número de tres digitos es: " << palindromo_mayor;
}