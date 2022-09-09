//
// Created by rivaldo on 8/09/22.
//

#include "../include/nodo.h"

//Constructor
Nodo::Nodo() {
}

Nodo::Nodo(string type, string value, vector<Nodo> *hoja) {
    this->nodo_type = type;
    this->nodo_value = value;
    this->Hojas = hoja;
}

Nodo::Nodo(string value){
    this->nodo_value = value;
}
