/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "analyse_syn.yacc"

#include <stdio.h>
#include "symboles.h"
#include <string.h>
#include <stdlib.h>
#include "jmp.h"
#include <readline/readline.h>
#include <readline/history.h>


//%type <type> nonTerminaux

void yyerror(const char *a);
FILE * fichier= NULL;
FILE * fichier_fin = NULL;
int compteur =0;
int num=1;




/* Line 268 of yacc.c  */
#line 93 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     tMAIN = 258,
     tPRINTF = 259,
     tINT = 260,
     tCONST = 261,
     tEXP = 262,
     tACC_OUVR = 263,
     tACC_FERM = 264,
     tADD = 265,
     tSUB = 266,
     tMUL = 267,
     tDIV = 268,
     tEQ = 269,
     tPAR_OUVR = 270,
     tPAR_FERM = 271,
     tVIRG = 272,
     tSPACE = 273,
     tTAB = 274,
     tPOINT_VIRGULE = 275,
     tELSE = 276,
     tIF = 277,
     tINF = 278,
     tSUP = 279,
     tOR = 280,
     tAND = 281,
     tNOT = 282,
     tWHILE = 283,
     tID = 284,
     tDECI = 285
   };
#endif
/* Tokens.  */
#define tMAIN 258
#define tPRINTF 259
#define tINT 260
#define tCONST 261
#define tEXP 262
#define tACC_OUVR 263
#define tACC_FERM 264
#define tADD 265
#define tSUB 266
#define tMUL 267
#define tDIV 268
#define tEQ 269
#define tPAR_OUVR 270
#define tPAR_FERM 271
#define tVIRG 272
#define tSPACE 273
#define tTAB 274
#define tPOINT_VIRGULE 275
#define tELSE 276
#define tIF 277
#define tINF 278
#define tSUP 279
#define tOR 280
#define tAND 281
#define tNOT 282
#define tWHILE 283
#define tID 284
#define tDECI 285




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 28 "analyse_syn.yacc"
char* chaine; int adresse; int decimal;


/* Line 293 of yacc.c  */
#line 193 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 205 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   126

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  43
/* YYNRULES -- Number of states.  */
#define YYNSTATES  78

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     6,    12,    14,    16,    18,    21,
      23,    25,    28,    30,    32,    34,    38,    41,    45,    48,
      49,    53,    57,    61,    65,    69,    73,    77,    79,    81,
      85,    89,    94,    98,   102,   106,   107,   114,   115,   120,
     121,   122,   130,   134
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      32,     0,    -1,    33,    -1,    -1,     3,    34,     8,    37,
       9,    -1,    41,    -1,    39,    -1,    43,    -1,    35,    20,
      -1,    44,    -1,    47,    -1,    36,    37,    -1,    36,    -1,
       5,    -1,     6,    -1,    38,    29,    40,    -1,    38,    29,
      -1,    17,    29,    40,    -1,    17,    29,    -1,    -1,    29,
      14,    42,    -1,    39,    14,    42,    -1,    42,    10,    42,
      -1,    42,    11,    42,    -1,    42,    12,    42,    -1,    42,
      13,    42,    -1,    15,    42,    16,    -1,    29,    -1,    30,
      -1,    42,    24,    42,    -1,    42,    23,    42,    -1,    42,
      14,    14,    42,    -1,    42,    25,    42,    -1,    42,    26,
      42,    -1,     4,    29,    16,    -1,    -1,    22,    15,    42,
      16,    45,    50,    -1,    -1,    44,    21,    46,    50,    -1,
      -1,    -1,    48,    28,    15,    42,    16,    49,    50,    -1,
       8,    37,     9,    -1,    36,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    31,    31,    32,    32,    94,    95,    96,    99,   100,
     101,   103,   104,   106,   107,   109,   110,   118,   119,   123,
     123,   130,   138,   154,   169,   183,   197,   198,   212,   224,
     236,   249,   261,   272,   284,   336,   336,   350,   350,   361,
     364,   361,   392,   393
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tMAIN", "tPRINTF", "tINT", "tCONST",
  "tEXP", "tACC_OUVR", "tACC_FERM", "tADD", "tSUB", "tMUL", "tDIV", "tEQ",
  "tPAR_OUVR", "tPAR_FERM", "tVIRG", "tSPACE", "tTAB", "tPOINT_VIRGULE",
  "tELSE", "tIF", "tINF", "tSUP", "tOR", "tAND", "tNOT", "tWHILE", "tID",
  "tDECI", "$accept", "input", "DEBUT", "$@1", "OPERATION", "INSTRUCTION",
  "INSTRUCTIONS", "TYPE", "DECLARATION", "DECLARATION2", "AFFECTATION",
  "EXPRESSION", "PRINTF", "IF", "$@2", "$@3", "WHILE", "$@4", "$@5",
  "BODY", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    31,    32,    34,    33,    35,    35,    35,    36,    36,
      36,    37,    37,    38,    38,    39,    39,    40,    40,    41,
      41,    41,    42,    42,    42,    42,    42,    42,    42,    42,
      42,    42,    42,    42,    43,    45,    44,    46,    44,    48,
      49,    47,    50,    50
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     5,     1,     1,     1,     2,     1,
       1,     2,     1,     1,     1,     3,     2,     3,     2,     0,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     3,
       3,     4,     3,     3,     3,     0,     6,     0,     4,     0,
       0,     7,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     2,     0,     1,    19,     0,    13,    14,
       0,     0,     0,    12,     0,     0,     6,     5,     7,     9,
      10,     0,     0,     0,     0,     8,    11,     4,    16,     0,
      37,     0,    34,     0,    27,    28,     0,    20,     0,    15,
      21,    19,     0,     0,     0,     0,     0,     0,     0,    35,
       0,     0,     0,     0,    18,    19,    43,    38,     0,    26,
      22,    23,    24,    25,     0,    19,    30,    29,    32,    33,
      17,     0,    40,    31,    36,    42,    19,    41
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    12,    13,    14,    15,    16,    39,
      17,    36,    18,    19,    65,    41,    20,    21,    76,    57
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -63
static const yytype_int8 yypact[] =
{
       1,   -63,     5,   -63,    -1,   -63,    39,   -21,   -63,   -63,
      -6,    -3,    -8,    11,     4,   -11,     6,   -63,   -63,    27,
     -63,    21,     9,    17,    17,   -63,   -63,   -63,    33,    17,
     -63,    36,   -63,    17,   -63,   -63,    59,   100,    24,   -63,
     100,    30,    17,    76,    17,    17,    17,    17,    40,   -63,
      17,    17,    17,    17,    33,    39,   -63,   -63,    93,   -63,
     100,   100,   100,   100,    17,    30,   100,   100,   100,   100,
     -63,    46,   -63,   100,   -63,   -63,    30,   -63
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -63,   -63,   -63,   -63,   -63,   -39,   -13,   -63,   -63,     2,
     -63,   -23,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -62
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -40
static const yytype_int8 yytable[] =
{
      26,    37,    56,    74,     1,     5,    40,     6,    22,    23,
      43,    24,    25,    27,    77,     7,     8,     9,    28,    58,
      29,    60,    61,    62,    63,    32,    56,    66,    67,    68,
      69,   -19,    33,    10,     7,     8,     9,    56,    55,   -39,
      11,    73,    71,     7,     8,     9,    34,    35,    30,    31,
      38,    42,    10,    54,    64,    75,    70,     0,   -39,    11,
       0,    10,     0,     0,     0,     0,     0,   -39,    11,    44,
      45,    46,    47,    48,     0,    49,     0,     0,     0,     0,
       0,     0,    50,    51,    52,    53,    44,    45,    46,    47,
      48,     0,    59,     0,     0,     0,     0,     0,     0,    50,
      51,    52,    53,    44,    45,    46,    47,    48,     0,    72,
      44,    45,    46,    47,    48,     0,    50,    51,    52,    53,
       0,     0,     0,    50,    51,    52,    53
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-63))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
      13,    24,    41,    65,     3,     0,    29,     8,    29,    15,
      33,    14,    20,     9,    76,     4,     5,     6,    29,    42,
      14,    44,    45,    46,    47,    16,    65,    50,    51,    52,
      53,    20,    15,    22,     4,     5,     6,    76,     8,    28,
      29,    64,    55,     4,     5,     6,    29,    30,    21,    28,
      17,    15,    22,    29,    14,     9,    54,    -1,    28,    29,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    28,    29,    10,
      11,    12,    13,    14,    -1,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    10,    11,    12,    13,
      14,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    10,    11,    12,    13,    14,    -1,    16,
      10,    11,    12,    13,    14,    -1,    23,    24,    25,    26,
      -1,    -1,    -1,    23,    24,    25,    26
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    32,    33,    34,     0,     8,     4,     5,     6,
      22,    29,    35,    36,    37,    38,    39,    41,    43,    44,
      47,    48,    29,    15,    14,    20,    37,     9,    29,    14,
      21,    28,    16,    15,    29,    30,    42,    42,    17,    40,
      42,    46,    15,    42,    10,    11,    12,    13,    14,    16,
      23,    24,    25,    26,    29,     8,    36,    50,    42,    16,
      42,    42,    42,    42,    14,    45,    42,    42,    42,    42,
      40,    37,    16,    42,    50,     9,    49,    50
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1806 of yacc.c  */
#line 32 "analyse_syn.yacc"
    {
					init_table();
					fichier= fopen("assembleur","w+");
					}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 36 "analyse_syn.yacc"
    { 
				compteur ++;
				fprintf(fichier,"%d : END\n",compteur);
				fclose(fichier);
				fichier=fopen("assembleur","r");
				fichier_fin=fopen("assembleur_final","w+");
				int size = 1024;
				char* ligne=malloc(sizeof(char)*size);
				int compteur_ligne=1;
				int type;
				int to;
				int to_wh;
				int type_wh;
				int adr_jmf_if;
				int adr_jmf_while;				
				while(fgets(ligne,size,fichier)!=NULL){
					to=get_to(compteur_ligne,&type,&adr_jmf_if);
					to_wh=get_while_to(compteur_ligne,&type_wh,&adr_jmf_while);
					if((to==-1)&&(to_wh==-1)){
						printf("2e passe : %d copie simple\n",compteur_ligne);
						fputs(ligne,fichier_fin);
					}else{
						printf("to : %d, to_wh : %d",to,to_wh);
						if(to != -1){
						switch (type){
							case JMP :
								printf("2e passe : %d : JMP %d\n",compteur_ligne,to);
								fputs("",fichier_fin);
								fprintf(fichier_fin,"%d : JMP %d\n",compteur_ligne,to);
								

								break;
							case JNE :
								printf("2e passe : JMF %d\n",to);
								fputs("",fichier_fin);
								fprintf(fichier_fin,"%d : JMF %d %d\n",compteur_ligne,adr_jmf_if,to);
								break;
						}
					}else{						
						printf("valeur type_wh : %d",type_wh);
						switch (type_wh){
							case JMP :
								printf("2e passe while : %d : JMP %d\n",compteur_ligne,to_wh);
								fputs("",fichier_fin);
								fprintf(fichier_fin,"%d : JMP %d\n",compteur_ligne,to_wh);	 
								break;
							case JNE :
								printf("2e passe while : JMF %d %d\n",adr_jmf_while,to_wh);
								fputs("",fichier_fin);
								fprintf(fichier_fin,"%d : JMF %d %d\n",compteur_ligne,adr_jmf_while,to_wh);
								break;
						}
					}
				}
					compteur_ligne++;
				}
				printf("FIN\n");}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 110 "analyse_syn.yacc"
    {
					add_symbole((yyvsp[(2) - (2)].chaine));
					//printf("DECLARATION SIMPLE\n\n");
					//print();

					(yyval.adresse)=get_adr_mem(get_next()-1);
				}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 123 "analyse_syn.yacc"
    {
				symbole * mon_symbole;
				compteur ++;
				fprintf(fichier,"%d : LOAD R1 %d\n",compteur,(yyvsp[(3) - (3)].adresse));
				compteur ++;
				fprintf(fichier,"%d : STORE %d R1\n",compteur,get_symbole((yyvsp[(1) - (3)].chaine),&mon_symbole));
				}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 130 "analyse_syn.yacc"
    {
				compteur ++;
				fprintf(fichier,"%d : LOAD R1 %d\n",compteur,(yyvsp[(3) - (3)].adresse));
				compteur ++;
				fprintf(fichier,"%d : STORE %d R1\n",compteur,(yyvsp[(1) - (3)].adresse));
				}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 138 "analyse_syn.yacc"
    {
					//	printf("%d : LOAD R1 %d\n",compteur, $1);
						compteur ++;
						fprintf(fichier,"%d : LOAD R1 %d\n",compteur, (yyvsp[(1) - (3)].adresse));
					//	printf("LOAD R2 %d\n", $3);
						compteur ++;
						fprintf(fichier,"%d : LOAD R2 %d\n",compteur, (yyvsp[(3) - (3)].adresse));
						//printf("ADD R1 R2 \n");
						compteur ++;
						fprintf(fichier,"%d : ADD R1 R2\n",compteur);
						compteur ++;
						fprintf(fichier,"%d : STORE %d R1\n",compteur,(yyvsp[(1) - (3)].adresse));
						enlever_symbole();			
						//print();
						(yyval.adresse)=(yyvsp[(1) - (3)].adresse);
						}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 154 "analyse_syn.yacc"
    {
						//printf("SOUSTRACTION\n");
						compteur ++;
						fprintf(fichier,"%d : LOAD R1 %d\n",compteur, (yyvsp[(1) - (3)].adresse));
						compteur ++;
						fprintf(fichier,"%d : LOAD R2 %d\n",compteur, (yyvsp[(3) - (3)].adresse));
						compteur ++;
						fprintf(fichier,"%d : SUB R1 R2\n",compteur);
						compteur ++;
						fprintf(fichier,"%d : STORE %d R1\n",compteur,(yyvsp[(1) - (3)].adresse));
						enlever_symbole();
						//print();
						(yyval.adresse)=(yyvsp[(1) - (3)].adresse);
						}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 169 "analyse_syn.yacc"
    {
					//printf("MULTIPLIER\n");
					compteur ++;
					fprintf(fichier,"%d : LOAD R1 %d\n",compteur, (yyvsp[(1) - (3)].adresse));
					compteur ++;
					fprintf(fichier,"%d : LOAD R2 %d\n",compteur, (yyvsp[(3) - (3)].adresse));
					compteur ++;
					fprintf(fichier,"%d : MUL R1 R2\n",compteur);
					compteur ++;
					fprintf(fichier,"%d : STORE %d R1\n",compteur,(yyvsp[(1) - (3)].adresse));
					enlever_symbole();
					//print();
					(yyval.adresse)=(yyvsp[(1) - (3)].adresse);
				}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 183 "analyse_syn.yacc"
    {
					//printf("DIVISER\n");
					compteur ++;
					fprintf(fichier,"%d : LOAD R1 %d\n",compteur, (yyvsp[(1) - (3)].adresse));
					compteur ++;
					fprintf(fichier,"%d : LOAD R2 %d\n",compteur, (yyvsp[(3) - (3)].adresse));
					compteur ++;
					fprintf(fichier,"%d : MUL R1 R2\n",compteur);
					compteur ++;
					fprintf(fichier,"%d : STORE %d R1\n",compteur,(yyvsp[(1) - (3)].adresse));
					enlever_symbole();
					//print();
					(yyval.adresse)=(yyvsp[(1) - (3)].adresse);
					}
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 198 "analyse_syn.yacc"
    {
					//printf("%s\n",$1);
					symbole * mon_symbole;
					symbole * temp;
					add_symbole("tmp");						
					//print();
					//printf("%d : LOAD R2 %d\n",compteur,get_symbole($1,&mon_symbole));
					compteur ++;
					fprintf(fichier,"%d : LOAD R1 %d\n",compteur,get_symbole((yyvsp[(1) - (1)].chaine),&mon_symbole));
					//printf("STORE %d R2\n\n",get_adr_mem(get_next()-1));
					compteur++;
					fprintf(fichier,"%d : STORE %d R1\n",compteur,get_adr_mem(get_next()-1));
					(yyval.adresse) = get_adr_mem(get_next()-1);
					}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 212 "analyse_syn.yacc"
    {
						symbole * mon_symbole;
						symbole * temp;
						add_symbole("tmp");						
						//print();
						//printf("AFC R1 %d\n",$1);
						compteur ++;
						fprintf(fichier,"%d : AFC R1 %d\n",compteur,(yyvsp[(1) - (1)].decimal));
						compteur ++;
						fprintf(fichier,"%d : STORE %d R1\n",compteur, get_adr_mem(get_next()-1));
						(yyval.adresse) = get_adr_mem(get_next()-1);
						}
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 224 "analyse_syn.yacc"
    {
				compteur++;
				fprintf(fichier,"%d : LOAD R1 %d\n",compteur,(yyvsp[(1) - (3)].adresse));
				compteur++;
				fprintf(fichier,"%d : LOAD R2 %d\n",compteur,(yyvsp[(3) - (3)].adresse));
				compteur++;
				fprintf(fichier,"%d : SUP R1 R2\n",compteur);
				compteur++;
				fprintf(fichier,"%d : STORE %d R1\n",compteur,(yyvsp[(1) - (3)].adresse));
				enlever_symbole();
				(yyval.adresse)=(yyvsp[(1) - (3)].adresse);
				}
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 237 "analyse_syn.yacc"
    {
				compteur++;
				fprintf(fichier,"%d : LOAD R1 %d\n",compteur,(yyvsp[(1) - (3)].adresse));
				compteur++;
				fprintf(fichier,"%d : LOAD R2 %d\n",compteur,(yyvsp[(3) - (3)].adresse));
				compteur++;
				fprintf(fichier,"%d : INF R1 R2\n",compteur);
				compteur++;
				fprintf(fichier,"%d : STORE %d R1 \n", compteur,(yyvsp[(1) - (3)].adresse));
				enlever_symbole();
				(yyval.adresse)=(yyvsp[(1) - (3)].adresse);
				}
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 249 "analyse_syn.yacc"
    {
				compteur++;
				fprintf(fichier,"%d : LOAD R1 %d\n",compteur,(yyvsp[(1) - (4)].adresse));
				compteur++;
				fprintf(fichier,"%d : LOAD R2 %d\n",compteur,(yyvsp[(4) - (4)].adresse));
				compteur++;
				fprintf(fichier,"%d : EQ R1 R2\n",compteur);
				compteur++;
				fprintf(fichier,"%d : STORE %d R1 \n", compteur,(yyvsp[(1) - (4)].adresse));
				enlever_symbole();
				(yyval.adresse)=(yyvsp[(1) - (4)].adresse);
				}
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 261 "analyse_syn.yacc"
    {
				compteur++;
				fprintf(fichier,"%d : LOAD R1 %d\n",compteur,(yyvsp[(1) - (3)].adresse));
				compteur++;
				fprintf(fichier,"%d : LOAD R2 %d\n",compteur,(yyvsp[(3) - (3)].adresse));
				compteur++;
				fprintf(fichier,"%d : OR R1 R2\n",compteur);
				compteur++;
				fprintf(fichier,"%d : STORE %d R1 \n", compteur,(yyvsp[(1) - (3)].adresse));
				enlever_symbole();
				(yyval.adresse)=(yyvsp[(1) - (3)].adresse);}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 272 "analyse_syn.yacc"
    {
				compteur++;
				fprintf(fichier,"%d : LOAD R1 %d\n",compteur,(yyvsp[(1) - (3)].adresse));
				compteur++;
				fprintf(fichier,"%d : LOAD R2 %d\n",compteur,(yyvsp[(3) - (3)].adresse));
				compteur++;
				fprintf(fichier,"%d : AND R1 R2\n",compteur);
				compteur++;
				fprintf(fichier,"%d : STORE %d R1 \n", compteur,(yyvsp[(1) - (3)].adresse));
				enlever_symbole();
				(yyval.adresse)=(yyvsp[(1) - (3)].adresse);}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 336 "analyse_syn.yacc"
    {

		compteur++;
		add_from(compteur,JNE,(yyvsp[(3) - (4)].adresse));
		fprintf(fichier,"%d : JMF %d \n",compteur,(yyvsp[(3) - (4)].adresse));
		 }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 341 "analyse_syn.yacc"
    {
		 	num++;
		 	print_tab();
		 	remplir(compteur+1,num);

		 	
		 	print_tab();

		 }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 350 "analyse_syn.yacc"
    {
		add_offset();	
		compteur++;
		add_from(compteur,JMP,-1);
		fprintf(fichier,"%d : JMP\n",compteur);		
		}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 356 "analyse_syn.yacc"
    {
			remplir(compteur+1,num);
			num++;
		}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 361 "analyse_syn.yacc"
    {
			printf(" Début while : %d \n", compteur);
			add_while(compteur+1,-1,JMP,-1);
			}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 364 "analyse_syn.yacc"
    {
			compteur ++;
			fprintf(fichier,"%d : JMF %d \n",compteur,(yyvsp[(4) - (5)].adresse));
			add_while(-1,compteur,JNE,(yyvsp[(4) - (5)].adresse));
			//print_tab_while();
	}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 369 "analyse_syn.yacc"
    {
		compteur++;
		fprintf(fichier,"%d : JMP\n",compteur);
		print_tab_while();
		remplir_while_to(compteur+1);
		remplir_while_from(compteur);
		print_tab_while();


		/*test
		add_while(-1,10,JNE);
		add_while(15,-1,JNE);
		remplir_while_from(15);
		remplir_while_to(10);
		print_tab_while();
		*/

	}
    break;



/* Line 1806 of yacc.c  */
#line 1916 "y.tab.c"
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
		      yytoken, &yylval);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 395 "analyse_syn.yacc"


void yyerror(const char *a){
	printf("%s",a);
}



