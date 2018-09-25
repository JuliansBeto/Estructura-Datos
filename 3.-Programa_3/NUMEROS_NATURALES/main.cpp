#include <iostream>
#include <stdlib.h>
#include "procedimientos.h"
using namespace std;

int main()
{
    bool bucle;
    int a,b,opcion;
    bool bucle2;
    bucle2 =true;
    cout << "bienvenido a operaciones con numeros naturales" << endl;
    cout << "introduzca los valores de a y b" << endl;
   do{
    cout << "introduzca a\n";
    cin >> a;
    cout << "introduzca b\n";
    cin >> b;
     do {
        bucle = true;
    cout << "a es: "<< a<<"\n";
    cout << "b es: "<< b<<"\n";


    cout << "1.-Sumar" << endl;
    cout << "2.-Ver la diferencia" << endl;
    cout << "3.-Ver si es cero" << endl;
    cout << "4.-Ver si es igual" << endl;
    cout << "5.-Ver el menor" << endl;
    cout << "6.-Antecesor" << endl;
    cout << "7.-Sucesor" << endl;
    cout << "8.-Cambiar a por cero" << endl;
    cout << "9.-Cambiar b por cero" << endl;
    cout << "10.-Cambiar valores A y B" << endl;
    cout << "11.-Salir" << endl;



    cin >> opcion;

    procedimientos p;


    switch (opcion){
    case 1:

        cout << "La suma de  a+b es: ";
        cout <<p.sumar(a,b)<<"\n";//aqui llamamos a la clase sumar y le pasamos parametros

   system("pause");
    system("cls");//borramos con la libreria stdlib
    break;
    case 2:
        cout <<"la resta de a-b es: ";
        cout <<p.diferencia(a,b)<<"\n";//aqui saco la diferencia primero y luego le paso atros parametros
        cout <<"la resta de b-a es: ";
        cout <<p.diferencia(b,a)<<"\n";// aqui le cambio la posision para la otra suma
   system("pause");
    system("cls");
    break;
    case 3:
      p.escero(a,b);//aqui comparamos para ver si uno es cero
    system("pause");
    system("cls");
    break;
    case 4:
      p.igual(a,b);//aqui hallamos si alguno es igual
    system("pause");
    system("cls");
    break;
    case 5:
      p.menor(a,b);//aqui vemos cual de los es menor
    system("pause");
    system("cls");
    break;
    case 6 :
      p.antecesor(a,b);//aqui busco  el antezesor del numero
    system("pause");
    system("cls");
    break;
    case 7:
      p.sucesor(a,b);//aqui busco el busco es que sigue
    system("pause");
    system("cls");
    break;
    case 8:
     cout <<"a ahora es cero\n";
    a=p.cero();//cambio un valor por cero
    system("pause");
    system("cls");
     break;
    case 9:
    cout << "b ahora es cero\n\n";
   b=p.cero();//cambio un por cero
    system("pause");
    system("cls");
    break;
    case 10:
        //declaro la variable bucle como false para que salga del primer bucle para poder asignar nuevos valores alas 2 variables
         bucle=false;
      break;
    case 11:
        // aqui declaro los dos como false para salir de los dos bucles y salir del programa
        bucle2=false;
        bucle=false;
        break;
    }
    system("cls");
    }while(bucle);
 }while (bucle2);
    return 0;
}
