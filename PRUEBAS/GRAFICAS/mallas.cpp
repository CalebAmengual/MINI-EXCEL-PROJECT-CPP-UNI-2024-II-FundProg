#include<iostream>
#include"mallas.h"

using namespace std;

char mallacaracter1(char caracter)
{
    return caracter;
}

void genMalla1(Tam filas = 10, Tam columnas = 10, char caracter = '*')
{
    for (auto i = 0; i < filas; i++)
    {
        for (auto j = 0; j < columnas; j++)
        {
            cout<<caracter;
        }
        cout<<endl;
    }   
}

void genMalla2(Tam cFILAS=9, Tam cCOLUMNAS=9, Tam ANCHO=16)
{
    Tam C = (ANCHO+1)*cCOLUMNAS + 1;
    Tam F = 2*cFILAS + 1;

    for (auto i = 0; i < F; i++)
    {
        for (auto j = 0; j < C; j++)
        {
            if (i%2 == 0)
            {
                if (j%(ANCHO+1) == 0)
                {
                    cout<<".";
                }else{
                    cout<<"-";
                }
            }

            if (i%2 != 0)
            {
                if (j%(ANCHO+1) == 0)
                {
                    cout<<"|";
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}

void genMalla3(Tam cFILAS=9, Tam cCOLUMNAS=9, Tam ANCHO=16, string **ptrM)
{
    Tam C = (ANCHO+1)*cCOLUMNAS + 1;
    Tam F = 2*cFILAS + 1;

    for (auto i = 0; i < F; i++)
    {
        for (auto j = 0; j < C; j++)
        {
            if (i%2 == 0)
            {
                if (j%(ANCHO+1) == 0)
                {
                    cout<<".";
                }else{
                    cout<<"-";
                }
            }

            if (i%2 != 0)
            {
                if (j%(ANCHO+1) == 0)
                {
                    cout<<"|";
                }
                if (j%(ANCHO+1) != 0)
                {
                    
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}

