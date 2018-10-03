#include <iostream>
#include "procedimiento.h"
#include <stdlib.h>
using namespace std;

int main()
{
    procedimiento p;
    int b;

    cout << "Introduzca el numero en base 10" << endl;
    cin >> b;
    cout <<"El numero de binario\n";
    p.proceso(b);//aqui llamo a la funcion
    return 0;
}
