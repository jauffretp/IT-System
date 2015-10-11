/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
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

/* Line 2068 of yacc.c  */
#line 28 "analyse_syn.yacc"
char* chaine; int adresse; int decimal;


/* Line 2068 of yacc.c  */
#line 114 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


