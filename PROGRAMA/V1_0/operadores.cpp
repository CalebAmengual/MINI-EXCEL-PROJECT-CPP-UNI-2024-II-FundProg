#include<iostream>
#include<string>
#include<cmath>
#include"celda.h"
#include"operadores.h"
#include"funciones.h"
#include"tipos.h"
#include <memory>

using namespace std;

double OPERADOR_Asignacion(string CAD, unique_ptr<unique_ptr<CELDA[]>[]> & matriz)
{
    string subcad = CAD.substr(1);
    double operando;
    if (::esNombreDeCelda(subcad))
    {
        operando = stod(matriz[::convertirCeldaAMatriz(subcad).pos[0]][::convertirCeldaAMatriz(subcad).pos[1]].extraerValor());
    }else{
        operando = stod(subcad);
    }
    return operando;
}

double OPERADOR_Adicion(string CAD, unique_ptr<unique_ptr<CELDA[]>[]> & matriz)
{
    double operando1, operando2;
    size_t pos = CAD.find('+');
    string subcad1 = CAD.substr(0, pos);
    string subcad2 = CAD.substr(pos + 1);

    if (::esNombreDeCelda(subcad1))
    {
        operando1 = stod(matriz[convertirCeldaAMatriz(subcad1).pos[0]][convertirCeldaAMatriz(subcad1).pos[1]].extraerValor());
        if (esNombreDeCelda(subcad2))
            {
                operando2 = stod(matriz[convertirCeldaAMatriz(subcad2).pos[0]][convertirCeldaAMatriz(subcad2).pos[1]].extraerValor());
            }else{
                operando2 = stod(subcad2);
            }
    }else{
        operando1 = stod(subcad1);
        if (esNombreDeCelda(subcad2))
            {
                operando2 = stod(matriz[convertirCeldaAMatriz(subcad2).pos[0]][convertirCeldaAMatriz(subcad2).pos[1]].extraerValor());
            }else{
                operando2 = stod(subcad2);
            }
    }

    return operando1 + operando2;
}

double OPERADOR_Sustraccion(string CAD, unique_ptr<unique_ptr<CELDA[]>[]> & matriz)
{
    double operando1, operando2;
    size_t pos = CAD.find('-');
    string subcad1 = CAD.substr(0, pos);
    string subcad2 = CAD.substr(pos + 1);

    if (esNombreDeCelda(subcad1))
    {
        operando1 = stod(matriz[convertirCeldaAMatriz(subcad1).pos[0]][convertirCeldaAMatriz(subcad1).pos[1]].extraerValor());
        if (esNombreDeCelda(subcad2))
            {
                operando2 = stod(matriz[convertirCeldaAMatriz(subcad2).pos[0]][convertirCeldaAMatriz(subcad2).pos[1]].extraerValor());
            }else{
                operando2 = stod(subcad2);
            }
    }else{
        operando1 = stod(subcad1);
        if (esNombreDeCelda(subcad2))
            {
                operando2 = stod(matriz[convertirCeldaAMatriz(subcad2).pos[0]][convertirCeldaAMatriz(subcad2).pos[1]].extraerValor());
            }else{
                operando2 = stod(subcad2);
            }
    }

    return operando1 - operando2;
}

double OPERADOR_Multiplicacion(string CAD, unique_ptr<unique_ptr<CELDA[]>[]> & matriz)
{
    double operando1, operando2;
    size_t pos = CAD.find('*');
    string subcad1 = CAD.substr(0, pos);
    string subcad2 = CAD.substr(pos + 1);

    if (esNombreDeCelda(subcad1))
    {
        operando1 = stod(matriz[convertirCeldaAMatriz(subcad1).pos[0]][convertirCeldaAMatriz(subcad1).pos[1]].extraerValor());
        if (esNombreDeCelda(subcad2))
            {
                operando2 = stod(matriz[convertirCeldaAMatriz(subcad2).pos[0]][convertirCeldaAMatriz(subcad2).pos[1]].extraerValor());
            }else{
                operando2 = stod(subcad2);
            }
    }else{
        operando1 = stod(subcad1);
        if (esNombreDeCelda(subcad2))
            {
                operando2 = stod(matriz[convertirCeldaAMatriz(subcad2).pos[0]][convertirCeldaAMatriz(subcad2).pos[1]].extraerValor());
            }else{
                operando2 = stod(subcad2);
            }
    }

    return operando1 * operando2;
}

double OPERADOR_Division(string CAD, unique_ptr<unique_ptr<CELDA[]>[]> & matriz)
{
    double operando1, operando2;
    size_t pos = CAD.find('/');
    string subcad1 = CAD.substr(0, pos);
    string subcad2 = CAD.substr(pos + 1);

    if (esNombreDeCelda(subcad1))
    {
        operando1 = stod(matriz[convertirCeldaAMatriz(subcad1).pos[0]][convertirCeldaAMatriz(subcad1).pos[1]].extraerValor());
        if (esNombreDeCelda(subcad2))
            {
                operando2 = stod(matriz[convertirCeldaAMatriz(subcad2).pos[0]][convertirCeldaAMatriz(subcad2).pos[1]].extraerValor());
            }else{
                operando2 = stod(subcad2);
            }
    }else{
        operando1 = stod(subcad1);
        if (esNombreDeCelda(subcad2))
            {
                operando2 = stod(matriz[convertirCeldaAMatriz(subcad2).pos[0]][convertirCeldaAMatriz(subcad2).pos[1]].extraerValor());
            }else{
                operando2 = stod(subcad2);
            }
    }

    return operando1 / operando2;
}

double OPERADOR_Seno(string CAD, unique_ptr<unique_ptr<CELDA[]>[]> & matriz)
{
    size_t longitud_strop = 4;
    CAD = CAD.substr(longitud_strop, CAD.length() - (longitud_strop+1));
    double operando;
    if (!existeOperador(CAD))
    {
        if (esNombreDeCelda(CAD))
        {
            operando = stod(matriz[convertirCeldaAMatriz(CAD).pos[0]][convertirCeldaAMatriz(CAD).pos[1]].extraerValor());

        }else{
            operando = stod(CAD);
        }
        return sin(operando);
    }else{
        return sin(evaluar(CAD,matriz));
    }
}

double OPERADOR_Coseno(string CAD, unique_ptr<unique_ptr<CELDA[]>[]> & matriz)
{
    size_t longitud_strop = 4;
    CAD = CAD.substr(longitud_strop, CAD.length() - (longitud_strop+1));
    double operando;
    if (!existeOperador(CAD))
    {
        if (esNombreDeCelda(CAD))
        {
            operando = stod(matriz[convertirCeldaAMatriz(CAD).pos[0]][convertirCeldaAMatriz(CAD).pos[1]].extraerValor());

        }else{
            operando = stod(CAD);
        }
        return cos(operando);
    }else{
        return cos(evaluar(CAD,matriz));
    }
}

double OPERADOR_Tangente(string CAD, unique_ptr<unique_ptr<CELDA[]>[]> & matriz)
{
    size_t longitud_strop = 4;
    CAD = CAD.substr(longitud_strop, CAD.length() - (longitud_strop+1));
    double operando;
    if (!existeOperador(CAD))
    {
        if (esNombreDeCelda(CAD))
        {
            operando = stod(matriz[convertirCeldaAMatriz(CAD).pos[0]][convertirCeldaAMatriz(CAD).pos[1]].extraerValor());

        }else{
            operando = stod(CAD);
        }
        return tan(operando);
    }else{
        return tan(evaluar(CAD,matriz));
    }
}

string operarCadena(const CAD_OBJETIVO cadena, unique_ptr<unique_ptr<CELDA[]>[]> & matriz)
{
    double (*fOpe[8])(string, unique_ptr<unique_ptr<CELDA[]>[]> & matriz) = {&::OPERADOR_Asignacion, &::OPERADOR_Adicion, &::OPERADOR_Sustraccion, &::OPERADOR_Multiplicacion, &::OPERADOR_Division, &OPERADOR_Seno, &::OPERADOR_Coseno, &::OPERADOR_Tangente};
    string strOPERADORES[] = {"=", "+", "-", "*", "/", "sen", "cos", "tan"};
    int i=0;
    for (string ope : strOPERADORES)
    {
        if (cadena.c_operador == ope)
        {
            string nueva_subcad = to_string(fOpe[i](cadena.cad, matriz));
            return nueva_subcad;
        }
        i++;
    }
}