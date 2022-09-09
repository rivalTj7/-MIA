//
// Created by rivaldo on 8/09/22.
//

#ifndef _MIA_P1_201900956_NODO_H
#define _MIA_P1_201900956_NODO_H

#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Nodo {
public:
    Nodo();
    string nodo_type = "";
    string nodo_value = "";
    vector<Nodo> * Hojas = new vector<Nodo>();
    Nodo(string type, string value, vector<Nodo>* hoja);
    Nodo(string value);
};
#endif //_MIA_P1_201900956_NODO_H
