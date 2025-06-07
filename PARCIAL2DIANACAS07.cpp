#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "Ingrese 2 numeros que desea comparar: "<<endl;
    cout << "Ingrese el primer numero:  "<<endl;
    cin>>num1;
    cout<< "Ingrese el segundo numero: "<<endl;
    cin>>num2;

    if (num1>num2)
    {
        cout<< num1 << " Es mayor que " << num2<<endl;
    }
    else if (num1==num2)
    {
        cout<< num1 << " Es igual que " << num2 <<endl;
    } 
    else 
    {
        cout << num2 << " Es mayor que "<< num1 <<endl;
    }
    
    return 0;
}