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
    if(path != ""){
        FILE * del;
        if(validPath(path) == false){
            cout << "Error: La la extensión de la ruta no es correcta" << endl;
            return;
        }
        del = fopen(path.c_str(), "r");
        if(del != nullptr){
            fclose(del);
            remove(path.c_str());
            cout << "Disco eliminado" << endl;
        }else{
            cout << "Error: El disco no existe" << endl;
        }

    }else{
        cout << "Error: No se ha ingresado la ruta del disco" << endl;
    }
}

void Disk::fdisk(string s, string u, string p, string t, string f, string d, string n, string a){
        cout << "Crear Partición .................... . . . . " << endl;
        try{
            int size = stoi(s);
            if( size <= 0){
                throw runtime_error("El tamaño de la partición debe ser mayor a 0");
            }
            if (strcmp(u.c_str(), "b")){
                size = size * 1024;
            } else if ((strcmp(u.c_str(), "k") )){
                size = size * 1024 * 1024;
            }else if((strcmp(u.c_str(), "m") )) {
                size = size * 1024 * 1024 * 1024;
            }else{
                size = size;
            }
            StructD::MBR disco;
            FILE *file = fopen(p.c_str(), "rb+");
            if(file!= NULL){
                rewind(file);
                fread(&disco, sizeof(disco), 1, file);
            }else{
                throw runtime_error("El disco no existe");
            }
            fclose(file);

            if (t == "p"){
                cout << "Crear Partición Primaria .................... . . . . " << endl;
                if(validName(p, n) == 1){
                    throw runtime_error("El nombre de la partición ya existe");
                }else{
                    cout << "Creando Particion Primario" << endl;
                    createPrimariKey(p, t, f, size, n);
                }
            }else if (t == "e"){
                cout << "Crear Partición Extendida .................... . . . . " << endl;

            }else if (t == "l"){
                cout << "Crear Partición Lógica .................... . . . . " << endl;
            }


        }catch (exception &e){
            cout << "Error: " << e.what() << endl;
        }
}

void Disk::createPrimariKey(string path, string type, string fit, int add, string name){
    StructD::MBR disco;
    //Validar el tamaño de la particion
    if (add >= disco.mbr_tamano){
        throw runtime_error("El tamaño de la partición es mayor al tamaño del disco");
    }
}

void Disk::Rep(string id, string name, string path){
    cout << "Reporte .................... . . . . " << endl;
    ofstream file;
    file.open("graph.dot",ios::out);
    if(!file.fail()){
        file << "digraph Grafica{\nbgcolor=deepskyblue;\n";
        file << "graph [ratio=fill];\n";
        file << "node [label=\"\\N\", fontsize=15, shape=plaintext];";
        file << "graph [bb=\"0,0,352,154\"];";
        file << "arset [label=<\n";

        //double size_disk = mbr_disk.mbr_tamano;
        //double size_free_disk = mbr_disk.mbr_tamano_available;



        file << "</TR></TABLE>>,];}";
        file.close();
    }
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
    if(ExistC(newPath) == 2){
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

int Disk::validName(string path, string name){
    char ruta[500];
    char nombre[16];
    strcpy(ruta, path.c_str());
    strcpy(nombre, name.c_str());

    if(ExistC(ruta) == 1){
        FILE *file = fopen(ruta, "rb+");
        rewind(file);

        StructD::MBR mbr;

        fread(&mbr, sizeof(mbr), 1, file);
        vector<StructD::Partition> ebr = Partittion(mbr);
        if(file != nullptr){
            for (int i = 0; i < 4; i++){
                if(ebr[i].part_status == 'V'){
                    if(strcmp(ebr[i].part_name, nombre) == 0){
                        return 1;
                    }
                }
            }
        }
        fclose(file);
    }
    return 0;
}

vector<StructD::Partition> Disk::Partittion(StructD:: MBR mbr){
    vector<StructD::Partition> part;
    part.push_back(mbr.mbr_partition_1);
    part.push_back(mbr.mbr_partition_2);
    part.push_back(mbr.mbr_partition_3);
    part.push_back(mbr.mbr_partition_4);
    return part;
}