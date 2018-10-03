#ifndef PALINDROMOS_H
#define PALINDROMOS_H
#include <iostream>
#include <string.h>
using namespace std;

class palindromos
{
    public:
        palindromos();

        void generaexacto(char frasepura[], int medida, string palabracompleta);
        bool decision (char frasepura[], int ini, int fin);

    protected:

    private:
};

#endif // PALINDROMOS_H
