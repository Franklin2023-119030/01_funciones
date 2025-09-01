#include<iostream>
using namespace std;
int iabs(int x){
    return(x<0)?-x:x;
}
int mcd(int a,int b){
    a=iabs(a);
    b=iabs(b);
    while(b){
        int r=a%b;
        a=b;
        b=r;
    }return a;
}
void simplificar(int &n,int &d){
    if(d<0){
        n=-n;
        d=-d;
    }if(n==0){
        d=1;
        return;
    }int g=mcd(n,d);
    n/=g;
    d/=g;
}
int main(){
    int n,d;
    cout<<"Ingrese el numerador:";
    cin>>n;
    cout<<"Ingrese el denominador(diferente de 0):";
    cin>>d;
    if(d==0){
        cout<<"Error:el denominador no puede ser 0.";
        return 0;
    }
    simplificar(n,d);
    cout<<"La fraccion simplificada es:"<<n<<"/"<<d<<"\n";
    return 0;
}
