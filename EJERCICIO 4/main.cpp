#include <iostream>
#include<string>

using namespace std;

int main()
{
    string nombre;
    string apellido;
    int edad;

    cout<<"Ingrese su nombre porfavor"<< endl;
    cin>>nombre;
    cout<<"Ingrese su apellido porfavor"<< endl;
    cin>>apellido;
    cout<<"Ingrese su edad porfavor"<< endl;
    cin>>edad;

    if(edad<10){
        cout << nombre<<" "<<apellido<<endl
        <<"Con" << edad<<" "<<a�os<< endl
        <<"Pertenece a B�sica";

    }else{
        if((edad>=10)&&(edad<14)){
          cout << nombre<<" "<<apellido<<endl
        <<"tiene" <<edad<<" "<<a�os<< endl
       cout <<"Pertenece a B�sica Superior";
        }
    }else{
        if(edad>=14)&&(edad<=17)){
          cout << nombre<<" "<<apellido<<"tiene"<<edad endl;
        <<"Pertenece al Bachillerato unificacdo";

        }
    return 0;
}
