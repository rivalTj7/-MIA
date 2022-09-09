//
// Created by rivaldo on 8/09/22.
//

#ifndef _MIA_P1_201900956_ARCHIVOS_H
#define _MIA_P1_201900956_ARCHIVOS_H

#include <iostream>
#include <sys/stat.h>
#include <fstream>
#include <list>
#include <string>
#include <vector>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>

#include "./include/nodo.h"
#include "./Analyzer/parser.h"
#include "./Analyzer/scanner.h"
#include "./include/Disk.h"

using namespace std;

class Archivos{
public:
    void Archivo();
    void menuPrincipal();
    void Recorrer(vector<Nodo> * Hojas);
    void Ejecutar();
};

#endif //_MIA_P1_201900956_ARCHIVOS_H
