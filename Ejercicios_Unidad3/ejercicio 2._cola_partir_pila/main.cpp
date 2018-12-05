#include <iostream>
#include "Pila.h"
#include "Cola.h"
#include "stdlib.h"

using namespace std;

int a,b,c,d,e;

void pila()
{

    Pila p1;

    p1.insertar(a);
    p1.insertar(b);
    p1.insertar(c);
    p1.insertar(d);
    p1.insertar(e);

	cout<<"\n*****cima de la pila*****\n\n";
    cout<<"\t"<<p1.mostrar()<<"\n\n";
    cout<<"\t"<<p1.mostrar()<<"\n\n";
    cout<<"\t"<<p1.mostrar()<<"\n\n";
    cout<<"\t"<<p1.mostrar()<<"\n\n";
    cout<<"\t"<<p1.mostrar()<<"\n\n";
    cout<<"\n*****base de la pila*****\n\n";


}

void cola()
{
    Cola c1;

    c1.insertar(a);
    c1.insertar(b);
    c1.insertar(c);
    c1.insertar(d);
    c1.insertar(e);

	cout<<"\n\nInicio->\t";
    cout<<c1.mostrar()<<"\t";
    cout<<c1.mostrar()<<"\t";
    cout<<c1.mostrar()<<"\t";
    cout<<c1.mostrar()<<"\t";
    cout<<c1.mostrar()<<"\t";
    cout<<"\t<-Fin\n\n";


}


int main()
{
	cout<<"ingrese 5 valores numericos enteros y al finalizar, presione cualquier tecla para procesar:\n";
    cin>>a>>b>>c>>d>>e;
    system("pause");
    system("cls");
	cout<<"Los datos:\t"<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<"\t"<<e<<"\t"<<"fueron apilados:\n";
    pila();
    cout<<"\n De la misma manera se encolaron a partir del ultimo numero apilado ---> "<<(e)<<":\n";
	cola();

    return 0;
}

