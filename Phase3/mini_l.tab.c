/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "mini_l.y" /* yacc.c:339  */
 

#include <stdio.h>
#include <stdlib.h>
#include "gen.hpp"

 void yyerror(const char *msg);
 
 extern int numLines;
 extern int idenIndex;
 extern ASTNode* root;

 FILE * yyin;

#line 81 "mini_l.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "mini_l.tab.h".  */
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
#line 16 "mini_l.y" /* yacc.c:355  */

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

#line 189 "mini_l.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINI_L_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 206 "mini_l.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   137

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  132

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    56,    56,    59,    60,    63,    67,    68,    72,    74,
      76,    81,    82,    85,    86,    87,    88,    89,    90,    91,
      92,    95,    98,   100,   104,   108,   112,   115,   118,   121,
     124,   125,   128,   129,   132,   133,   136,   137,   138,   139,
     142,   143,   144,   145,   146,   147,   150,   151,   152,   155,
     156,   157,   158,   161,   162,   165,   166,   167,   170,   172,
     175,   176,   177,   181,   182,   186,   187
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNC", "BEG_PARAMS", "END_PARAMS",
  "BEG_LOC", "END_LOC", "BEG_BOD", "END_BOD", "INT", "ARR", "OF", "IF",
  "THEN", "END_IF", "ELSE", "WHILE", "DO", "BEG_LOOP", "END_LOOP", "READ",
  "WRITE", "AND", "OR", "NOT", "TRUE", "FALSE", "RETURN", "MINUS", "PLUS",
  "MULT", "DIV", "MOD", "EQ", "NEQ", "LT", "GT", "LTE", "GTE", "SEMICOLON",
  "COLON", "COMMA", "L_PAREN", "R_PAREN", "BEG_ARR", "END_ARR", "ASSIGN",
  "NUMBER", "IDENT", "CONT", "UMINUS", "$accept", "program",
  "function_list", "function", "declarations", "declaration",
  "statement_list", "statement", "assign_stmt", "if_stmt", "while_stmt",
  "do_while_stmt", "read_stmt", "write_stmt", "cont_stmt", "return_stmt",
  "bool_exp", "r_and_exp", "r_exp", "all_b_exp", "comp", "exp", "m_exp",
  "c_exp", "term", "um_term", "t_term", "var", "vars", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

#define YYPACT_NINF -61

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-61)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -2,   -33,    19,   -61,    -2,   -17,   -61,   -61,    24,   -11,
     -31,    27,    31,    32,   -11,    61,   -11,   -61,    30,   -61,
     -11,   -61,    35,    77,    45,    91,    88,    -4,    99,     4,
       4,    92,    64,    64,    25,    65,   -61,   103,    74,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,    68,   -61,    37,
     -61,   -61,   -23,     4,   -61,    13,   102,    93,    95,   -61,
      69,    21,     3,   -61,   -61,   -61,   100,    -4,    78,   -61,
     -61,    25,   -61,    25,   -61,    -4,    25,   -61,   -61,    79,
      58,    33,    -4,     4,     4,   -61,   -61,   -61,   -61,   -61,
     -61,    25,    25,    25,    25,    25,    25,    -4,   101,    64,
      80,    76,   -61,   -61,   -61,   -61,   -61,    83,    82,    63,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   107,   111,
     -61,   -61,    25,   -61,   -61,    -4,   -61,     4,   -61,   114,
     -61,   -61
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     3,     0,     1,     4,     0,     6,
       0,     0,     0,     0,     0,     0,     6,     9,     0,     8,
       6,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    63,    28,     0,     0,    13,
      14,    15,    16,    17,    18,    19,    20,     0,    10,     0,
      37,    38,     0,     0,    61,    63,     0,    30,    32,    34,
       0,    46,    49,    55,    59,    60,     0,     0,    65,    26,
      27,     0,    29,     0,     5,    11,     0,    35,    58,     0,
       0,     0,     0,     0,     0,    40,    41,    42,    43,    44,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    21,    39,    62,    56,    53,     0,     0,
      31,    33,    36,    48,    47,    50,    51,    52,     0,     0,
      66,    64,     0,    57,    22,     0,    24,     0,    54,     0,
      25,    23
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -61,   -61,   126,   -61,    -8,   117,   -60,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -26,    48,   -61,    84,
     -61,   -32,    -7,    12,   -61,   -61,    85,   -27,   -30
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    11,    12,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    56,    57,    58,    59,
      91,    60,    61,   108,    62,    63,    64,    65,    69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      47,     1,    72,    70,    66,    68,    68,    98,    21,    29,
      13,    14,    23,    30,    31,   102,     5,    32,    33,     6,
      71,    80,   109,     8,    34,    54,    35,    79,     9,    49,
      50,    51,    15,    52,    94,    95,    96,   118,    10,   100,
      47,   101,    17,    18,   103,    35,    36,    53,    47,   107,
      92,    93,    54,    55,    52,    47,    81,   110,    73,   112,
     113,   114,    52,    50,    51,   129,    52,    20,    71,   120,
      47,    16,    68,    54,    55,    22,    71,   106,   124,   125,
      53,    54,    55,    24,    25,    54,    55,   115,   116,   117,
     107,    26,    85,    86,    87,    88,    89,    90,    47,    27,
      28,   130,   105,    85,    86,    87,    88,    89,    90,    48,
      73,    67,    74,    35,    75,    76,    82,    83,    84,    97,
      99,   119,   121,   104,   105,   122,   123,   126,   127,   131,
       7,    19,   111,    77,   128,     0,     0,    78
};

static const yytype_int8 yycheck[] =
{
      27,     3,    34,    33,    30,    32,    33,    67,    16,    13,
      41,    42,    20,    17,    18,    75,    49,    21,    22,     0,
      43,    53,    82,    40,    28,    48,    49,    53,     4,    25,
      26,    27,     5,    29,    31,    32,    33,    97,    49,    71,
      67,    73,    10,    11,    76,    49,    50,    43,    75,    81,
      29,    30,    48,    49,    29,    82,    43,    83,    45,    91,
      92,    93,    29,    26,    27,   125,    29,     6,    43,    99,
      97,    40,    99,    48,    49,    45,    43,    44,    15,    16,
      43,    48,    49,    48,     7,    48,    49,    94,    95,    96,
     122,    46,    34,    35,    36,    37,    38,    39,   125,     8,
      12,   127,    44,    34,    35,    36,    37,    38,    39,    10,
      45,    19,     9,    49,    40,    47,    14,    24,    23,    19,
      42,    20,    46,    44,    44,    42,    44,    20,    17,    15,
       4,    14,    84,    49,   122,    -1,    -1,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    53,    54,    55,    49,     0,    54,    40,     4,
      49,    56,    57,    41,    42,     5,    40,    10,    11,    57,
       6,    56,    45,    56,    48,     7,    46,     8,    12,    13,
      17,    18,    21,    22,    28,    49,    50,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    79,    10,    25,
      26,    27,    29,    43,    48,    49,    68,    69,    70,    71,
      73,    74,    76,    77,    78,    79,    68,    19,    79,    80,
      80,    43,    73,    45,     9,    40,    47,    71,    78,    68,
      73,    43,    14,    24,    23,    34,    35,    36,    37,    38,
      39,    72,    29,    30,    31,    32,    33,    19,    58,    42,
      73,    73,    58,    73,    44,    44,    44,    73,    75,    58,
      68,    69,    73,    73,    73,    74,    74,    74,    58,    20,
      80,    46,    42,    44,    15,    16,    20,    17,    75,    58,
      68,    15
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    56,    56,    57,    57,
      57,    58,    58,    59,    59,    59,    59,    59,    59,    59,
      59,    60,    61,    61,    62,    63,    64,    65,    66,    67,
      68,    68,    69,    69,    70,    70,    71,    71,    71,    71,
      72,    72,    72,    72,    72,    72,    73,    73,    73,    74,
      74,    74,    74,    75,    75,    76,    76,    76,    77,    77,
      78,    78,    78,    79,    79,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,    12,     0,     3,     3,     3,
       8,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     5,     7,     5,     6,     2,     2,     1,     2,
       1,     3,     1,     3,     1,     2,     3,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       3,     3,     3,     1,     3,     1,     3,     4,     2,     1,
       1,     1,     3,     1,     4,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 56 "mini_l.y" /* yacc.c:1646  */
    { (yyval.func_list) = (yyvsp[0].func_list); root = (yyval.func_list); }
#line 1378 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 59 "mini_l.y" /* yacc.c:1646  */
    { (yyval.func_list) = new FunctionList(); (yyval.func_list)->front((yyvsp[0].func)); }
#line 1384 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 60 "mini_l.y" /* yacc.c:1646  */
    { (yyval.func_list) = (yyvsp[0].func_list); (yyvsp[0].func_list)->front((yyvsp[-1].func)); }
#line 1390 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 64 "mini_l.y" /* yacc.c:1646  */
    { (yyval.func) = new DefineFunction((yyvsp[-10].sval), (yyvsp[-7].decs), (yyvsp[-4].decs), (yyvsp[-1].stat_list)); }
#line 1396 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 67 "mini_l.y" /* yacc.c:1646  */
    { }
#line 1402 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 69 "mini_l.y" /* yacc.c:1646  */
    { (yyval.decs) = (yyvsp[0].decs); (yyval.decs)->front((yyvsp[-2].dec)); }
#line 1408 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 73 "mini_l.y" /* yacc.c:1646  */
    {(yyval.dec) = (yyvsp[0].dec); (yyval.dec)->front((yyvsp[-2].sval));}
#line 1414 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 75 "mini_l.y" /* yacc.c:1646  */
    {(yyval.dec) = new Declaration((yyvsp[-2].sval));}
#line 1420 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 77 "mini_l.y" /* yacc.c:1646  */
    {/* printf("declaration -> d_ident COLON array INT\n"); */
									(yyval.dec) = new Declaration((yyvsp[-7].sval), (yyvsp[-3].ival));}
#line 1427 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 81 "mini_l.y" /* yacc.c:1646  */
    { (yyval.stat_list) = new StatementList((yyvsp[-1].stat)); }
#line 1433 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 82 "mini_l.y" /* yacc.c:1646  */
    {(yyval.stat_list) =  (yyvsp[0].stat_list); (yyval.stat_list)->front((yyvsp[-2].stat));}
#line 1439 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 85 "mini_l.y" /* yacc.c:1646  */
    { (yyval.stat) = (yyvsp[0].stat); }
#line 1445 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 86 "mini_l.y" /* yacc.c:1646  */
    { (yyval.stat) = (yyvsp[0].stat); }
#line 1451 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 87 "mini_l.y" /* yacc.c:1646  */
    { (yyval.stat) = (yyvsp[0].stat); }
#line 1457 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 88 "mini_l.y" /* yacc.c:1646  */
    { (yyval.stat) = (yyvsp[0].stat); }
#line 1463 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 89 "mini_l.y" /* yacc.c:1646  */
    { (yyval.stat) = (yyvsp[0].stat); }
#line 1469 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 90 "mini_l.y" /* yacc.c:1646  */
    { (yyval.stat) = (yyvsp[0].stat); }
#line 1475 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 91 "mini_l.y" /* yacc.c:1646  */
    { (yyval.stat) = (yyvsp[0].stat); }
#line 1481 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 92 "mini_l.y" /* yacc.c:1646  */
    { (yyval.stat) = (yyvsp[0].stat); }
#line 1487 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 95 "mini_l.y" /* yacc.c:1646  */
    {(yyval.stat) = new AssignStatement((yyvsp[-2].var), (yyvsp[0].expr))}
#line 1493 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 99 "mini_l.y" /* yacc.c:1646  */
    { (yyval.stat) = new IfStatement((yyvsp[-3].expr), (yyvsp[-1].stat_list)); }
#line 1499 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 101 "mini_l.y" /* yacc.c:1646  */
    { (yyval.stat) = new IfElseStatement((yyvsp[-5].expr), (yyvsp[-3].stat_list), (yyvsp[-1].stat_list)); }
#line 1505 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 105 "mini_l.y" /* yacc.c:1646  */
    { (yyval.stat) = new WhileStatement((yyvsp[-3].expr), (yyvsp[-1].stat_list)); }
#line 1511 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 109 "mini_l.y" /* yacc.c:1646  */
    { (yyval.stat) = new DoWhileStatement((yyvsp[-3].stat_list), (yyvsp[0].expr)); }
#line 1517 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 112 "mini_l.y" /* yacc.c:1646  */
    { (yyval.stat) = new ReadStatement((yyvsp[0].vars)); }
#line 1523 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 115 "mini_l.y" /* yacc.c:1646  */
    { (yyval.stat) = new WriteStatment((yyvsp[0].vars)); }
#line 1529 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 118 "mini_l.y" /* yacc.c:1646  */
    { (yyval.stat) = new ContStatement((yyvsp[0].sval)); }
#line 1535 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 121 "mini_l.y" /* yacc.c:1646  */
    { (yyval.stat) = new ReturnStatement((yyvsp[0].expr)); }
#line 1541 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 124 "mini_l.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1547 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 125 "mini_l.y" /* yacc.c:1646  */
    {(yyval.expr) = new Expr((yyvsp[-2].expr), "||", (yyvsp[0].expr)); }
#line 1553 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 128 "mini_l.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1559 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 129 "mini_l.y" /* yacc.c:1646  */
    { (yyval.expr) = new Expr((yyvsp[-2].expr), "&&", (yyvsp[0].expr)); }
#line 1565 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 132 "mini_l.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1571 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 133 "mini_l.y" /* yacc.c:1646  */
    { /*printf("r_exp -> NOT all_b_exp\n");*/ }
#line 1577 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 136 "mini_l.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-2].expr); }
#line 1583 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 137 "mini_l.y" /* yacc.c:1646  */
    { (yyval.expr) = "true"; }
#line 1589 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 138 "mini_l.y" /* yacc.c:1646  */
    { (yyval.expr) = "false"; }
#line 1595 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 139 "mini_l.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 1601 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 142 "mini_l.y" /* yacc.c:1646  */
    {(yyval.expr) = "==";}
#line 1607 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 143 "mini_l.y" /* yacc.c:1646  */
    {(yyval.expr) = "!=";}
#line 1613 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 144 "mini_l.y" /* yacc.c:1646  */
    {(yyval.expr) = "<";}
#line 1619 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 145 "mini_l.y" /* yacc.c:1646  */
    {(yyval.expr) = ">";}
#line 1625 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 146 "mini_l.y" /* yacc.c:1646  */
    {(yyval.expr) = "<=";}
#line 1631 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 147 "mini_l.y" /* yacc.c:1646  */
    {(yyval.expr) = ">=";}
#line 1637 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 150 "mini_l.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1643 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 151 "mini_l.y" /* yacc.c:1646  */
    { (yyval.expr) = new Expr((yyvsp[-2].expr), "+", (yyvsp[0].expr)); }
#line 1649 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 152 "mini_l.y" /* yacc.c:1646  */
    { (yyval.expr) = new Expr((yyvsp[-2].expr), "-", (yyvsp[0].expr)); }
#line 1655 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 155 "mini_l.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 1661 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 156 "mini_l.y" /* yacc.c:1646  */
    { (yyval.expr) = new Expr((yyvsp[-2].expr), "*", (yyvsp[0].expr)); }
#line 1667 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 157 "mini_l.y" /* yacc.c:1646  */
    { (yyval.expr) = new Expr((yyvsp[-2].expr), "/", (yyvsp[0].expr)); }
#line 1673 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 158 "mini_l.y" /* yacc.c:1646  */
    { (yyval.expr) = new Expr((yyvsp[-2].expr), "%", (yyvsp[0].expr)); }
#line 1679 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 161 "mini_l.y" /* yacc.c:1646  */
    {(yyval.expr) = new ExprList(); (yyval.expr)->front((yyvsp[0].expr));}
#line 1685 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 162 "mini_l.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr); (yyval.expr)->front((yyvsp[-2].expr)); }
#line 1691 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 165 "mini_l.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 1697 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 166 "mini_l.y" /* yacc.c:1646  */
    {/*$$ = new FunctionCall();*/}
#line 1703 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 167 "mini_l.y" /* yacc.c:1646  */
    {/* printf("term -> ident L_PAREN c_exp R_PAREN\n");*/ }
#line 1709 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 171 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1715 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 172 "mini_l.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 1721 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 175 "mini_l.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].var);}
#line 1727 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 176 "mini_l.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].ival);}
#line 1733 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 177 "mini_l.y" /* yacc.c:1646  */
    {/* printf();*/
				 }
#line 1740 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 181 "mini_l.y" /* yacc.c:1646  */
    {(yyval.var) = new Variable((yyvsp[0].sval));}
#line 1746 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 183 "mini_l.y" /* yacc.c:1646  */
    { (yyval.var) = new Var_Arr((yyvsp[-3].sval), (yyvsp[-1].expr)); }
#line 1752 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 186 "mini_l.y" /* yacc.c:1646  */
    {(yyval.vars) = new VarList(); VarList.append((yyvsp[0].var)); VarList.front((yyvsp[0].var)); }
#line 1758 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 187 "mini_l.y" /* yacc.c:1646  */
    { (yyval.vars) =  (yyvsp[0].vars); (yyval.vars)->front((yyvsp[-2].var));}
#line 1764 "mini_l.tab.c" /* yacc.c:1646  */
    break;


#line 1768 "mini_l.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 189 "mini_l.y" /* yacc.c:1906  */


ASTNode* root;

int main(int argc, char **argv) {
   if (argc > 1) {
      yyin = fopen(argv[1], "r");
      if (yyin == NULL){
         printf("syntax: %s filename\n", argv[0]);
      }//end if
   }//end if
   yyparse(); // Calls yylex() for tokens.
   std::string mil = root->gencode();
   std::cout << mil;
   return 0;
}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", numLines, idenIndex, msg);
}
