%option case-insensitive
%option yylineno
%option noyywrap
%option nounput

%{
    #include "./Analyzer/parser.h"
    #include <iostream>

    using namespace std;

    int yyfila = 1;
    int yycolum = 0;
%}

Letra [a-zñA-ZÑ]+
Entero -?[0-9]+
Identificador  ({Letra}|{Entero})({Letra}|{Entero}|"_")*
Caracter "\'"("\\")?({Letra}|{Entero})"\'"
Cadena [\"][^\"\n]*[\"\n]

ru "/"{Identificador}
ruta_carpeta {ru}+
ruta {ru}+"."{Identificador}
path ^(\/[^\/ ]*)+\/?$
name2 {Identificador}"."{Identificador}

Espacios (" "|"\r"|"\t"|"n")
comentarios [#]+.*
%x ComentarioSimple

%%
"#"                         {  BEGIN ComentarioSimple; }
"-s"                        { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Size;}
"MKDISK"                    { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Mkdisk;}
"-f"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_F;}
"-u"                        { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_U;}
"-path"                      { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Path;}
"RMDISK"                    { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Rmdisk;}
"BF"                        { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Bf;}
"FF"                        { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Ff;}
"WF"                        { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Wf;}

"BestFit"                   { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_BestFit;}
"FirstFIt"                  { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_FirstFit;}
"WorstFit"                  { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_WorstFit;}

"K"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_K;}
"M"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_M;}
"B"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_B;}
"FDISK"                     { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Fdisk;}
"-t"                        { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Type;}
"-type"                     { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Type2;}
"delete"                    { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Delete;}
"name"                      { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Name;}
"add"                       { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Add;}
"mount"                     { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Mount;}
"unmount"                   { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Unmount;}
"id"                        { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Id;}
"MKFS"                      { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Mkfs;}
"-fs"                        { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Fs;}
"fast"                      { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Fast;}
"full"                      { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Full;}
"2fs"                       { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_2fs;}
"3fs"                       { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_3fs;}
"login"                     { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Login;}
"logout"                    { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Logout;}
"mkgrp"                     { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Mkgrp;}
"rmgrp"                     { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Rmgrp;}
"mkusr"                     { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Mkusr;}
"usr"                       { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Usr;}
"pwd"                       { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Pwd;}
"grp"                       { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Grp;}
"rmusr"                     { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Rmusr;}
"chmod"                     { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Chmod;}
"ugo"                       { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Ugo;}
"r"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_R;}
"mkfile"                    { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Mkfile;}
"cont"                      { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Cont;}
"cat"                       { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Cat;}
"file"                      { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_File;}
"rem"                       { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Rem;}
"edit"                      { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Edit;}
"ren"                       { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Ren;}
"mkdir"                     { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Mkdir;}
"p"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_P;}
"cp"                        { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Cp;}
"dest"                      { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Dest;}
"mv"                        { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Mv;}
"find"                      { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Find;}
"chown"                     { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Chown;}
"chgrp"                     { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Chgrp;}
"pause"                     { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Pause;}
"e"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_E;}
"l"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_L;}
"rep"                       { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Rep;}
"ruta"                      { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Ruta;}
"mbr"                       { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Mbr;}
"disk"                      { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Disk;}
"inode"                     { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Inode;}
"journaling"                { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Journaling;}
"block"                     { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Block;}
"bm_inode"                  { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Bm_Inode;}
"bm_block"                  { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Bm_Block;}
"tree"                      { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Tree;}
"sb"                        { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Sb;}
"ls"                        { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Ls;}
"exec"                      { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Exec;}

"."                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Punto;}
"<"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Menor;}
">"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Mayor;}
"["                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_CorA;}
"]"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_CorC;}
";"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_PuntoC;}
"^"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Pot;}
","                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Coma;}
"("                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_ParA;}
")"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_ParC;}
"{"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_LLaveA;}
"}"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_LLaveC;}
"+"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Suma;}
"-"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Menos;}
"*"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Por;}
"->"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Igual;}
"$"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Dolar;}
":"                         { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_DosPuntos;}

{Entero}                    { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Entero;}
{Cadena}                    { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Cadena;}
{Identificador}             { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Identificador;}
{Caracter}                  { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Caracter;}
{ruta}                      { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Ruta;}
{ruta_carpeta}              { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_RutaC;}
{name2}                     { yycolum+= yyleng; strcpy(yylval.TEXT, yytext); return TK_Name2;}
{Espacios}                  { /* Nada */}

.                           {  cout<<"Error lexico, no se esperaba token:   "<<yytext<<endl;}
<ComentarioSimple>.         {  /* No hace nada */ }
<ComentarioSimple>"\n"      {  yyfila++; yycolum = 0; BEGIN INITIAL; }
%%