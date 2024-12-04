#include<iostream>
#include<cstring>
#include"mallas.h"
#include"functmallas.h"

using namespace std;

RESULMALLA pedirMalla()
{
    Tam f, c;
    char carac;

    cout<<"\nDigite las filas, columnas y un caracter para generar la malla: ";
    cin>>f>>c;
    cin>>carac;

    RESULMALLA resultado = {f,c,carac};
    return resultado;
}