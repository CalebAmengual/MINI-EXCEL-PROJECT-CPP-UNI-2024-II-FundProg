#include<iostream>
#include<string>
#include"celda.h"
#include"funciones.h"

void CELDA::actualizarCelda(CELDA **matriz)
{
    m_valor=to_string(evaluar(m_contenido,matriz));
    m_visible = m_valor;
}