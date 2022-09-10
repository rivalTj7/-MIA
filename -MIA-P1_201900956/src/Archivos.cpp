//
// Created by rivaldo on 8/09/22.
//

#include "../include/Archivos.h"
//Parcer

//Variables globales
extern Nodo * raiz;

void Archivos::Archivo() {
}

//Crear arbol de archivos
void Archivos::Recorrer(vector<Nodo> * Hojas){
    Disk disco;
    if (raiz->nodo_type == "mkdisk"){
        string s = "";
        string f = "";
        string u = "";
        string path = "";
        cout << "mkdisk" << endl;
        for ( int i = 0; i < raiz->Hojas->size(); i++){
            if(raiz->Hojas->at(i).nodo_type == "-s") {
                s = raiz->Hojas->at(i).nodo_value;
            }else if(raiz->Hojas->at(i).nodo_type == "-f") {
                f = raiz->Hojas->at(i).nodo_value;
            }else if(raiz->Hojas->at(i).nodo_type == "-u") {
                u = raiz->Hojas->at(i).nodo_value;
            }else if(raiz->Hojas->at(i).nodo_type == "-path") {
                path = raiz->Hojas->at(i).nodo_value;
            }
        }
        //Mandar a crear disco
        disco.mkdisk(s, f, u, path);
    }else if(raiz->nodo_type == "rmdisk") {
        string path = "";
        cout << "rmdisk................ . . .. . . . . . .. . " << endl;
        path = raiz->nodo_value;
        disco.rmdisk(path);
    }
    else if(raiz->nodo_type == "fdisk"){
        cout << "fdisk .................... . . . . . . . " << endl;
        string size = "";
        string unit = "";
        string path = "";
        string type = "";
        string fit = "";
        string delete_ = "";
        string name = "";
        string add = "";
        for ( int i = 0; i < raiz->Hojas->size(); i++){
            if(raiz->Hojas->at(i).nodo_type == "-s") {
                size = raiz->Hojas->at(i).nodo_value;
            }else if(raiz->Hojas->at(i).nodo_type == "-u") {
                unit = raiz->Hojas->at(i).nodo_value;
            }else if(raiz->Hojas->at(i).nodo_type == "-path") {
                path = raiz->Hojas->at(i).nodo_value;
            }else if(raiz->Hojas->at(i).nodo_type == "-type") {
                type = raiz->Hojas->at(i).nodo_value;
            }else if(raiz->Hojas->at(i).nodo_type == "-f") {
                fit = raiz->Hojas->at(i).nodo_value;
            }else if(raiz->Hojas->at(i).nodo_type == "-delete") {
                delete_ = raiz->Hojas->at(i).nodo_value;
            }else if(raiz->Hojas->at(i).nodo_type == "-name") {
                name = raiz->Hojas->at(i).nodo_value;
            }else if(raiz->Hojas->at(i).nodo_type == "-add") {
                add = raiz->Hojas->at(i).nodo_value;
            }
        }
        disco.fdisk(size, unit, path, type, fit, delete_, name, add);
    }else if(raiz->nodo_type == "rep"){
        cout << "rep" << endl;
        string id = "";
        string name = "";
        string path = "";
        string ruta = "";
        for ( int i = 0; i < raiz->Hojas->size(); i++){
             if(raiz->Hojas->at(i).nodo_type == "-name") {
                 if (raiz->Hojas->at(i).nodo_value == "mbr") {
                        cout << "Create Reporte MBR................. . . . . . . ." << endl;

                 }
             }
        }
        disco.Rep(id, name, path);
    }else{
        cout << "Comando Erroneo" << endl;
    }
}

//Menu Principal
void Archivos::menuPrincipal(){
    string opcion;
    bool repetir = true;
    string entrada;
    do{
        system("clear");
        cout << "************* Menu *************" << endl;
        cout << "* >> Ingrese un Comando:       *" << endl;
        cout << "* >> exit para salir           *" << endl;
        cout << "********************************" << endl;
        cout << " >> ";
        getline(cin, opcion);
        if(opcion == "exit"){
            repetir = false;
        }else{
            //Enrutar la opción
            entrada = opcion;
            YY_BUFFER_STATE bf = yy_scan_string(entrada.c_str());
            if(yyparse() == 0) {
                cout << "Analisis realizado con exito" << endl;
                Recorrer(raiz->Hojas);
            } else {
                cout << "Error en el analisis" << endl;
            }
        }
        cout << "Presione enter para continuar...";
        cin.get();
    }while(repetir);
}