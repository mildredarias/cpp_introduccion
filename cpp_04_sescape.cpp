// sescape.cpp
// Se ilustra el uso de secuencias de escape
// 2017, Por http://about.me/carlosgbr
// Versión 1
// Compilado en https://www.tutorialspoint.com/compile_cpp_online.php//

#include <iostream>
using namespace std;

int main() 
{        
    // Representamos una pequeña lista de precios en la pantalla, para formatear la salida     
    // utilizamos solo espacios y saltos de línea    
    cout << """Lista de precios""" << endl << endl;     //Texto con entrecomillado doble no funciona con todos los compiladores    
    cout << "Producto                Existencias               Precio" << endl;     
    cout << "Pinzas                  5                         $212.00" << endl;     
    cout << "Martillo                3                         $250.00" << endl;     
    cout << "Caja de herramientas    4                         $800.00" << endl;     
    cout << "Desarmador              10                        $25.00" << endl;         

    // Representamos una pequeña lista de precios en la pantalla, para formatear la salida     
    // utilizamos secuencias de escape        

    cout << "\"Lista de precios\"" << "\n\n";   //Texto con entrecomillado doble    
    cout << "Producto \t\t" << "Existencias\t\t" << "Precio" << "\n";     
    cout << "Pinzas\t\t\t\t" << "5\t\t" << "$212.00" "\n";    
    cout << "Martillo\t\t\t" << "3\t\t" << "$250.00" "\n";     
    cout << "Caja de herramientas\t\t" << "4\t\t" << "$800.00" "\n";  
    cout << "Desarmador\t\t\t" << "10\t\t" << "$25.00" "\n"; 

    return 0;
}
