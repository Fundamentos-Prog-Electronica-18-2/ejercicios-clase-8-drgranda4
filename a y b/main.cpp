#include <iostream>

using namespace std;

int main()
{
    cout << "Resolucion de una ecuacion de primer grado" << endl;
    double a=15;
    double b=12.4;
    double resultado=0;

    if(a!=0){
        resultado= -b/a;
        cout<<"El resultado es :" <<resultado<< endl;
    }else{
    if(b!=0){
    cout<<"solucion indeterminada"<< endl;
    }else{
    cout<<"solucion indeterminada"<< endl;
    }


    }
        return 0;
}
