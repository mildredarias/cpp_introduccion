// Precendecia3.cpp
// Se ilustran más ejemplos de precedencia de signos lógicos y aritméticos.
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.tutorialspoint.com/compile_cpp_online.php
#include <iostream>

using namespace std;

int main()
{
    int resultado = 0;
    bool resp;
    
    resultado = 9 * 2 - 2; 
    cout << "9 * 2 - 2 = " << resultado << endl; 
   
    resultado = 10 / 2 + 4 * 2; 
    cout << "10 / 2 + 4 * 2 = " << resultado << endl; 
   
    resultado = 2 + 8 / 2 * 5 * 2 / 2 - 5; 
    cout << "2 + 8 / 2 * 5 * 2 / 2 - 5 = " << resultado << endl; 
   
    resp = 9 < 2 < !1; 
    cout << "9 < 2 < !1 = " << resp << endl; 
   

   return 0;
}
