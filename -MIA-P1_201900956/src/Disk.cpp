//
// Created by rivaldo on 7/09/22.
//

#include "../include/Disk.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>

using namespace std;

Disk::Disk() { }

void Disk :: mkdisk(string s, string f, string u, string path){
    StructD::MBR disco;
    string pathaux = killComillas(path);
    try {
        int size = stoi(s);
        if(size <= 0){
            cout << "Error: El tamaño del disco debe ser mayor a 0" << endl;
            return;
        }
        //Tamaño de las unidades
        if (strcmp(u.c_str(), "k")){
            size = size * 1024;
        } else if ((strcmp(u.c_str(), "m") )){
            size = size * 1024 * 1024;
        } else{
            size = size * 1024 * 1024;
        }
        //Ajuste del disco
        disco.mbr_tamano = size;
        disco.mbr_fecha_creacion = time(nullptr);
        if (f == "ff"){
            disco.dsk_fit = 'F';
        } else if (f == "bf"){
            disco.dsk_fit = 'B';
        } else if (f == "wf"){
            disco.dsk_fit = 'W';
        }else{
            disco.dsk_fit = 'F';
        }
        disco.mbr_dsk_signature = rand() % 9999 + 100;

        if(validPath(pathaux) == false){
            cout << "Error: La la extensión de la ruta no es correcta" << endl;
            return;
        }
        FILE *exist = fopen(path.c_str(), "r");
        if(exist != nullptr){
            cout << "Error: El disco ya existe" << endl;
            return;
        }
        disco.mbr_partition_1 = StructD::Partition();
        disco.mbr_partition_2 = StructD::Partition();
        disco.mbr_partition_3 = StructD::Partition();
        disco.mbr_partition_4 = StructD::Partition();
        //Creacion del disco
        const char *path2 = pathaux.c_str();
        CreatDir(pathaux);
        FILE *fle;
        fle = fopen(path2, "wb+");
        fclose(fle);
        char nul = '\0';
        FILE * fileC;
        fileC = fopen(path2, "rb+");
        rewind(fileC);
        long int tam = atoi(s.c_str()) * size;
        for(int var = 0; var <(tam); var++) {
            fwrite(&nul, sizeof(nul), 1, fileC);
        }
        fclose(fileC);

        fileC = fopen(path2, "rb+");
        rewind(fileC);
        fwrite(&disco, sizeof(StructD::MBR), 1, fileC);
        fclose(fileC);

    }catch(exception  &e){
        cout << "MKDISK" <<"Error: Tamaño del disco no valido"<< endl;
    }
}

void Disk::rmdisk(string path){

}


// optiene del disco duro  --------------------------------------------------------------
string Disk :: killComillas(string path){
    char cad[500];
    strcpy(cad, path.c_str());
    int i = 0;
    int j = 0;
    if(cad[0] == '"' && cad[strlen(cad)-1] == '"'){
        while(cad[i] != '\0'){
            if(cad[i] != '"'){
                cad[j] = cad[i];
                j++;
            }
            i++;
        }
        cad[j] = '\0';
    }
    return cad;
}

bool Disk::validPath(string path){
    char spl = '/';
    int cont = 0;
    string vector[40];
    string sentencia = path;

    for(size_t p = 0, q = 0; p != sentencia.npos; p = q){
        vector[cont] = sentencia.substr(p + (p != 0), (q = sentencia.find(sentencia, p + 1)) - p - (p != 0));
        cont++;
    }
    string str = vector[cont-1];
    size_t found = str.find(".dsk");
    if(found != string::npos){
        return true;
    } else {
        return false;
    }
}

void Disk::CreatDir(string path){
    cout<<"Ruta->"<<path<<endl;
    cout << "Creando ruta de almacenaje" << endl;
    char seprador = '/';
    int contador = 0;
    string vector[40];
    string aux = path;
    for (size_t p = 0, q = 0; p!= aux.npos; p = q){
        vector[contador] = aux.substr(p + (p != 0), (q = aux.find(seprador, p + 1)) - p - (p != 0));
        contador++;
    }

    string newF = vector[0];
    contador --;
    for ( int i = 1; i < contador; i++){
        newF += seprador + vector[i];
    }
    cout << "Ruta2 ->" << newF << endl;


    char newPath[500];
    strcpy(newPath, newF.c_str());
    cout << "Ruta de almacenaje creada"<< newPath << endl;
    if(ExistC(newPath) == false){
        cout << "Ruta creada" << endl;
        CreatC(newPath);
    } else {
        cout << "Ruta de almacenaje ya existe" << endl;
    }
}

int Disk::ExistC(char path[]){
    struct stat estado;
    if(stat(path,&estado ) == -1){
        return 2;
    }else{
        return 1;
    }
}

void Disk::CreatC(char path []){
    //creando la carpeta
    char command[500] = "mkdir \"";
    strcat(command, path);
    strcat(command, "\"");

    system(command);
}
