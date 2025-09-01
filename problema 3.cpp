#include<iostream>
using namespace std;

void numero(int n, int &suma, int &mayor){
    suma=0;
    mayor=0;
    while(n>0){
        int digitos=n%10;
        suma+=digitos;
        if(digitos>mayor){
		mayor=digitos; 
		}
        n/=10;
    }
}

int main(){
    int n, suma, mayor;
    cout<<"Ingrese un numero entero positivo: ";
    cin>>n;
    numero(n, suma, mayor);
    cout<<"La suma de digitos es: "<<suma<<endl;
    cout<<"El mayor digito es: "<<mayor<<endl;
    return 0;
}
