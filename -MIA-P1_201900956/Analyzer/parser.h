/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    coment = 258,                  /* coment  */
    TK_Size = 259,                 /* TK_Size  */
    TK_Mkdisk = 260,               /* TK_Mkdisk  */
    TK_F = 261,                    /* TK_F  */
    TK_U = 262,                    /* TK_U  */
    TK_Path = 263,                 /* TK_Path  */
    TK_Rmdisk = 264,               /* TK_Rmdisk  */
    TK_Bf = 265,                   /* TK_Bf  */
    TK_Ff = 266,                   /* TK_Ff  */
    TK_Wf = 267,                   /* TK_Wf  */
    TK_K = 268,                    /* TK_K  */
    TK_M = 269,                    /* TK_M  */
    TK_B = 270,                    /* TK_B  */
    TK_Fdisk = 271,                /* TK_Fdisk  */
    TK_Type = 272,                 /* TK_Type  */
    TK_Delete = 273,               /* TK_Delete  */
    TK_Name = 274,                 /* TK_Name  */
    TK_Add = 275,                  /* TK_Add  */
    TK_Mount = 276,                /* TK_Mount  */
    TK_Unmount = 277,              /* TK_Unmount  */
    TK_Id = 278,                   /* TK_Id  */
    TK_Mkfs = 279,                 /* TK_Mkfs  */
    TK_Fs = 280,                   /* TK_Fs  */
    TK_Fast = 281,                 /* TK_Fast  */
    TK_Full = 282,                 /* TK_Full  */
    TK_2fs = 283,                  /* TK_2fs  */
    TK_3fs = 284,                  /* TK_3fs  */
    TK_Login = 285,                /* TK_Login  */
    TK_Logout = 286,               /* TK_Logout  */
    TK_Mkgrp = 287,                /* TK_Mkgrp  */
    TK_Rmgrp = 288,                /* TK_Rmgrp  */
    TK_Mkusr = 289,                /* TK_Mkusr  */
    TK_Usr = 290,                  /* TK_Usr  */
    TK_Pwd = 291,                  /* TK_Pwd  */
    TK_Grp = 292,                  /* TK_Grp  */
    TK_Rmusr = 293,                /* TK_Rmusr  */
    TK_Chmod = 294,                /* TK_Chmod  */
    TK_Ugo = 295,                  /* TK_Ugo  */
    TK_R = 296,                    /* TK_R  */
    TK_Mkfile = 297,               /* TK_Mkfile  */
    TK_Cont = 298,                 /* TK_Cont  */
    TK_Cat = 299,                  /* TK_Cat  */
    TK_File = 300,                 /* TK_File  */
    TK_Rem = 301,                  /* TK_Rem  */
    TK_Edit = 302,                 /* TK_Edit  */
    TK_Ren = 303,                  /* TK_Ren  */
    TK_Mkdir = 304,                /* TK_Mkdir  */
    TK_P = 305,                    /* TK_P  */
    TK_Cp = 306,                   /* TK_Cp  */
    TK_Dest = 307,                 /* TK_Dest  */
    TK_Mv = 308,                   /* TK_Mv  */
    TK_Find = 309,                 /* TK_Find  */
    TK_Chown = 310,                /* TK_Chown  */
    TK_Chgrp = 311,                /* TK_Chgrp  */
    TK_Pause = 312,                /* TK_Pause  */
    TK_E = 313,                    /* TK_E  */
    TK_L = 314,                    /* TK_L  */
    TK_Rep = 315,                  /* TK_Rep  */
    TK_Ruta = 316,                 /* TK_Ruta  */
    TK_Mbr = 317,                  /* TK_Mbr  */
    TK_Disk = 318,                 /* TK_Disk  */
    TK_Inode = 319,                /* TK_Inode  */
    TK_Journaling = 320,           /* TK_Journaling  */
    TK_Block = 321,                /* TK_Block  */
    TK_Bm_Inode = 322,             /* TK_Bm_Inode  */
    TK_Bm_Block = 323,             /* TK_Bm_Block  */
    TK_Tree = 324,                 /* TK_Tree  */
    TK_Sb = 325,                   /* TK_Sb  */
    TK_Ls = 326,                   /* TK_Ls  */
    TK_Exec = 327,                 /* TK_Exec  */
    TK_Punto = 328,                /* TK_Punto  */
    TK_Menor = 329,                /* TK_Menor  */
    TK_Mayor = 330,                /* TK_Mayor  */
    TK_CorA = 331,                 /* TK_CorA  */
    TK_CorC = 332,                 /* TK_CorC  */
    TK_PuntoC = 333,               /* TK_PuntoC  */
    TK_Pot = 334,                  /* TK_Pot  */
    TK_Coma = 335,                 /* TK_Coma  */
    TK_ParA = 336,                 /* TK_ParA  */
    TK_ParC = 337,                 /* TK_ParC  */
    TK_LLaveA = 338,               /* TK_LLaveA  */
    TK_LLaveC = 339,               /* TK_LLaveC  */
    TK_Suma = 340,                 /* TK_Suma  */
    TK_Menos = 341,                /* TK_Menos  */
    TK_Por = 342,                  /* TK_Por  */
    TK_Igual = 343,                /* TK_Igual  */
    TK_Dolar = 344,                /* TK_Dolar  */
    TK_DosPuntos = 345,            /* TK_DosPuntos  */
    TK_Entero = 346,               /* TK_Entero  */
    TK_Cadena = 347,               /* TK_Cadena  */
    TK_Identificador = 348,        /* TK_Identificador  */
    TK_Caracter = 349,             /* TK_Caracter  */
    Tk_Ruta = 350,                 /* Tk_Ruta  */
    TK_RutaC = 351,                /* TK_RutaC  */
    TK_Name2 = 352,                /* TK_Name2  */
    TK_Comentario = 353,           /* TK_Comentario  */
    TK_BestFit = 354,              /* TK_BestFit  */
    TK_FirstFit = 355,             /* TK_FirstFit  */
    TK_WorstFit = 356,             /* TK_WorstFit  */
    TK_Type2 = 357,                /* TK_Type2  */
    suma = 358,                    /* suma  */
    menos = 359,                   /* menos  */
    multi = 360,                   /* multi  */
    division = 361,                /* division  */
    potencia = 362                 /* potencia  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 36 "ASintactico.y"

    char TEXT [256];
    class  Nodo* Nodo_tmp;

#line 176 "parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_PARSER_H_INCLUDED  */
