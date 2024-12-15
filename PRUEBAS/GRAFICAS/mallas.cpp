#include<iostream>
#include"mallas.h"
#include"functmallas.h"

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

void genMalla3(Tam cFILAS=9, Tam cCOLUMNAS=9, Tam ANCHO=16, string **ptrM =nullptr)
{
    
    Tam C = (ANCHO+1)*(cCOLUMNAS+1) + 1;
    Tam F = 2*(cFILAS+1) + 1;

    int filaMat = 0;
    int coluMat = 0;

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
                if (j%(ANCHO+1) != 0){
                if(j==1){
                    cout<<ceStringFormat(to_string(filaMat+1),ANCHO);
                    coluMat++;
                    j +=ANCHO-1;
                }
                else{
                    cout<<ceStringFormat(ptrM[filaMat][coluMat-1],ANCHO);
                    coluMat++;
                    j += ANCHO-1;
                }   
                }
                
            }
        }
        coluMat = 0;
        if (i%2==1)
        {
            filaMat++;
        }
        cout<<endl;
    }
}


