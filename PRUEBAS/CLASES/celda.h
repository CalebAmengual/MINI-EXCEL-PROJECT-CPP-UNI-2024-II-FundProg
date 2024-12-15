#ifndef  __CELDA_H__
#define __CELDA_H__

#include<iostream>
#include<string>
#include"tipos.h"

using namespace std;

class CELDA
{
    public:
    CELDA();

    private:
    string m_contenido="";
    public:
    string extraerContenido(const string &m_visible);
    void establecerContenido(const string &cadena);

    private:
    string m_valor = "0";
    public:
    string extraerValor(const string &m_visible);
    void establecerValor(const string &cadena);

    private:
    string m_visible=" ";
    public:
    string extraerVisible(const string &m_visible);
    void establecerVisible(const string &cadena);



    public:
    void actualizarCelda();


    public:
    virtual ~CELDA();
};

#endif //__CELDA_H__