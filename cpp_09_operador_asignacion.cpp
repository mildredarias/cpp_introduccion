// operador_asignacion.cpp
// Este programa muestra el uso del operador de asignación
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.tutorialspoint.com/compile_cpp_online.php

#include <iostream>

using namespace std;

int main()
{
   int a, b;
   char letra; 
   bool respuesta;
   
   a = 5;
   b = 0;
   letra = 'P'; 
   respuesta = true;
   
   cout << "a = " << a << " y b = " << b << endl;
   cout << "letra = " << letra << " respuesta = " << respuesta << endl;
   
   respuesta = b;   //Equivalente a false (o)
   cout << "Asignación de una variable a otra variable = " << respuesta << endl; 
   
   return 0;
}
