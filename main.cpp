#include <iostream>
#include "lib.h"

using namespace std;

int main(){
   char b=0;
   cin >> b;
   char c=b-32;
   char d=b+32;
   if (lettere(b)==true) {
       if(b>='a') cout << c ;
       else cout << d;
   }else cout << "errore";
  return 0;
}
