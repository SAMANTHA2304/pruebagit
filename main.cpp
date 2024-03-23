#include <iostream>
#include "archivos.h"
using namespace  std;

int main() {
    leerArchivo1("C:/Users/Usuario/Desktop/ARCHIVO.txt");
    cout<<endl;
    modificarArchivo2("C:/Users/Usuario/ARCHIVO3.txt");
    cout<<endl;
    leerArchivo1("C:/Users/Usuario/ARCHIVO3.txt");
    cout << "Fin del programa" << std::endl;
    return 0;
}
