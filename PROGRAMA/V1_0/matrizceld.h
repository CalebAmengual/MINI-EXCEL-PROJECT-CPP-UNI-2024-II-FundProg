#ifndef __MATRIZCELD_H__
#define __MATRIZCELD_H__

#include<iostream>
#include<string>
#include <memory>
#include"celda.h"

using namespace std;

unique_ptr<unique_ptr<CELDA[]>[]>  genMatrizDinCeldas1(const int fila, const int colu);

//void eliminarMatrizDinCeldas1(int, shared_ptr<CELDA[]>* );

#endif //__MATRIZCELD_H__