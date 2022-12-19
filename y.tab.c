/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     KEYWRD_VOID = 258,
     KEYWRD_INT = 259,
     KEYWRD_CHAR = 260,
     KEYWRD_IF = 261,
     KEYWRD_ELSE = 262,
     KEYWRD_FOR = 263,
     KEYWRD_RETURN = 264,
     INT_CONST = 265,
     STRING_CONST = 266,
     CONST = 267,
     ID = 268,
     LT_EQUAL = 269,
     GT_EQUAL = 270,
     EQUAL = 271,
     NOT_EQUAL = 272,
     LOGIC_AND = 273,
     LOGIC_OR = 274,
     ARW_PTR = 275
   };
#endif
/* Tokens.  */
#define KEYWRD_VOID 258
#define KEYWRD_INT 259
#define KEYWRD_CHAR 260
#define KEYWRD_IF 261
#define KEYWRD_ELSE 262
#define KEYWRD_FOR 263
#define KEYWRD_RETURN 264
#define INT_CONST 265
#define STRING_CONST 266
#define CONST 267
#define ID 268
#define LT_EQUAL 269
#define GT_EQUAL 270
#define EQUAL 271
#define NOT_EQUAL 272
#define LOGIC_AND 273
#define LOGIC_OR 274
#define ARW_PTR 275




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

#include <string.h>
#include <stdio.h>
#include <iostream>
#include "parser.h"

extern int yylex();
void yyerror(char *s);
struct quadarray* array[NSYMS]; // Store of Quads
int quadPtr = 0; // Index of next quad


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 13 "parser.y"
{ // Placeholder for a value
	struct symtab *symp;
    int intval;
}
/* Line 193 of yacc.c.  */
#line 153 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 166 "y.tab.c"

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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   156

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNRULES -- Number of states.  */
#define YYNSTATES  149

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   275

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,     2,     2,    25,    36,     2,
      31,    32,    23,    21,    35,    22,     2,    24,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    29,    38,
      26,    30,    27,    28,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    33,     2,    34,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,     2,    40,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    20,    25,
      29,    31,    32,    34,    38,    40,    43,    45,    47,    49,
      51,    53,    55,    59,    63,    67,    69,    73,    77,    79,
      83,    87,    91,    95,    97,   101,   105,   107,   111,   113,
     117,   119,   125,   127,   131,   133,   137,   139,   143,   144,
     146,   148,   150,   153,   155,   160,   165,   167,   168,   170,
     172,   176,   180,   183,   184,   186,   188,   190,   192,   194,
     196,   200,   202,   203,   205,   208,   210,   212,   214,   217,
     218,   224,   232,   242,   245,   247,   249,   256,   259,   260,
     262,   266,   268
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      78,     0,    -1,    13,    -1,    82,    -1,    11,    -1,    31,
      56,    32,    -1,    42,    -1,    43,    33,    56,    34,    -1,
      43,    31,    44,    32,    -1,    43,    20,    13,    -1,    45,
      -1,    -1,    55,    -1,    45,    35,    55,    -1,    43,    -1,
      47,    46,    -1,    36,    -1,    23,    -1,    21,    -1,    22,
      -1,    37,    -1,    46,    -1,    48,    23,    46,    -1,    48,
      24,    46,    -1,    48,    25,    46,    -1,    48,    -1,    49,
      21,    48,    -1,    49,    22,    48,    -1,    49,    -1,    50,
      26,    49,    -1,    50,    27,    49,    -1,    50,    14,    49,
      -1,    50,    15,    49,    -1,    50,    -1,    51,    16,    50,
      -1,    51,    17,    50,    -1,    51,    -1,    52,    18,    51,
      -1,    52,    -1,    53,    19,    52,    -1,    53,    -1,    53,
      28,    56,    29,    54,    -1,    54,    -1,    46,    30,    55,
      -1,    55,    -1,    59,    58,    38,    -1,    60,    -1,    60,
      30,    67,    -1,    -1,     3,    -1,     4,    -1,     5,    -1,
      62,    61,    -1,    13,    -1,    13,    33,    10,    34,    -1,
      13,    33,    64,    34,    -1,    63,    -1,    -1,    23,    -1,
      65,    -1,    64,    35,    65,    -1,    59,    62,    66,    -1,
      13,    38,    -1,    -1,    55,    -1,    73,    -1,    69,    -1,
      75,    -1,    76,    -1,    77,    -1,    39,    70,    40,    -1,
      71,    -1,    -1,    72,    -1,    71,    72,    -1,    57,    -1,
      68,    -1,    74,    -1,    56,    38,    -1,    -1,     6,    31,
      56,    32,    68,    -1,     6,    31,    56,    32,    68,     7,
      68,    -1,     8,    31,    74,    38,    74,    38,    74,    32,
      68,    -1,     9,    74,    -1,    79,    -1,    57,    -1,    59,
      60,    31,    80,    32,    69,    -1,    81,    38,    -1,    -1,
      57,    -1,    81,    57,    38,    -1,    10,    -1,    12,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    51,    51,    53,    55,    57,    61,    63,    65,    67,
      71,    74,    77,    79,    83,    85,    89,    94,    96,    98,
     100,   104,   106,   108,   110,   114,   116,   118,   122,   124,
     126,   128,   130,   134,   136,   138,   142,   144,   148,   150,
     154,   156,   160,   162,   166,   170,   174,   176,   181,   182,
     184,   186,   190,   194,   196,   198,   202,   204,   207,   211,
     213,   217,   221,   223,   226,   230,   232,   234,   236,   238,
     242,   246,   248,   251,   253,   257,   259,   263,   267,   269,
     272,   274,   278,   282,   286,   288,   292,   296,   298,   301,
     303,   307,   312
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KEYWRD_VOID", "KEYWRD_INT",
  "KEYWRD_CHAR", "KEYWRD_IF", "KEYWRD_ELSE", "KEYWRD_FOR", "KEYWRD_RETURN",
  "INT_CONST", "STRING_CONST", "CONST", "ID", "LT_EQUAL", "GT_EQUAL",
  "EQUAL", "NOT_EQUAL", "LOGIC_AND", "LOGIC_OR", "ARW_PTR", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'<'", "'>'", "'?'", "':'", "'='", "'('", "')'",
  "'['", "']'", "','", "'&'", "'!'", "';'", "'{'", "'}'", "$accept",
  "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "multiplicative_expression",
  "additive_expression", "relational_expression", "equality_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "expression",
  "declaration", "init_declarator", "type_specifier", "declarator",
  "direct_declarator", "pointer_opt", "pointer", "parameter_list",
  "parameter_declaration", "id_opt", "initializer", "statement",
  "compound_statement", "block_item_list_opt", "block_item_list",
  "block_item", "expression_statement", "expression_opt",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "function_definition", "declaration_list_opt",
  "declaration_list", "constant_expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    43,    45,    42,    47,    37,    60,    62,    63,    58,
      61,    40,    41,    91,    93,    44,    38,    33,    59,   123,
     125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    42,    42,    42,    43,    43,    43,    43,
      44,    44,    45,    45,    46,    46,    47,    47,    47,    47,
      47,    48,    48,    48,    48,    49,    49,    49,    50,    50,
      50,    50,    50,    51,    51,    51,    52,    52,    53,    53,
      54,    54,    55,    55,    56,    57,    58,    58,    59,    59,
      59,    59,    60,    61,    61,    61,    62,    62,    63,    64,
      64,    65,    66,    66,    67,    68,    68,    68,    68,    68,
      69,    70,    70,    71,    71,    72,    72,    73,    74,    74,
      75,    75,    76,    77,    78,    78,    79,    80,    80,    81,
      81,    82,    82
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     4,     3,
       1,     0,     1,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     3,     1,     3,     0,     1,
       1,     1,     2,     1,     4,     4,     1,     0,     1,     1,
       3,     3,     2,     0,     1,     1,     1,     1,     1,     1,
       3,     1,     0,     1,     2,     1,     1,     1,     2,     0,
       5,     7,     9,     2,     1,     1,     6,     2,     0,     1,
       3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      48,    49,    50,    51,    85,    57,     0,    84,    58,     0,
      46,     0,    56,     1,    45,     0,    48,    53,    52,    91,
       4,    92,     2,    18,    19,    17,     0,    16,    20,     6,
      14,    21,     0,    25,    28,    33,    36,    38,    40,    42,
      64,    47,     3,    89,    57,     0,    48,    48,    44,     0,
       0,    11,     0,     0,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,    87,     0,     0,    57,     0,    59,     5,     9,     0,
      10,    12,     0,    43,    22,    23,    24,    21,    26,    27,
      31,    32,    29,    30,    34,    35,    37,    39,     0,    72,
      86,    90,    54,    63,    55,    48,     8,     0,     7,     0,
       0,     0,    79,     0,    75,    76,    66,     0,    71,    73,
      65,    77,    67,    68,    69,     0,    61,    60,    13,    41,
       0,    79,    83,    78,    70,    74,    62,     0,     0,    79,
      79,    80,     0,    79,    79,    81,     0,    79,    82
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    29,    30,    79,    80,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    48,   113,   114,     9,    44,    10,
      18,    11,    12,    75,    76,   126,    41,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,     6,     7,    45,
      46,    42
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -109
static const yytype_int16 yypact[] =
{
      30,  -109,  -109,  -109,  -109,   -15,    12,  -109,  -109,   -11,
      47,    11,  -109,  -109,  -109,    63,     6,    33,  -109,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,    63,  -109,  -109,  -109,
     -17,    67,    63,    18,    24,     3,    72,    83,    -6,  -109,
    -109,  -109,  -109,  -109,   -15,    76,     2,    16,  -109,    87,
     112,    63,    63,    63,  -109,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    96,
      88,  -109,    90,    95,   -15,    57,  -109,  -109,  -109,    98,
      99,  -109,    97,  -109,  -109,  -109,  -109,  -109,    18,    18,
      24,    24,    24,    24,     3,     3,    72,    83,   104,    59,
    -109,  -109,  -109,   122,  -109,    30,  -109,    63,  -109,    63,
     105,   108,    63,   103,  -109,  -109,  -109,   102,    59,  -109,
    -109,  -109,  -109,  -109,  -109,   106,  -109,  -109,  -109,  -109,
      63,    63,  -109,  -109,  -109,  -109,  -109,   111,   107,   101,
      63,   139,   109,   101,    63,  -109,   116,   101,  -109
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -109,  -109,  -109,  -109,  -109,    -7,  -109,    45,    55,    56,
      84,    82,  -109,    42,   -14,   -24,    15,  -109,     0,   110,
    -109,    78,  -109,  -109,    48,  -109,  -109,   -60,    85,  -109,
    -109,    38,  -109,  -108,  -109,  -109,  -109,  -109,  -109,  -109,
    -109,  -109
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -89
static const yytype_int16 yytable[] =
{
       5,    40,    49,    50,   132,     1,     2,     3,     8,     1,
       2,     3,    13,    67,    51,     4,    52,    60,    61,     1,
       2,     3,    68,   138,    17,    54,    73,    14,    82,    62,
      63,    43,   142,     1,     2,     3,   146,    81,   -88,    83,
      71,    55,    56,    57,    98,    58,    59,    74,    84,    85,
      86,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    72,     1,     2,     3,   110,    47,   111,   112,    19,
      20,    21,    22,    19,    20,    21,    22,    15,    16,   141,
      23,    24,    25,   145,    23,    24,    25,   148,    64,    65,
      26,   104,   105,   128,    26,    27,    28,    53,    99,    27,
      28,    66,    87,    88,    89,    74,   137,   110,    70,   111,
     112,    19,    20,    21,    22,    90,    91,    92,    93,    77,
      94,    95,    23,    24,    25,    78,    15,    99,   101,   102,
     106,   108,    26,   109,   107,   125,   130,    27,    28,   131,
      99,   133,   134,   139,   136,   140,   143,   144,   147,    97,
      96,   129,   103,   127,    69,   100,   135
};

static const yytype_uint8 yycheck[] =
{
       0,    15,    26,    20,   112,     3,     4,     5,    23,     3,
       4,     5,     0,    19,    31,     0,    33,    14,    15,     3,
       4,     5,    28,   131,    13,    32,    10,    38,    52,    26,
      27,    16,   140,     3,     4,     5,   144,    51,    32,    53,
      38,    23,    24,    25,    68,    21,    22,    47,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    46,     3,     4,     5,     6,    33,     8,     9,    10,
      11,    12,    13,    10,    11,    12,    13,    30,    31,   139,
      21,    22,    23,   143,    21,    22,    23,   147,    16,    17,
      31,    34,    35,   107,    31,    36,    37,    30,    39,    36,
      37,    18,   109,    58,    59,   105,   130,     6,    32,     8,
       9,    10,    11,    12,    13,    60,    61,    62,    63,    32,
      64,    65,    21,    22,    23,    13,    30,    39,    38,    34,
      32,    34,    31,    29,    35,    13,    31,    36,    37,    31,
      39,    38,    40,    32,    38,    38,     7,    38,    32,    67,
      66,   109,    74,   105,    44,    70,   118
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    57,    59,    78,    79,    23,    58,
      60,    62,    63,     0,    38,    30,    31,    13,    61,    10,
      11,    12,    13,    21,    22,    23,    31,    36,    37,    42,
      43,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    67,    82,    57,    59,    80,    81,    33,    55,    56,
      20,    31,    33,    30,    46,    23,    24,    25,    21,    22,
      14,    15,    26,    27,    16,    17,    18,    19,    28,    60,
      32,    38,    57,    10,    59,    64,    65,    32,    13,    44,
      45,    55,    56,    55,    46,    46,    46,    46,    48,    48,
      49,    49,    49,    49,    50,    50,    51,    52,    56,    39,
      69,    38,    34,    62,    34,    35,    32,    35,    34,    29,
       6,     8,     9,    56,    57,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    13,    66,    65,    55,    54,
      31,    31,    74,    38,    40,    72,    38,    56,    74,    32,
      38,    68,    74,     7,    38,    68,    74,    32,    68
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 2:
#line 52 "parser.y"
    {(yyval.symp) = (yyvsp[(1) - (1)].symp), printf("primary_expression -> ID\n");}
    break;

  case 3:
#line 54 "parser.y"
    {(yyval.symp) = (yyvsp[(1) - (1)].symp), printf("primary_expression -> constant_expression\n");}
    break;

  case 4:
#line 56 "parser.y"
    {(yyval.symp) = (yyvsp[(1) - (1)].symp), printf("primary_expression -> STRING_CONST");}
    break;

  case 5:
#line 58 "parser.y"
    {(yyval.symp) = (yyvsp[(2) - (3)].symp), printf("primary_expression -> '(' expression ')");}
    break;

  case 6:
#line 62 "parser.y"
    {(yyval.symp) = (yyvsp[(1) - (1)].symp), printf("postfix_expression -> primary_expression\n");}
    break;

  case 7:
#line 64 "parser.y"
    { printf("postfix_expression -> postfix_expression '[' expression ']'\n");}
    break;

  case 8:
#line 66 "parser.y"
    {printf("postfix_expression -> postfix_expression '(' argument_expression_list_opt ')'\n");}
    break;

  case 9:
#line 68 "parser.y"
    {printf("postfix_expression -> postfix_expression ARW_PTR ID\n");}
    break;

  case 10:
#line 72 "parser.y"
    {(yyval.symp) = (yyvsp[(1) - (1)].symp), printf("argument_expression_list_opt -> argument_expression_list\n");}
    break;

  case 11:
#line 74 "parser.y"
    {(yyval.symp) = NULL, printf("argument_expression_list_opt -> %epmty\n");}
    break;

  case 12:
#line 78 "parser.y"
    {(yyval.symp) = (yyvsp[(1) - (1)].symp), printf("argument_expression_list -> assignment_expression\n");}
    break;

  case 13:
#line 80 "parser.y"
    {(yyval.symp) = (yyvsp[(1) - (3)].symp), (yyvsp[(3) - (3)].symp), printf("argument_expression_list -> argument_expression_list ',' assignment_expression\n");}
    break;

  case 14:
#line 84 "parser.y"
    {printf("unary_expression -> postfix_expression\n");}
    break;

  case 15:
#line 86 "parser.y"
    {printf("unary_expression -> unary_operator unary_expression\n");}
    break;

  case 16:
#line 90 "parser.y"
    {
        // $$ = '&';
        printf("unary_operator opx-> &\n");
        }
    break;

  case 17:
#line 95 "parser.y"
    {printf("unary_operator -> '*'\n");}
    break;

  case 18:
#line 97 "parser.y"
    {printf("unary_operator -> '+'\n");}
    break;

  case 19:
#line 99 "parser.y"
    {printf("unary_operator -> '-'\n");}
    break;

  case 20:
#line 101 "parser.y"
    {printf("unary_operator -> '!'\n");}
    break;

  case 21:
#line 105 "parser.y"
    {printf("multiplicative_expression -> unary_expression\n");}
    break;

  case 22:
#line 107 "parser.y"
    {printf("multiplicative_expression -> multiplicative_expression '*' unary_expression\n");}
    break;

  case 23:
#line 109 "parser.y"
    {printf("multiplicative_expression -> multiplicative_expression '/' unary_expression\n");}
    break;

  case 24:
#line 111 "parser.y"
    {printf("multiplicative_expression -> multiplicative_expression '%' unary_expression\n");}
    break;

  case 25:
#line 115 "parser.y"
    {printf("additive_expression -> multiplicative_expression\n");}
    break;

  case 26:
#line 117 "parser.y"
    {printf("additive_expression -> additive_expression '+' multiplicative_expression\n");}
    break;

  case 27:
#line 119 "parser.y"
    {printf("additive_expression -> additive_expression '-' multiplicative_expression\n");}
    break;

  case 28:
#line 123 "parser.y"
    {printf("relational_expression -> additive_expression\n");}
    break;

  case 29:
#line 125 "parser.y"
    {printf("relational_expression -> relational_expression '<' additive_expression\n");}
    break;

  case 30:
#line 127 "parser.y"
    {printf("relational_expression -> relational_expression '>' additive_expression\n");}
    break;

  case 31:
#line 129 "parser.y"
    {printf("relational_expression -> relational_expression LT_EQUAL additive_expression\n");}
    break;

  case 32:
#line 131 "parser.y"
    {printf("relational_expression -> relational_expression GT_EQUAL additive_expression\n");}
    break;

  case 33:
#line 135 "parser.y"
    {printf("equality_expression -> relational_expression\n");}
    break;

  case 34:
#line 137 "parser.y"
    {printf("equality_expression -> equality_expression EQUAL relational_expression\n");}
    break;

  case 35:
#line 139 "parser.y"
    {printf("equality_expression -> equality_expression NOT_EQUAL relational_expression\n");}
    break;

  case 36:
#line 143 "parser.y"
    {printf("logical_AND_expression -> equality_expression\n");}
    break;

  case 37:
#line 145 "parser.y"
    {printf("logical_AND_expression -> logical_AND_expression LOGIC_AND equality_expression\n");}
    break;

  case 38:
#line 149 "parser.y"
    {printf("logical_OR_expression -> logical_AND_expression\n");}
    break;

  case 39:
#line 151 "parser.y"
    {printf("logical_OR_expression -> logical_OR_expression LOGIC_OR logical_AND_expression\n");}
    break;

  case 40:
#line 155 "parser.y"
    {printf("conditional_expression -> logical_OR_expression\n");}
    break;

  case 41:
#line 157 "parser.y"
    {printf("conditional_expression -> logical_OR_expression '?' expression ':' conditional_expression\n");}
    break;

  case 42:
#line 161 "parser.y"
    {printf("assignment_expression -> conditional_expression\n");}
    break;

  case 43:
#line 163 "parser.y"
    {printf("assignment_expression -> unary_expression '=' assignment_expression\n");}
    break;

  case 44:
#line 167 "parser.y"
    {printf("expression -> assignment_expression\n");}
    break;

  case 45:
#line 171 "parser.y"
    {printf("declaration -> type_specifier init_declarator ';'\n");}
    break;

  case 46:
#line 175 "parser.y"
    {printf("init_declarator -> declarator\n");}
    break;

  case 47:
#line 177 "parser.y"
    {printf("init_declarator -> declarator '=' initializer\n");}
    break;

  case 48:
#line 181 "parser.y"
    {printf("type_specifier -> null\n");}
    break;

  case 49:
#line 183 "parser.y"
    {printf("type_specifier -> KEYWRD_VOID\n");}
    break;

  case 50:
#line 185 "parser.y"
    {printf("type_specifier -> KEYWRD_INT %s\n");}
    break;

  case 51:
#line 187 "parser.y"
    {printf("type_specifier -> KEYWRD_CHAR\n");}
    break;

  case 53:
#line 195 "parser.y"
    {printf("direct_declarator -> ID\n");}
    break;

  case 54:
#line 197 "parser.y"
    {printf("direct_declarator -> ID '[' INT_CONST ']'\n");}
    break;

  case 55:
#line 199 "parser.y"
    {printf("direct_declarator -> ID '[' parameter_list ']'\n");}
    break;

  case 56:
#line 203 "parser.y"
    {printf("pointer_opt -> pointer\n");}
    break;

  case 58:
#line 208 "parser.y"
    {printf("pointer -> '*'\n");}
    break;

  case 59:
#line 212 "parser.y"
    {printf("parameter_list -> parameter_declaration\n");}
    break;

  case 60:
#line 214 "parser.y"
    {printf("parameter_list -> parameter_list ',' parameter_declaration\n");}
    break;

  case 61:
#line 218 "parser.y"
    {printf("parameter_declaration -> type_specifier pointer_opt id_opt\n");}
    break;

  case 62:
#line 222 "parser.y"
    {printf("id_opt -> ID ';'\n");}
    break;

  case 64:
#line 227 "parser.y"
    {printf("initializer -> assignment_expression\n");}
    break;

  case 65:
#line 231 "parser.y"
    {printf("statement -> expression_statement\n");}
    break;

  case 66:
#line 233 "parser.y"
    {printf("statement -> compound_statement\n");}
    break;

  case 67:
#line 235 "parser.y"
    {printf("statement -> selection_statement\n");}
    break;

  case 68:
#line 237 "parser.y"
    {printf("statement -> iteration_statement\n");}
    break;

  case 69:
#line 239 "parser.y"
    {printf("statement -> jump_statement\n");}
    break;

  case 70:
#line 243 "parser.y"
    {printf("compound_statement -> '{' block_item_list_opt '}'\n");}
    break;

  case 71:
#line 247 "parser.y"
    {printf("block_item_list_opt -> block_item_list\n");}
    break;

  case 73:
#line 252 "parser.y"
    {printf("block_item_list -> block_item\n");}
    break;

  case 74:
#line 254 "parser.y"
    {printf("block_item_list -> block_item_list block_item\n");}
    break;

  case 75:
#line 258 "parser.y"
    {printf("block_item -> declaration\n");}
    break;

  case 76:
#line 260 "parser.y"
    {printf("block_item -> statement\n");}
    break;

  case 77:
#line 264 "parser.y"
    {printf("expression_statement -> expression_opt");}
    break;

  case 78:
#line 268 "parser.y"
    {printf("expression_opt -> expression ';'\n");}
    break;

  case 80:
#line 273 "parser.y"
    {printf("selection_statement -> KEYWRD_IF '(' expression ')' statement\n");}
    break;

  case 81:
#line 275 "parser.y"
    {printf("selection_statement -> KEYWRD_IF '(' expression ')' statement KEYWRD_ELSE statement\n");}
    break;

  case 82:
#line 279 "parser.y"
    {printf("iteration_statement -> KEYWRD_FOR '(' expression_opt ';' expression_opt ';' expression_opt ')' statement\n");}
    break;

  case 83:
#line 283 "parser.y"
    {printf("jump_statement -> KEYWRD_RETURN expression_opt ';'\n");}
    break;

  case 84:
#line 287 "parser.y"
    {printf("translation_unit -> function_definition\n");}
    break;

  case 85:
#line 289 "parser.y"
    {printf("translation_unit -> declaration\n");}
    break;

  case 86:
#line 293 "parser.y"
    {printf("function_definition -> type_specifier declarator '(' declaration_list_opt ')' compound_statement\n");}
    break;

  case 87:
#line 297 "parser.y"
    {printf("declaration_list_opt -> declaration_list ';'\n");}
    break;

  case 89:
#line 302 "parser.y"
    {printf("declaration_list -> declaration\n");}
    break;

  case 90:
#line 304 "parser.y"
    {printf("declaration_list -> declaration_list declaration ';'\n");}
    break;

  case 91:
#line 308 "parser.y"
    {   
        printf("hex, %d\n", (yyvsp[(1) - (1)].intval));
        printf("constant_expression -> INT_CONST, \n");
    }
    break;

  case 92:
#line 313 "parser.y"
    {
        (yyval.symp) = (yyvsp[(1) - (1)].symp);
        printf("constant_expression -> CONST\n");
    }
    break;


/* Line 1267 of yacc.c.  */
#line 1945 "y.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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


#line 319 "parser.y"


void yyerror(char *s) {
    std::cout << s << std::endl;
}
int main() {
    /* #ifdef YYDEBUG
        yydebug=1; */
    /* #endif */
    yyparse();
}
