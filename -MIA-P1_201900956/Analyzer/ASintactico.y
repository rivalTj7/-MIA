
%{

    #include "./Analyzer/scanner.h"
    #include "../include/nodo.h"

    #include <iostream>
    #include <list>
    #include <string>


    using namespace std;
    extern int yylineno;
    extern char *yytext; //Recuperar el texto
    extern int yyfila;  //Recuperar la linea
    extern int yycolum; //Recuperar la columna

    //Variables globales
    Nodo* raiz = nullptr;

    //Variables
    string F = "ff", U = "m", S = "", D="", A= "";
    string T = "", U2 = "", F2 = "", DEl = "", NAM = "", ADD = "";
    string NAMREP = "";

    int yyerror(const char* mens)
    {
        std::cout << mens <<" "<<yytext<< std::endl;
        return 0;
    }
%}

%define parse.error verbose
%locations

%union{
    char TEXT [256];
    class  Nodo* Nodo_tmp;
}

//Tokens
%token<TEXT> coment
%token<TEXT> TK_Size
%token<TEXT> TK_Mkdisk
%token<TEXT> TK_F
%token<TEXT> TK_U
%token<TEXT> TK_Path
%token<TEXT> TK_Rmdisk
%token<TEXT> TK_Bf
%token<TEXT> TK_Ff
%token<TEXT> TK_Wf
%token<TEXT> TK_K
%token<TEXT> TK_M
%token<TEXT> TK_B
%token<TEXT> TK_Fdisk
%token<TEXT> TK_Type
%token<TEXT> TK_Delete
%token<TEXT> TK_Name
%token<TEXT> TK_Add
%token<TEXT> TK_Mount
%token<TEXT> TK_Unmount
%token<TEXT> TK_Id
%token<TEXT> TK_Mkfs
%token<TEXT> TK_Fs
%token<TEXT> TK_Fast
%token<TEXT> TK_Full
%token<TEXT> TK_2fs
%token<TEXT> TK_3fs
%token<TEXT> TK_Login
%token<TEXT> TK_Logout
%token<TEXT> TK_Mkgrp
%token<TEXT> TK_Rmgrp
%token<TEXT> TK_Mkusr
%token<TEXT> TK_Usr
%token<TEXT> TK_Pwd
%token<TEXT> TK_Grp
%token<TEXT> TK_Rmusr
%token<TEXT> TK_Chmod
%token<TEXT> TK_Ugo
%token<TEXT> TK_R
%token<TEXT> TK_Mkfile
%token<TEXT> TK_Cont
%token<TEXT> TK_Cat
%token<TEXT> TK_File
%token<TEXT> TK_Rem
%token<TEXT> TK_Edit
%token<TEXT> TK_Ren
%token<TEXT> TK_Mkdir
%token<TEXT> TK_P
%token<TEXT> TK_Cp
%token<TEXT> TK_Dest
%token<TEXT> TK_Mv
%token<TEXT> TK_Find
%token<TEXT> TK_Chown
%token<TEXT> TK_Chgrp
%token<TEXT> TK_Pause
%token<TEXT> TK_E
%token<TEXT> TK_L
%token<TEXT> TK_Rep
%token<TEXT> TK_Ruta
%token<TEXT> TK_Mbr
%token<TEXT> TK_Disk
%token<TEXT> TK_Inode
%token<TEXT> TK_Journaling
%token<TEXT> TK_Block
%token<TEXT> TK_Bm_Inode
%token<TEXT> TK_Bm_Block
%token<TEXT> TK_Tree
%token<TEXT> TK_Sb
%token<TEXT> TK_Ls
%token<TEXT> TK_Exec
%token<TEXT> TK_Punto
%token<TEXT> TK_Menor
%token<TEXT> TK_Mayor
%token<TEXT> TK_CorA
%token<TEXT> TK_CorC
%token<TEXT> TK_PuntoC
%token<TEXT> TK_Pot
%token<TEXT> TK_Coma
%token<TEXT> TK_ParA
%token<TEXT> TK_ParC
%token<TEXT> TK_LLaveA
%token<TEXT> TK_LLaveC
%token<TEXT> TK_Suma
%token<TEXT> TK_Menos
%token<TEXT> TK_Por
%token<TEXT> TK_Igual
%token<TEXT> TK_Dolar
%token<TEXT> TK_DosPuntos
%token<TEXT> TK_Entero
%token<TEXT> TK_Cadena
%token<TEXT> TK_Identificador
%token<TEXT> TK_Caracter
%token<TEXT> Tk_Ruta
%token<TEXT> TK_RutaC
%token<TEXT> TK_Name2
%token<TEXT> TK_Comentario
%token<TEXT> TK_BestFit
%token<TEXT> TK_FirstFit
%token<TEXT> TK_WorstFit
%token<TEXT> TK_Type2

//NO Terminales
%type<TEXT> UNIDAD DIRECCION AJUSTE
%type<Nodo_tmp> INICIO
%type<Nodo_tmp> LCMD COMANDOS
%type<Nodo_tmp> MKDISK OP_MKDISK LOP_MKDISK
%type<Nodo_tmp> RMDISK
%type<Nodo_tmp> FDISK OP_FDISK LOP_FDISK TYPE_PARTITION UNIDAD_2 DELETE AJUSTE_2 NAME
%type<Nodo_tmp> MOUNT OP_MOUNT LOP_MOUNT
%type<Nodo_tmp> UNMOUNT
%type<Nodo_tmp> MKFS OP_MKFS LOP_MKFS TYPE_FORMAT
%type<Nodo_tmp> EXEC
%type<Nodo_tmp> PAUSE

//Precedens..
%left suma menos
%left multi division
%left potencia

%start INICIO
%%

INICIO          : LCMD {
			        cout << "INICIO" << endl;
		        };

LCMD            : LCMD COMANDOS { }
                | COMANDOS { };

COMANDOS        : MKDISK {raiz = $1;}
                | RMDISK { raiz = $1;}
                | FDISK { raiz = $1;}
                | MOUNT { raiz = $1;}
                | UNMOUNT { raiz = $1;}
                | MKFS { raiz = $1;}
                | EXEC { raiz = $1;}
                | PAUSE { raiz = $1;}
                | REP { raiz = $1;};

                //Crear Administración de Usuarios y Grupos:

// -------------------- MKDISK --------------------
MKDISK          : TK_Mkdisk OP_MKDISK {
			        $$ = new Nodo($1,$1,$2->Hojas);
		        };

OP_MKDISK       : OP_MKDISK LOP_MKDISK {
			        $$ = $1;
			        $$->Hojas->push_back(*$2);
		        }
                | LOP_MKDISK {
                	$$->Hojas->push_back(*$1);
                };

LOP_MKDISK      : TK_Size TK_Igual TK_Entero {
			        $$ = (new Nodo($1,$3,new vector<Nodo>()));
		        }
                | TK_U TK_Igual UNIDAD {
                	$$ = (new Nodo($1,U,new vector<Nodo>()));
                }
                | TK_Path TK_Igual DIRECCION {
                	$$ = (new Nodo($1,D,new vector<Nodo>()));
                }
                | TK_F TK_Igual AJUSTE {
			        $$ = (new Nodo($1,A,new vector<Nodo>()));
                };

UNIDAD          : TK_K {
                    U = $1;
                }
                | TK_M {
                    U = $1;
                }

DIRECCION       : TK_Ruta {
                    D = $1;
                }
                | TK_RutaC {
                    D = $1;
                }
                | TK_Cadena {
                    D = $1;
                };

AJUSTE          : TK_Bf {
                    A = $1;
                }
                | TK_Wf {
                    A = $1;
                }
                | TK_Ff {
                    A = $1;
                };

// -------------------- RMDISK --------------------
RMDISK         	: TK_Rmdisk TK_Path TK_Igual DIRECCION {
                     $$ = new Nodo($1,D,new vector<Nodo>());
                };

// -------------------- FDISK --------------------
FDISK	  	    : TK_Fdisk OP_FDISK {
                    $$ = new Nodo($1,$1,$2->Hojas);
                };

OP_FDISK	    : OP_FDISK LOP_FDISK {
                    $$ = $1;
                    $$->Hojas->push_back(*$2);
                }
                | LOP_FDISK {
                    $$->Hojas->push_back(*$1);
                };

//fdisk -t->E -path->/home/Disco2.dsk -u->K -name->Particion2 -s->300
LOP_FDISK	    : TK_Size TK_Igual TK_Entero {
                    $$ = (new Nodo($1,$3,new vector<Nodo>()));
                }
		        | TK_Path TK_Igual DIRECCION {
		            $$ = (new Nodo($1,D,new vector<Nodo>()));
		        }
		        | TK_Name TK_Igual NAME {
		            $$ = (new Nodo($1,NAM,new vector<Nodo>()));
                }
		        | TK_Type TK_Igual TYPE_PARTITION {
		            $$ = (new Nodo($1,T,new vector<Nodo>()));
                }
		        | TK_U TK_Igual UNIDAD_2 {
		            $$ = (new Nodo($1,U2,new vector<Nodo>()));
                }
		        | TK_F TK_Igual AJUSTE_2 {
		            $$ = (new Nodo($1,A,new vector<Nodo>()));
                }
		        | TK_Delete TK_Igual DELETE {
		            $$ = (new Nodo($1,DEl,new vector<Nodo>()));
                }
		        | TK_Add TK_Igual TK_Entero {
		            $$ = (new Nodo($1,$3,new vector<Nodo>()));
                };

TYPE_PARTITION	: TK_P {
                    T = $1;
                }
                | TK_E {
                    T = $1;
                }
                | TK_L {
                    T = $1;
                };

UNIDAD_2	    : TK_B {
                    U2 = $1;
                }
		        | TK_K {
		            U2 = $1;
                }
		        | TK_M {
		            U2 = $1;
                };

DELETE		    : TK_Full {
                    DEl = $1;
                };

AJUSTE_2	    : TK_Ff {
                    A = $1;
                }
                | TK_Bf {
                    A = $1;
                }
                | TK_Wf {
                    A = $1;
                };

NAME		    : TK_Cadena {
                    NAM= $1;
                }
		        | TK_Identificador {
		            NAM = $1;
                };

// -------------------- MOUNT --------------------
MOUNT		    : TK_Mount OP_MOUNT {
                    $$ = new Nodo($1,$1,$2->Hojas);
                };

OP_MOUNT	    : OP_MOUNT LOP_MOUNT { }
		        | LOP_MOUNT { };

LOP_MOUNT	    : TK_Menos TK_Path TK_Igual DIRECCION { }
		        | TK_Menos TK_Name TK_Igual NAME { };

// -------------------- UNMOUNT --------------------
UNMOUNT		    : TK_Unmount TK_Id TK_Igual TK_Identificador{ };

// -------------------- MKFS --------------------
MKFS		    : TK_Mkfs OP_MKFS { };

OP_MKFS		    : OP_MKFS LOP_MKFS { }
		        | LOP_MKFS { };

LOP_MKFS	    : TK_Menos TK_Id TK_Igual TK_Identificador { }
		        | TK_Type TK_Igual TK_Full { }
		        | TK_Menos TK_Fs TK_Igual TYPE_FORMAT{ };

TYPE_FORMAT	    : TK_2fs { }
		        | TK_3fs { };

// -------------------- EXEC --------------------
EXEC		    : TK_Exec TK_Menos TK_Path TK_Igual DIRECCION { };

// -------------------- PAUSE --------------------
PAUSE		    : TK_Pause {
			        printf("Presione una tecla para continuar...");
			        int c = getchar();
 		        };

// -------------------- REP --------------------
REP		        : TK_Rep OP_REP {
                    $$ = new Nodo($1,$1,$2->Hojas);
                };

OP_REP		    : OP_REP LOP_REP {
                    $$ = $1;
                    $$->Hojas->push_back(*$2);
                }
                | LOP_REP {
                    $$->Hojas->push_back(*$1);
                };

LOP_REP		    :TK_Id TK_Igual NAME {
                    $$ = (new Nodo($1,NAM,new vector<Nodo>()));
                }
                |TK_Path TK_Igual DIRECCION {
                    $$ = (new Nodo($1,D,new vector<Nodo>()));
                }
                |TK_Mame TK_Igual NAME2 {
                    $$ = (new Nodo($1,NAMREP,new vector<Nodo>()));
                };

 NAME2          : TK_Mbr {
                    NAMREP  = $1;
                }
                | TK_Disk {
                    NAMREP  = $1;
                }
                | TK_Inode {
                    NAMREP = $1;
                }
                | TK_Journaling {
                    NAMREP = $1;
                }
                | TK_Block {
                    NAMREP = $1;
                }
                | TK_Bm_inode {
                    NAMREP = $1;
                }
                | TK_Bm_block {
                    NAMREP = $1;
                }
                | TK_Tree {
                    NAMREP = $1;
                }
                | TK_Sb{
                    NAMREP = $1;
                }
                | TK_File{
                    NAMREP = $1;
                }
                | TK_Ls{
                    NAMREP = $1;
                };

