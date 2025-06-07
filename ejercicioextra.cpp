#include <iostream>
using namespace std;

int main()
{
    string nombre;
    int codigo[6], que, nota[9], promedio=0, suma=0, tru=2, opci=0;

    cout << "Inserte su nombre: "<< endl;
    cin>> nombre;
    cout<< "Inserte su codigo: "<< endl;
    cin>> codigo[6];

    cout << "Menu de opciones" <<endl;
    cout << "1) Agregar nota" <<endl;
    cout << "2) Consultar notas" <<endl;
    cout << "3) Calcular promedio" <<endl;
    cout << "4) Salir" <<endl;
    cin >> que;

    while (tru!=4)
    {
    switch(que)
    {
    case 1:
        for (int i=0; i<9; i++){ 
        cout<<"Agregar nota: "<< endl;
        cin>> nota [i];
        }
    break;

    case 2:
        cout<<"Consultar todas las notas: "<<endl;
        for (int i=0; i<9; i++){
            cout<<nota [i];
        }
    break;

    case 3:
        cout<<"Calcular promedio: "<<endl;
        for (int i=0; i<9; i++){
        suma = nota[i] + suma;
        }
        promedio= suma/9;
        cout<< "El promedio es: "<< promedio <<endl;
    break;

    case 4:
        cout<<"Desea salir? (ingrese 4 para salir)"<<endl;
        cin>>opci;
        tru==opci;
    break;
    }
    }

    return 0;
}
