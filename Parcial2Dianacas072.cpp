#include <iostream>
using namespace std;

int main(){
    int numu[20], buscar;

    for (int i=0; i<20; i++)
    {
    cout << "Ingrese el numero que desea guardar: "<< endl;
    cin>>numu[i];
    }
    cout << "Ingrese el numero que desea buscar: "<< endl;
    cin>>buscar;

    for (int i=0; i<20; i++){
        if (buscar==numu[i])
        {
            cout << i << " El numero se encuentra guardado en esta posicion"<<endl;
        }
        else 
            cout << i << " El numero no se encuentra en esta posicion" << endl;
    }
    
    return 0;

}