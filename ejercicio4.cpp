#include <iostream>

using namespace std;

int main(){
    int opcion;
    float milla;
    float kilometros;
    
    cout<<"\n\n MENU DE OPCIONES"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"1. Convertir Millas a Kilometros"<<endl;
    cout<<"2. Convertir Kilometros a Millas"<<endl;
    
    cout<<"\nINGRESE UNA OPCION"<<endl;
    cin>>opcion;
    
    switch (opcion)
        {
        case 1:
            cout<<"Ingrese la cantidad de Millas: \t";
            cin>>milla;
    
            kilometros = (milla * 1609);
            
            cout<<"La cantidad de kilometros es: "<<kilometros<<endl;
    
            break;
            
        case 2:
            cout<<"Ingrese la cantidad de Kilometros: \t";
            cin>>kilometros;
    
            milla = (kilometros/1609);
            
            cout<<"La cantidad de Millas es: "<<milla<<endl;
            
            break;
    }
    return 0;
}