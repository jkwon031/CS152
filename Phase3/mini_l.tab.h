/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_MINI_L_TAB_H_INCLUDED
# define YY_YY_MINI_L_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FUNC = 258,
    BEG_PARAMS = 259,
    END_PARAMS = 260,
    BEG_LOC = 261,
    END_LOC = 262,
    BEG_BOD = 263,
    END_BOD = 264,
    INT = 265,
    ARR = 266,
    OF = 267,
    IF = 268,
    THEN = 269,
    END_IF = 270,
    ELSE = 271,
    WHILE = 272,
    DO = 273,
    BEG_LOOP = 274,
    END_LOOP = 275,
    READ = 276,
    WRITE = 277,
    AND = 278,
    OR = 279,
    NOT = 280,
    TRUE = 281,
    FALSE = 282,
    RETURN = 283,
    MINUS = 284,
    PLUS = 285,
    MULT = 286,
    DIV = 287,
    MOD = 288,
    EQ = 289,
    NEQ = 290,
    LT = 291,
    GT = 292,
    LTE = 293,
    GTE = 294,
    SEMICOLON = 295,
    COLON = 296,
    COMMA = 297,
    L_PAREN = 298,
    R_PAREN = 299,
    BEG_ARR = 300,
    END_ARR = 301,
    ASSIGN = 302,
    NUMBER = 303,
    IDENT = 304,
    CONT = 305,
    UMINUS = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "mini_l.y" /* yacc.c:1909  */

  double dval;
  int ival;
  char* sval;
  Function* func;
  FunctionList*	func_list;
  Statement* stat;
  StatementList* stat_list;
  Declaration* dec;
  DeclarationList* decs;
  Variable* var;
  VarList* vars;
  
  Expr* expr;

#line 122 "mini_l.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINI_L_TAB_H_INCLUDED  */
