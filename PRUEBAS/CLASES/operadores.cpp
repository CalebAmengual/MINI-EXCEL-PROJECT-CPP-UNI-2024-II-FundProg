#include<iostream>
#include<string>
#include<cmath>
#include"celda.h"
#include"operadores.h"
#include"funciones.h"


using namespace std;

string strOPERADORES[] = {"=", "+", "-", "*", "/", "sen", "cos", "tan"};

double OPERADOR_Asignacion(string CAD, CELDA **matriz)
{
    double operando;



    return operando;
}

double OPERADOR_Adicion(string CAD, CELDA **matriz)
{
    double operando1, operando2;

    return operando1 + operando2;
}

double OPERADOR_Sustraccion(string CAD, CELDA **matriz)
{
    double operando1, operando2;

    return operando1 - operando2;
}

double OPERADOR_Multiplicacion(string CAD, CELDA **matriz)
{
    double operando1, operando2;

    return operando1 * operando2;
}

double OPERADOR_Division(string CAD, CELDA **matriz)
{
    double operando1, operando2;

    return operando1 / operando2;
}

double OPERADOR_Seno(string CAD, CELDA **matriz)
{
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

double OPERADOR_Coseno(string CAD, CELDA **matriz)
{
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

double OPERADOR_Tangente(string CAD, CELDA **matriz)
{
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

double (*fOpe[])(string, CELDA **matriz) = {&OPERADOR_Asignacion, &OPERADOR_Adicion, &OPERADOR_Sustraccion, &OPERADOR_Multiplicacion, &OPERADOR_Division, &OPERADOR_Seno, &OPERADOR_Coseno, &OPERADOR_Tangente};
