/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "ASintactico.y"


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

#line 102 "parser.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_coment = 3,                     /* coment  */
  YYSYMBOL_TK_Size = 4,                    /* TK_Size  */
  YYSYMBOL_TK_Mkdisk = 5,                  /* TK_Mkdisk  */
  YYSYMBOL_TK_F = 6,                       /* TK_F  */
  YYSYMBOL_TK_U = 7,                       /* TK_U  */
  YYSYMBOL_TK_Path = 8,                    /* TK_Path  */
  YYSYMBOL_TK_Rmdisk = 9,                  /* TK_Rmdisk  */
  YYSYMBOL_TK_Bf = 10,                     /* TK_Bf  */
  YYSYMBOL_TK_Ff = 11,                     /* TK_Ff  */
  YYSYMBOL_TK_Wf = 12,                     /* TK_Wf  */
  YYSYMBOL_TK_K = 13,                      /* TK_K  */
  YYSYMBOL_TK_M = 14,                      /* TK_M  */
  YYSYMBOL_TK_B = 15,                      /* TK_B  */
  YYSYMBOL_TK_Fdisk = 16,                  /* TK_Fdisk  */
  YYSYMBOL_TK_Type = 17,                   /* TK_Type  */
  YYSYMBOL_TK_Delete = 18,                 /* TK_Delete  */
  YYSYMBOL_TK_Name = 19,                   /* TK_Name  */
  YYSYMBOL_TK_Add = 20,                    /* TK_Add  */
  YYSYMBOL_TK_Mount = 21,                  /* TK_Mount  */
  YYSYMBOL_TK_Unmount = 22,                /* TK_Unmount  */
  YYSYMBOL_TK_Id = 23,                     /* TK_Id  */
  YYSYMBOL_TK_Mkfs = 24,                   /* TK_Mkfs  */
  YYSYMBOL_TK_Fs = 25,                     /* TK_Fs  */
  YYSYMBOL_TK_Fast = 26,                   /* TK_Fast  */
  YYSYMBOL_TK_Full = 27,                   /* TK_Full  */
  YYSYMBOL_TK_2fs = 28,                    /* TK_2fs  */
  YYSYMBOL_TK_3fs = 29,                    /* TK_3fs  */
  YYSYMBOL_TK_Login = 30,                  /* TK_Login  */
  YYSYMBOL_TK_Logout = 31,                 /* TK_Logout  */
  YYSYMBOL_TK_Mkgrp = 32,                  /* TK_Mkgrp  */
  YYSYMBOL_TK_Rmgrp = 33,                  /* TK_Rmgrp  */
  YYSYMBOL_TK_Mkusr = 34,                  /* TK_Mkusr  */
  YYSYMBOL_TK_Usr = 35,                    /* TK_Usr  */
  YYSYMBOL_TK_Pwd = 36,                    /* TK_Pwd  */
  YYSYMBOL_TK_Grp = 37,                    /* TK_Grp  */
  YYSYMBOL_TK_Rmusr = 38,                  /* TK_Rmusr  */
  YYSYMBOL_TK_Chmod = 39,                  /* TK_Chmod  */
  YYSYMBOL_TK_Ugo = 40,                    /* TK_Ugo  */
  YYSYMBOL_TK_R = 41,                      /* TK_R  */
  YYSYMBOL_TK_Mkfile = 42,                 /* TK_Mkfile  */
  YYSYMBOL_TK_Cont = 43,                   /* TK_Cont  */
  YYSYMBOL_TK_Cat = 44,                    /* TK_Cat  */
  YYSYMBOL_TK_File = 45,                   /* TK_File  */
  YYSYMBOL_TK_Rem = 46,                    /* TK_Rem  */
  YYSYMBOL_TK_Edit = 47,                   /* TK_Edit  */
  YYSYMBOL_TK_Ren = 48,                    /* TK_Ren  */
  YYSYMBOL_TK_Mkdir = 49,                  /* TK_Mkdir  */
  YYSYMBOL_TK_P = 50,                      /* TK_P  */
  YYSYMBOL_TK_Cp = 51,                     /* TK_Cp  */
  YYSYMBOL_TK_Dest = 52,                   /* TK_Dest  */
  YYSYMBOL_TK_Mv = 53,                     /* TK_Mv  */
  YYSYMBOL_TK_Find = 54,                   /* TK_Find  */
  YYSYMBOL_TK_Chown = 55,                  /* TK_Chown  */
  YYSYMBOL_TK_Chgrp = 56,                  /* TK_Chgrp  */
  YYSYMBOL_TK_Pause = 57,                  /* TK_Pause  */
  YYSYMBOL_TK_E = 58,                      /* TK_E  */
  YYSYMBOL_TK_L = 59,                      /* TK_L  */
  YYSYMBOL_TK_Rep = 60,                    /* TK_Rep  */
  YYSYMBOL_TK_Ruta = 61,                   /* TK_Ruta  */
  YYSYMBOL_TK_Mbr = 62,                    /* TK_Mbr  */
  YYSYMBOL_TK_Disk = 63,                   /* TK_Disk  */
  YYSYMBOL_TK_Inode = 64,                  /* TK_Inode  */
  YYSYMBOL_TK_Journaling = 65,             /* TK_Journaling  */
  YYSYMBOL_TK_Block = 66,                  /* TK_Block  */
  YYSYMBOL_TK_Bm_Inode = 67,               /* TK_Bm_Inode  */
  YYSYMBOL_TK_Bm_Block = 68,               /* TK_Bm_Block  */
  YYSYMBOL_TK_Tree = 69,                   /* TK_Tree  */
  YYSYMBOL_TK_Sb = 70,                     /* TK_Sb  */
  YYSYMBOL_TK_Ls = 71,                     /* TK_Ls  */
  YYSYMBOL_TK_Exec = 72,                   /* TK_Exec  */
  YYSYMBOL_TK_Punto = 73,                  /* TK_Punto  */
  YYSYMBOL_TK_Menor = 74,                  /* TK_Menor  */
  YYSYMBOL_TK_Mayor = 75,                  /* TK_Mayor  */
  YYSYMBOL_TK_CorA = 76,                   /* TK_CorA  */
  YYSYMBOL_TK_CorC = 77,                   /* TK_CorC  */
  YYSYMBOL_TK_PuntoC = 78,                 /* TK_PuntoC  */
  YYSYMBOL_TK_Pot = 79,                    /* TK_Pot  */
  YYSYMBOL_TK_Coma = 80,                   /* TK_Coma  */
  YYSYMBOL_TK_ParA = 81,                   /* TK_ParA  */
  YYSYMBOL_TK_ParC = 82,                   /* TK_ParC  */
  YYSYMBOL_TK_LLaveA = 83,                 /* TK_LLaveA  */
  YYSYMBOL_TK_LLaveC = 84,                 /* TK_LLaveC  */
  YYSYMBOL_TK_Suma = 85,                   /* TK_Suma  */
  YYSYMBOL_TK_Menos = 86,                  /* TK_Menos  */
  YYSYMBOL_TK_Por = 87,                    /* TK_Por  */
  YYSYMBOL_TK_Igual = 88,                  /* TK_Igual  */
  YYSYMBOL_TK_Dolar = 89,                  /* TK_Dolar  */
  YYSYMBOL_TK_DosPuntos = 90,              /* TK_DosPuntos  */
  YYSYMBOL_TK_Entero = 91,                 /* TK_Entero  */
  YYSYMBOL_TK_Cadena = 92,                 /* TK_Cadena  */
  YYSYMBOL_TK_Identificador = 93,          /* TK_Identificador  */
  YYSYMBOL_TK_Caracter = 94,               /* TK_Caracter  */
  YYSYMBOL_Tk_Ruta = 95,                   /* Tk_Ruta  */
  YYSYMBOL_TK_RutaC = 96,                  /* TK_RutaC  */
  YYSYMBOL_TK_Name2 = 97,                  /* TK_Name2  */
  YYSYMBOL_TK_Comentario = 98,             /* TK_Comentario  */
  YYSYMBOL_TK_BestFit = 99,                /* TK_BestFit  */
  YYSYMBOL_TK_FirstFit = 100,              /* TK_FirstFit  */
  YYSYMBOL_TK_WorstFit = 101,              /* TK_WorstFit  */
  YYSYMBOL_TK_Type2 = 102,                 /* TK_Type2  */
  YYSYMBOL_suma = 103,                     /* suma  */
  YYSYMBOL_menos = 104,                    /* menos  */
  YYSYMBOL_multi = 105,                    /* multi  */
  YYSYMBOL_division = 106,                 /* division  */
  YYSYMBOL_potencia = 107,                 /* potencia  */
  YYSYMBOL_YYACCEPT = 108,                 /* $accept  */
  YYSYMBOL_INICIO = 109,                   /* INICIO  */
  YYSYMBOL_LCMD = 110,                     /* LCMD  */
  YYSYMBOL_COMANDOS = 111,                 /* COMANDOS  */
  YYSYMBOL_MKDISK = 112,                   /* MKDISK  */
  YYSYMBOL_OP_MKDISK = 113,                /* OP_MKDISK  */
  YYSYMBOL_LOP_MKDISK = 114,               /* LOP_MKDISK  */
  YYSYMBOL_UNIDAD = 115,                   /* UNIDAD  */
  YYSYMBOL_DIRECCION = 116,                /* DIRECCION  */
  YYSYMBOL_AJUSTE = 117,                   /* AJUSTE  */
  YYSYMBOL_RMDISK = 118,                   /* RMDISK  */
  YYSYMBOL_FDISK = 119,                    /* FDISK  */
  YYSYMBOL_OP_FDISK = 120,                 /* OP_FDISK  */
  YYSYMBOL_LOP_FDISK = 121,                /* LOP_FDISK  */
  YYSYMBOL_TYPE_PARTITION = 122,           /* TYPE_PARTITION  */
  YYSYMBOL_UNIDAD_2 = 123,                 /* UNIDAD_2  */
  YYSYMBOL_DELETE = 124,                   /* DELETE  */
  YYSYMBOL_AJUSTE_2 = 125,                 /* AJUSTE_2  */
  YYSYMBOL_NAME = 126,                     /* NAME  */
  YYSYMBOL_MOUNT = 127,                    /* MOUNT  */
  YYSYMBOL_OP_MOUNT = 128,                 /* OP_MOUNT  */
  YYSYMBOL_LOP_MOUNT = 129,                /* LOP_MOUNT  */
  YYSYMBOL_UNMOUNT = 130,                  /* UNMOUNT  */
  YYSYMBOL_MKFS = 131,                     /* MKFS  */
  YYSYMBOL_OP_MKFS = 132,                  /* OP_MKFS  */
  YYSYMBOL_LOP_MKFS = 133,                 /* LOP_MKFS  */
  YYSYMBOL_TYPE_FORMAT = 134,              /* TYPE_FORMAT  */
  YYSYMBOL_EXEC = 135,                     /* EXEC  */
  YYSYMBOL_PAUSE = 136,                    /* PAUSE  */
  YYSYMBOL_REP = 137,                      /* REP  */
  YYSYMBOL_OP_REP = 138,                   /* OP_REP  */
  YYSYMBOL_LOP_REP = 139,                  /* LOP_REP  */
  YYSYMBOL_NAME2 = 140                     /* NAME2  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   113

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  143

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   362


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   165,   165,   169,   170,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   185,   189,   193,   197,   200,   203,
     206,   210,   213,   217,   220,   223,   227,   230,   233,   238,
     243,   247,   251,   256,   259,   262,   265,   268,   271,   274,
     277,   281,   284,   287,   291,   294,   297,   301,   305,   308,
     311,   315,   318,   323,   327,   328,   330,   331,   334,   337,
     339,   340,   342,   343,   344,   346,   347,   350,   355,   361,
     365,   369,   373,   376,   379,   383,   386,   389,   392,   395,
     398,   401,   404,   407,   410,   413
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "coment", "TK_Size",
  "TK_Mkdisk", "TK_F", "TK_U", "TK_Path", "TK_Rmdisk", "TK_Bf", "TK_Ff",
  "TK_Wf", "TK_K", "TK_M", "TK_B", "TK_Fdisk", "TK_Type", "TK_Delete",
  "TK_Name", "TK_Add", "TK_Mount", "TK_Unmount", "TK_Id", "TK_Mkfs",
  "TK_Fs", "TK_Fast", "TK_Full", "TK_2fs", "TK_3fs", "TK_Login",
  "TK_Logout", "TK_Mkgrp", "TK_Rmgrp", "TK_Mkusr", "TK_Usr", "TK_Pwd",
  "TK_Grp", "TK_Rmusr", "TK_Chmod", "TK_Ugo", "TK_R", "TK_Mkfile",
  "TK_Cont", "TK_Cat", "TK_File", "TK_Rem", "TK_Edit", "TK_Ren",
  "TK_Mkdir", "TK_P", "TK_Cp", "TK_Dest", "TK_Mv", "TK_Find", "TK_Chown",
  "TK_Chgrp", "TK_Pause", "TK_E", "TK_L", "TK_Rep", "TK_Ruta", "TK_Mbr",
  "TK_Disk", "TK_Inode", "TK_Journaling", "TK_Block", "TK_Bm_Inode",
  "TK_Bm_Block", "TK_Tree", "TK_Sb", "TK_Ls", "TK_Exec", "TK_Punto",
  "TK_Menor", "TK_Mayor", "TK_CorA", "TK_CorC", "TK_PuntoC", "TK_Pot",
  "TK_Coma", "TK_ParA", "TK_ParC", "TK_LLaveA", "TK_LLaveC", "TK_Suma",
  "TK_Menos", "TK_Por", "TK_Igual", "TK_Dolar", "TK_DosPuntos",
  "TK_Entero", "TK_Cadena", "TK_Identificador", "TK_Caracter", "Tk_Ruta",
  "TK_RutaC", "TK_Name2", "TK_Comentario", "TK_BestFit", "TK_FirstFit",
  "TK_WorstFit", "TK_Type2", "suma", "menos", "multi", "division",
  "potencia", "$accept", "INICIO", "LCMD", "COMANDOS", "MKDISK",
  "OP_MKDISK", "LOP_MKDISK", "UNIDAD", "DIRECCION", "AJUSTE", "RMDISK",
  "FDISK", "OP_FDISK", "LOP_FDISK", "TYPE_PARTITION", "UNIDAD_2", "DELETE",
  "AJUSTE_2", "NAME", "MOUNT", "OP_MOUNT", "LOP_MOUNT", "UNMOUNT", "MKFS",
  "OP_MKFS", "LOP_MKFS", "TYPE_FORMAT", "EXEC", "PAUSE", "REP", "OP_REP",
  "LOP_REP", "NAME2", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-83)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -4,    66,     2,    43,   -82,   -10,   -17,   -83,     0,    16,
      46,    -4,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -40,   -31,   -30,   -21,    66,   -83,    -8,    -7,
      -6,    -5,    -3,    -2,    -1,     1,     5,    43,   -83,     3,
     -82,   -83,     6,     7,    15,   -17,   -83,     8,     9,    10,
       0,   -83,    11,   -83,   -83,   -39,     4,    29,   -55,   -83,
     -55,   -20,    54,    62,   -55,   -14,    57,   -38,    12,   -83,
      13,    14,   -83,    17,    61,    18,    19,   -83,   -55,   -36,
     -38,   -83,   -55,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -55,   -38,   -83,   -83,
      20,    50,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,    68,     0,     0,
       0,     2,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     0,     0,     0,     0,    14,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,    32,     0,
      53,    55,     0,     0,     0,    59,    61,     0,     0,     0,
      69,    71,     0,     1,     3,     0,     0,     0,     0,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,    54,     0,     0,     0,     0,    60,     0,     0,
       0,    70,     0,    17,    26,    28,    27,    20,    21,    22,
      18,    23,    25,    24,    19,    29,    33,    49,    48,    50,
      38,    45,    46,    44,    37,    34,    41,    42,    43,    36,
      47,    39,    51,    52,    35,    40,     0,     0,    58,    63,
       0,     0,    73,    84,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    85,    74,    72,    67,    56,    57,    62,
      65,    66,    64
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -83,   -83,   -83,    79,   -83,   -83,    65,   -83,   -57,   -83,
     -83,   -83,   -83,    55,   -83,   -83,   -83,   -83,   -78,   -83,
     -83,    60,   -83,   -83,   -83,    59,   -83,   -83,   -83,   -83,
     -83,    58,   -83
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    10,    11,    12,    13,    26,    27,    90,    94,    87,
      14,    15,    37,    38,   109,   104,   111,   100,   114,    16,
      40,    41,    17,    18,    45,    46,   142,    19,    20,    21,
      50,    51,   134
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      43,     1,   135,    95,    39,     2,    91,   105,    47,   123,
      28,    70,     3,    42,    84,    85,    86,     4,     5,    48,
       6,   122,    71,    49,    52,   136,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   106,    92,    75,   138,
      76,    93,    88,    89,   107,   108,    53,    29,    55,    30,
      31,    32,    83,     7,   112,   113,     8,    56,    57,   137,
      33,    34,    35,    36,    97,    98,    99,    58,     9,    44,
      22,    96,    23,    24,    25,   101,   102,   103,   140,   141,
      60,    61,    62,    63,   110,    64,    65,    66,   119,    67,
      54,    59,    69,    68,    73,    74,    78,    79,    80,    82,
      72,   116,   117,   115,    77,     0,   120,   121,    81,     0,
     118,     0,     0,   139
};

static const yytype_int8 yycheck[] =
{
      17,     5,    80,    60,    86,     9,    61,    64,     8,    45,
       8,     8,    16,    23,    10,    11,    12,    21,    22,    19,
      24,    78,    19,    23,     8,    82,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    50,    92,    23,   117,
      25,    96,    13,    14,    58,    59,     0,     4,    88,     6,
       7,     8,    91,    57,    92,    93,    60,    88,    88,   116,
      17,    18,    19,    20,    10,    11,    12,    88,    72,    86,
       4,    91,     6,     7,     8,    13,    14,    15,    28,    29,
      88,    88,    88,    88,    27,    88,    88,    88,    27,    88,
      11,    26,    37,    88,    88,    88,    88,    88,    88,    88,
      40,    88,    88,    91,    45,    -1,    88,    88,    50,    -1,
      93,    -1,    -1,    93
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     9,    16,    21,    22,    24,    57,    60,    72,
     109,   110,   111,   112,   118,   119,   127,   130,   131,   135,
     136,   137,     4,     6,     7,     8,   113,   114,     8,     4,
       6,     7,     8,    17,    18,    19,    20,   120,   121,    86,
     128,   129,    23,    17,    86,   132,   133,     8,    19,    23,
     138,   139,     8,     0,   111,    88,    88,    88,    88,   114,
      88,    88,    88,    88,    88,    88,    88,    88,    88,   121,
       8,    19,   129,    88,    88,    23,    25,   133,    88,    88,
      88,   139,    88,    91,    10,    11,    12,   117,    13,    14,
     115,    61,    92,    96,   116,   116,    91,    10,    11,    12,
     125,    13,    14,    15,   123,   116,    50,    58,    59,   122,
      27,   124,    92,    93,   126,    91,    88,    88,    93,    27,
      88,    88,   116,    45,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,   140,   126,   116,   116,   126,    93,
      28,    29,   134
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   108,   109,   110,   110,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   112,   113,   113,   114,   114,   114,
     114,   115,   115,   116,   116,   116,   117,   117,   117,   118,
     119,   120,   120,   121,   121,   121,   121,   121,   121,   121,
     121,   122,   122,   122,   123,   123,   123,   124,   125,   125,
     125,   126,   126,   127,   128,   128,   129,   129,   130,   131,
     132,   132,   133,   133,   133,   134,   134,   135,   136,   137,
     138,   138,   139,   139,   139,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       2,     2,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     4,     4,     4,     2,
       2,     1,     4,     3,     4,     1,     1,     4,     1,     2,
       2,     1,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
  YYLTYPE *yylloc;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* INICIO: LCMD  */
#line 165 "ASintactico.y"
                       {
			        cout << "INICIO" << endl;
		        }
#line 1731 "parser.cpp"
    break;

  case 3: /* LCMD: LCMD COMANDOS  */
#line 169 "ASintactico.y"
                                { }
#line 1737 "parser.cpp"
    break;

  case 4: /* LCMD: COMANDOS  */
#line 170 "ASintactico.y"
                           { }
#line 1743 "parser.cpp"
    break;

  case 5: /* COMANDOS: MKDISK  */
#line 172 "ASintactico.y"
                         {raiz = (yyvsp[0].Nodo_tmp);}
#line 1749 "parser.cpp"
    break;

  case 6: /* COMANDOS: RMDISK  */
#line 173 "ASintactico.y"
                         { raiz = (yyvsp[0].Nodo_tmp);}
#line 1755 "parser.cpp"
    break;

  case 7: /* COMANDOS: FDISK  */
#line 174 "ASintactico.y"
                        { raiz = (yyvsp[0].Nodo_tmp);}
#line 1761 "parser.cpp"
    break;

  case 8: /* COMANDOS: MOUNT  */
#line 175 "ASintactico.y"
                        { raiz = (yyvsp[0].Nodo_tmp);}
#line 1767 "parser.cpp"
    break;

  case 9: /* COMANDOS: UNMOUNT  */
#line 176 "ASintactico.y"
                          { raiz = (yyvsp[0].Nodo_tmp);}
#line 1773 "parser.cpp"
    break;

  case 10: /* COMANDOS: MKFS  */
#line 177 "ASintactico.y"
                       { raiz = (yyvsp[0].Nodo_tmp);}
#line 1779 "parser.cpp"
    break;

  case 11: /* COMANDOS: EXEC  */
#line 178 "ASintactico.y"
                       { raiz = (yyvsp[0].Nodo_tmp);}
#line 1785 "parser.cpp"
    break;

  case 12: /* COMANDOS: PAUSE  */
#line 179 "ASintactico.y"
                        { raiz = (yyvsp[0].Nodo_tmp);}
#line 1791 "parser.cpp"
    break;

  case 13: /* COMANDOS: REP  */
#line 180 "ASintactico.y"
                      { raiz = (yyvsp[0].Nodo_tmp);}
#line 1797 "parser.cpp"
    break;

  case 14: /* MKDISK: TK_Mkdisk OP_MKDISK  */
#line 185 "ASintactico.y"
                                      {
			        (yyval.Nodo_tmp) = new Nodo((yyvsp[-1].TEXT),(yyvsp[-1].TEXT),(yyvsp[0].Nodo_tmp)->Hojas);
		        }
#line 1805 "parser.cpp"
    break;

  case 15: /* OP_MKDISK: OP_MKDISK LOP_MKDISK  */
#line 189 "ASintactico.y"
                                       {
			        (yyval.Nodo_tmp) = (yyvsp[-1].Nodo_tmp);
			        (yyval.Nodo_tmp)->Hojas->push_back(*(yyvsp[0].Nodo_tmp));
		        }
#line 1814 "parser.cpp"
    break;

  case 16: /* OP_MKDISK: LOP_MKDISK  */
#line 193 "ASintactico.y"
                             {
                	(yyval.Nodo_tmp)->Hojas->push_back(*(yyvsp[0].Nodo_tmp));
                }
#line 1822 "parser.cpp"
    break;

  case 17: /* LOP_MKDISK: TK_Size TK_Igual TK_Entero  */
#line 197 "ASintactico.y"
                                             {
			        (yyval.Nodo_tmp) = (new Nodo((yyvsp[-2].TEXT),(yyvsp[0].TEXT),new vector<Nodo>()));
		        }
#line 1830 "parser.cpp"
    break;

  case 18: /* LOP_MKDISK: TK_U TK_Igual UNIDAD  */
#line 200 "ASintactico.y"
                                       {
                	(yyval.Nodo_tmp) = (new Nodo((yyvsp[-2].TEXT),U,new vector<Nodo>()));
                }
#line 1838 "parser.cpp"
    break;

  case 19: /* LOP_MKDISK: TK_Path TK_Igual DIRECCION  */
#line 203 "ASintactico.y"
                                             {
                	(yyval.Nodo_tmp) = (new Nodo((yyvsp[-2].TEXT),D,new vector<Nodo>()));
                }
#line 1846 "parser.cpp"
    break;

  case 20: /* LOP_MKDISK: TK_F TK_Igual AJUSTE  */
#line 206 "ASintactico.y"
                                       {
			        (yyval.Nodo_tmp) = (new Nodo((yyvsp[-2].TEXT),A,new vector<Nodo>()));
                }
#line 1854 "parser.cpp"
    break;

  case 21: /* UNIDAD: TK_K  */
#line 210 "ASintactico.y"
                       {
                    U = (yyvsp[0].TEXT);
                }
#line 1862 "parser.cpp"
    break;

  case 22: /* UNIDAD: TK_M  */
#line 213 "ASintactico.y"
                       {
                    U = (yyvsp[0].TEXT);
                }
#line 1870 "parser.cpp"
    break;

  case 23: /* DIRECCION: TK_Ruta  */
#line 217 "ASintactico.y"
                          {
                    D = (yyvsp[0].TEXT);
                }
#line 1878 "parser.cpp"
    break;

  case 24: /* DIRECCION: TK_RutaC  */
#line 220 "ASintactico.y"
                           {
                    D = (yyvsp[0].TEXT);
                }
#line 1886 "parser.cpp"
    break;

  case 25: /* DIRECCION: TK_Cadena  */
#line 223 "ASintactico.y"
                            {
                    D = (yyvsp[0].TEXT);
                }
#line 1894 "parser.cpp"
    break;

  case 26: /* AJUSTE: TK_Bf  */
#line 227 "ASintactico.y"
                        {
                    A = (yyvsp[0].TEXT);
                }
#line 1902 "parser.cpp"
    break;

  case 27: /* AJUSTE: TK_Wf  */
#line 230 "ASintactico.y"
                        {
                    A = (yyvsp[0].TEXT);
                }
#line 1910 "parser.cpp"
    break;

  case 28: /* AJUSTE: TK_Ff  */
#line 233 "ASintactico.y"
                        {
                    A = (yyvsp[0].TEXT);
                }
#line 1918 "parser.cpp"
    break;

  case 29: /* RMDISK: TK_Rmdisk TK_Path TK_Igual DIRECCION  */
#line 238 "ASintactico.y"
                                                       {
                     (yyval.Nodo_tmp) = new Nodo((yyvsp[-3].TEXT),D,new vector<Nodo>());
                }
#line 1926 "parser.cpp"
    break;

  case 30: /* FDISK: TK_Fdisk OP_FDISK  */
#line 243 "ASintactico.y"
                                        {
                    (yyval.Nodo_tmp) = new Nodo((yyvsp[-1].TEXT),(yyvsp[-1].TEXT),(yyvsp[0].Nodo_tmp)->Hojas);
                }
#line 1934 "parser.cpp"
    break;

  case 31: /* OP_FDISK: OP_FDISK LOP_FDISK  */
#line 247 "ASintactico.y"
                                         {
                    (yyval.Nodo_tmp) = (yyvsp[-1].Nodo_tmp);
                    (yyval.Nodo_tmp)->Hojas->push_back(*(yyvsp[0].Nodo_tmp));
                }
#line 1943 "parser.cpp"
    break;

  case 32: /* OP_FDISK: LOP_FDISK  */
#line 251 "ASintactico.y"
                            {
                    (yyval.Nodo_tmp)->Hojas->push_back(*(yyvsp[0].Nodo_tmp));
                }
#line 1951 "parser.cpp"
    break;

  case 33: /* LOP_FDISK: TK_Size TK_Igual TK_Entero  */
#line 256 "ASintactico.y"
                                                 {
                    (yyval.Nodo_tmp) = (new Nodo((yyvsp[-2].TEXT),(yyvsp[0].TEXT),new vector<Nodo>()));
                }
#line 1959 "parser.cpp"
    break;

  case 34: /* LOP_FDISK: TK_Path TK_Igual DIRECCION  */
#line 259 "ASintactico.y"
                                                     {
		            (yyval.Nodo_tmp) = (new Nodo((yyvsp[-2].TEXT),D,new vector<Nodo>()));
		        }
#line 1967 "parser.cpp"
    break;

  case 35: /* LOP_FDISK: TK_Name TK_Igual NAME  */
#line 262 "ASintactico.y"
                                                {
		            (yyval.Nodo_tmp) = (new Nodo((yyvsp[-2].TEXT),NAM,new vector<Nodo>()));
                }
#line 1975 "parser.cpp"
    break;

  case 36: /* LOP_FDISK: TK_Type TK_Igual TYPE_PARTITION  */
#line 265 "ASintactico.y"
                                                          {
		            (yyval.Nodo_tmp) = (new Nodo((yyvsp[-2].TEXT),T,new vector<Nodo>()));
                }
#line 1983 "parser.cpp"
    break;

  case 37: /* LOP_FDISK: TK_U TK_Igual UNIDAD_2  */
#line 268 "ASintactico.y"
                                                 {
		            (yyval.Nodo_tmp) = (new Nodo((yyvsp[-2].TEXT),U2,new vector<Nodo>()));
                }
#line 1991 "parser.cpp"
    break;

  case 38: /* LOP_FDISK: TK_F TK_Igual AJUSTE_2  */
#line 271 "ASintactico.y"
                                                 {
		            (yyval.Nodo_tmp) = (new Nodo((yyvsp[-2].TEXT),A,new vector<Nodo>()));
                }
#line 1999 "parser.cpp"
    break;

  case 39: /* LOP_FDISK: TK_Delete TK_Igual DELETE  */
#line 274 "ASintactico.y"
                                                    {
		            (yyval.Nodo_tmp) = (new Nodo((yyvsp[-2].TEXT),DEl,new vector<Nodo>()));
                }
#line 2007 "parser.cpp"
    break;

  case 40: /* LOP_FDISK: TK_Add TK_Igual TK_Entero  */
#line 277 "ASintactico.y"
                                                    {
		            (yyval.Nodo_tmp) = (new Nodo((yyvsp[-2].TEXT),(yyvsp[0].TEXT),new vector<Nodo>()));
                }
#line 2015 "parser.cpp"
    break;

  case 41: /* TYPE_PARTITION: TK_P  */
#line 281 "ASintactico.y"
                       {
                    T = (yyvsp[0].TEXT);
                }
#line 2023 "parser.cpp"
    break;

  case 42: /* TYPE_PARTITION: TK_E  */
#line 284 "ASintactico.y"
                       {
                    T = (yyvsp[0].TEXT);
                }
#line 2031 "parser.cpp"
    break;

  case 43: /* TYPE_PARTITION: TK_L  */
#line 287 "ASintactico.y"
                       {
                    T = (yyvsp[0].TEXT);
                }
#line 2039 "parser.cpp"
    break;

  case 44: /* UNIDAD_2: TK_B  */
#line 291 "ASintactico.y"
                           {
                    U2 = (yyvsp[0].TEXT);
                }
#line 2047 "parser.cpp"
    break;

  case 45: /* UNIDAD_2: TK_K  */
#line 294 "ASintactico.y"
                               {
		            U2 = (yyvsp[0].TEXT);
                }
#line 2055 "parser.cpp"
    break;

  case 46: /* UNIDAD_2: TK_M  */
#line 297 "ASintactico.y"
                               {
		            U2 = (yyvsp[0].TEXT);
                }
#line 2063 "parser.cpp"
    break;

  case 47: /* DELETE: TK_Full  */
#line 301 "ASintactico.y"
                              {
                    DEl = (yyvsp[0].TEXT);
                }
#line 2071 "parser.cpp"
    break;

  case 48: /* AJUSTE_2: TK_Ff  */
#line 305 "ASintactico.y"
                            {
                    A = (yyvsp[0].TEXT);
                }
#line 2079 "parser.cpp"
    break;

  case 49: /* AJUSTE_2: TK_Bf  */
#line 308 "ASintactico.y"
                        {
                    A = (yyvsp[0].TEXT);
                }
#line 2087 "parser.cpp"
    break;

  case 50: /* AJUSTE_2: TK_Wf  */
#line 311 "ASintactico.y"
                        {
                    A = (yyvsp[0].TEXT);
                }
#line 2095 "parser.cpp"
    break;

  case 51: /* NAME: TK_Cadena  */
#line 315 "ASintactico.y"
                                {
                    NAM= (yyvsp[0].TEXT);
                }
#line 2103 "parser.cpp"
    break;

  case 52: /* NAME: TK_Identificador  */
#line 318 "ASintactico.y"
                                           {
		            NAM = (yyvsp[0].TEXT);
                }
#line 2111 "parser.cpp"
    break;

  case 53: /* MOUNT: TK_Mount OP_MOUNT  */
#line 323 "ASintactico.y"
                                        {
                    (yyval.Nodo_tmp) = new Nodo((yyvsp[-1].TEXT),(yyvsp[-1].TEXT),(yyvsp[0].Nodo_tmp)->Hojas);
                }
#line 2119 "parser.cpp"
    break;

  case 54: /* OP_MOUNT: OP_MOUNT LOP_MOUNT  */
#line 327 "ASintactico.y"
                                         { }
#line 2125 "parser.cpp"
    break;

  case 55: /* OP_MOUNT: LOP_MOUNT  */
#line 328 "ASintactico.y"
                                    { }
#line 2131 "parser.cpp"
    break;

  case 56: /* LOP_MOUNT: TK_Menos TK_Path TK_Igual DIRECCION  */
#line 330 "ASintactico.y"
                                                          { }
#line 2137 "parser.cpp"
    break;

  case 57: /* LOP_MOUNT: TK_Menos TK_Name TK_Igual NAME  */
#line 331 "ASintactico.y"
                                                         { }
#line 2143 "parser.cpp"
    break;

  case 58: /* UNMOUNT: TK_Unmount TK_Id TK_Igual TK_Identificador  */
#line 334 "ASintactico.y"
                                                                { }
#line 2149 "parser.cpp"
    break;

  case 59: /* MKFS: TK_Mkfs OP_MKFS  */
#line 337 "ASintactico.y"
                                      { }
#line 2155 "parser.cpp"
    break;

  case 60: /* OP_MKFS: OP_MKFS LOP_MKFS  */
#line 339 "ASintactico.y"
                                       { }
#line 2161 "parser.cpp"
    break;

  case 61: /* OP_MKFS: LOP_MKFS  */
#line 340 "ASintactico.y"
                                   { }
#line 2167 "parser.cpp"
    break;

  case 62: /* LOP_MKFS: TK_Menos TK_Id TK_Igual TK_Identificador  */
#line 342 "ASintactico.y"
                                                               { }
#line 2173 "parser.cpp"
    break;

  case 63: /* LOP_MKFS: TK_Type TK_Igual TK_Full  */
#line 343 "ASintactico.y"
                                                   { }
#line 2179 "parser.cpp"
    break;

  case 64: /* LOP_MKFS: TK_Menos TK_Fs TK_Igual TYPE_FORMAT  */
#line 344 "ASintactico.y"
                                                             { }
#line 2185 "parser.cpp"
    break;

  case 65: /* TYPE_FORMAT: TK_2fs  */
#line 346 "ASintactico.y"
                             { }
#line 2191 "parser.cpp"
    break;

  case 66: /* TYPE_FORMAT: TK_3fs  */
#line 347 "ASintactico.y"
                                 { }
#line 2197 "parser.cpp"
    break;

  case 67: /* EXEC: TK_Exec TK_Path TK_Igual DIRECCION  */
#line 350 "ASintactico.y"
                                                         {
                    (yyval.Nodo_tmp) = new Nodo((yyvsp[-3].TEXT),D,new vector<Nodo>());
                }
#line 2205 "parser.cpp"
    break;

  case 68: /* PAUSE: TK_Pause  */
#line 355 "ASintactico.y"
                               {
			        printf("Presione una tecla para continuar...");
			        int c = getchar();
 		        }
#line 2214 "parser.cpp"
    break;

  case 69: /* REP: TK_Rep OP_REP  */
#line 361 "ASintactico.y"
                                        {
                    (yyval.Nodo_tmp) = new Nodo((yyvsp[-1].TEXT),(yyvsp[-1].TEXT),(yyvsp[0].Nodo_tmp)->Hojas);
                }
#line 2222 "parser.cpp"
    break;

  case 70: /* OP_REP: OP_REP LOP_REP  */
#line 365 "ASintactico.y"
                                     {
                    (yyval.Nodo_tmp) = (yyvsp[-1].Nodo_tmp);
                    (yyval.Nodo_tmp)->Hojas->push_back(*(yyvsp[0].Nodo_tmp));
                }
#line 2231 "parser.cpp"
    break;

  case 71: /* OP_REP: LOP_REP  */
#line 369 "ASintactico.y"
                          {
                    (yyval.Nodo_tmp)->Hojas->push_back(*(yyvsp[0].Nodo_tmp));
                }
#line 2239 "parser.cpp"
    break;

  case 72: /* LOP_REP: TK_Id TK_Igual NAME  */
#line 373 "ASintactico.y"
                                         {
                    (yyval.Nodo_tmp) = (new Nodo((yyvsp[-2].TEXT),NAM,new vector<Nodo>()));
                }
#line 2247 "parser.cpp"
    break;

  case 73: /* LOP_REP: TK_Path TK_Igual DIRECCION  */
#line 376 "ASintactico.y"
                                            {
                    (yyval.Nodo_tmp) = (new Nodo((yyvsp[-2].TEXT),D,new vector<Nodo>()));
                }
#line 2255 "parser.cpp"
    break;

  case 74: /* LOP_REP: TK_Name TK_Igual NAME2  */
#line 379 "ASintactico.y"
                                        {
                    (yyval.Nodo_tmp) = (new Nodo((yyvsp[-2].TEXT),NAMREP,new vector<Nodo>()));
                }
#line 2263 "parser.cpp"
    break;

  case 75: /* NAME2: TK_Mbr  */
#line 383 "ASintactico.y"
                         {
                    NAMREP  = (yyvsp[0].TEXT);
                }
#line 2271 "parser.cpp"
    break;

  case 76: /* NAME2: TK_Disk  */
#line 386 "ASintactico.y"
                          {
                    NAMREP  = (yyvsp[0].TEXT);
                }
#line 2279 "parser.cpp"
    break;

  case 77: /* NAME2: TK_Inode  */
#line 389 "ASintactico.y"
                           {
                    NAMREP = (yyvsp[0].TEXT);
                }
#line 2287 "parser.cpp"
    break;

  case 78: /* NAME2: TK_Journaling  */
#line 392 "ASintactico.y"
                                {
                    NAMREP = (yyvsp[0].TEXT);
                }
#line 2295 "parser.cpp"
    break;

  case 79: /* NAME2: TK_Block  */
#line 395 "ASintactico.y"
                           {
                    NAMREP = (yyvsp[0].TEXT);
                }
#line 2303 "parser.cpp"
    break;

  case 80: /* NAME2: TK_Bm_Inode  */
#line 398 "ASintactico.y"
                             {
                    NAMREP = (yyvsp[0].TEXT);
                }
#line 2311 "parser.cpp"
    break;

  case 81: /* NAME2: TK_Bm_Block  */
#line 401 "ASintactico.y"
                              {
                    NAMREP = (yyvsp[0].TEXT);
                }
#line 2319 "parser.cpp"
    break;

  case 82: /* NAME2: TK_Tree  */
#line 404 "ASintactico.y"
                          {
                    NAMREP = (yyvsp[0].TEXT);
                }
#line 2327 "parser.cpp"
    break;

  case 83: /* NAME2: TK_Sb  */
#line 407 "ASintactico.y"
                       {
                    NAMREP = (yyvsp[0].TEXT);
                }
#line 2335 "parser.cpp"
    break;

  case 84: /* NAME2: TK_File  */
#line 410 "ASintactico.y"
                         {
                    NAMREP = (yyvsp[0].TEXT);
                }
#line 2343 "parser.cpp"
    break;

  case 85: /* NAME2: TK_Ls  */
#line 413 "ASintactico.y"
                       {
                    NAMREP = (yyvsp[0].TEXT);
                }
#line 2351 "parser.cpp"
    break;


#line 2355 "parser.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken, &yylloc};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

