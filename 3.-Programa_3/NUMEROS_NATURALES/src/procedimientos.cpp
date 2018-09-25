#include "procedimientos.h"

procedimientos::procedimientos()
{
    //ctor
}

int procedimientos::sumar (int a,int b){
return a+b;//retornamos una suma
};
int procedimientos::diferencia (int a, int b){
return a-b;//retornamos una resta
};
void procedimientos::escero(int a,int b){
    if (a==0){ // aqui comparamos si a es igual a cero
       cout << "a es igual a cero  \n";
        };
    if (b==0){ // aqui comparamos si b es igual a cero

        cout <<"b es igual a cero \n";
    };
    if ((a&&b)!=0){ // aqui vemos si los dos son cero

        cout << "ninguno es cero \n";
}

};
void procedimientos::igual (int a,int b){
//aqui allo si son iguales para que me arroje un mensaje de son iguales de otro modo me manda otro mensaje de desigualdad

if (a==b){

cout << "si son iguales \n";

}else {

cout << "no son iguales \n";

}
};
void procedimientos::menor (int a,int b){
//vemos si alguno es menor
if (a < b){

    cout << "a es menor que b \n";
}else {
cout << "a es menor que b \n";
}
};
void procedimientos::antecesor(int a, int b){

cout << "el antecesor de a es : "<< a-1<<"\n";//le quito uno y asi le consigo el antesesor
cout << "el antecesor de b es : "<< b-1<<"\n";//le quito uno b para el ancesor
};
void procedimientos::sucesor (int a,int b){
cout <<"el sucesor de a es : "<<a+1<<"\n";//para allar el suscesor solo le sumo 1
cout <<"el sucesor de b es : "<<b+1<<"\n";

};

