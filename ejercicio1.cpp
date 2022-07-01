#include <iostream>

using namespace std;
//Calcule la longitud de una circunferencia de radio conocido.
int main(int argc, char** argv){
    float Longitud;
    float radio;
    float pi=3.1416;

    cout<<"Ingrese el radio";
    cin>>radio;

    Longitud=radio*pi;
    
    cout<<"La longitud de la circunferencia es: "<<Longitud;


    return 0;
} // namespace std;