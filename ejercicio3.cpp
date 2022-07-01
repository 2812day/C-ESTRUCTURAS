#include <iostream>

using namespace std;

int main(){
    float milla;
    float kilometros; 
    
    cout<<"Ingrese la cantidad de Millas: \t";
    cin>>milla;
    
    kilometros = (milla * 1609);
            
    cout<<"La cantidad de kilometros es: "<<kilometros<<endl;
    
    return 0;
}s