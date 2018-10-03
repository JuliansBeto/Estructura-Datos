#include <iostream>
#include <string>
#include "Billetes.h"

using namespace std;

int main()
{
    //Programa Numero 3
    //Julian Humberto Herrera Rivero
    //Este programa hace el proceso de venta y pago del producto y da el cambio en cierta cantidad de billetes
    int compra, pago, cam;
    Billetes b;
    cout << "PROGRAMA NUMERO 3" << endl;
    cout << "Inserte la precio de la compra: $";
    cin >> compra;//Aqui se solicita el precio total de la compra
    cout << "\nInserte el monto de pago: $";
    cin >> pago;//Aqui se solicita el pago para saldar la compra
    cam = pago - compra;//Se realiza una resta para determinar el cambio que se le debe entregar al cliente
    while (cam <= 0)//Este While esta en dado caso de el pago no pueda saldar el monto total de la compra
    {
        cout << "\nEl pago debe ser mayor que la compra, inserte el pago nuevamente: $";
        cin >> pago;
        cam = pago - compra;
    }
    cout << "Su cambio es: " << cam << endl << endl;
    b.Cambio(cam);//Aqui se llama la funcion billetes

    return 0;
}
