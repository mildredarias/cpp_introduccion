// cpp_57_funciones2.cpp 
// Este programa forma parte del tutorial de introducción al lenguaje C++
// http://ehack.info/leguaje-c-introduccion/
// Se ilustra la declaración de funciones sin parámetros
// 2018, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

//Función que presenta el deplegado de presentación
int Presentacion ()
//Presentación se encarga de desplegar un encabezado en texto simple
{
  cout << "Bienvenido, este programa te permite realizar varios cálculos" <<
  endl;
  cout <<
  "Este programa forma parte del tutorial de C++ para no informáticos" <<
  endl;
  cout << "Pudes consultarlo en http://ehack.info/leguaje-c-introduccion/" <<
  endl << endl;

  return 0;
}

//Esta función eleva "valor" al cuadrado
double ElevaCuadrado(double valor)
{
  return valor * valor;
}

int main ()
{
  double numero, cuadrado;

  //Invocamos a la función Presentacion()
  Presentacion();

  cout << "Cálculo del cuadrado de un número" << endl;
  cout << "Escribe el número que será elevado al cuadrado:";
  cin >> numero;

  //Como puedes apreciar, utilizamos ElevaCuadrado(numero)directamente en una expresión.
  cout << "El cuadrado de: " << numero << ", es: " << ElevaCuadrado(numero) << endl;

  cout << "Gracias por utilizar nuestro programa.";

  return 0;
}
