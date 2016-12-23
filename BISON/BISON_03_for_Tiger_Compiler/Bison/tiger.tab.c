
/*  A Bison parser, made from tiger.y
 by  GNU Bison version 1.25
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	INT	258
#define	FLOAT	259
#define	STRING	260
#define	ID	261
#define	COMMA	262
#define	COLON	263
#define	SEMICOLON	264
#define	LPAREN	265
#define	RPAREN	266
#define	LBRACK	267
#define	RBRACK	268
#define	LBRACE	269
#define	RBRACE	270
#define	ARROW	271
#define	PLUS	272
#define	MINUS	273
#define	TIMES	274
#define	DIVIDE	275
#define	EQ	276
#define	NEQ	277
#define	LT	278
#define	LE	279
#define	GT	280
#define	GE	281
#define	AND	282
#define	OR	283
#define	ASSIGN	284
#define	ARRAY	285
#define	IF	286
#define	THEN	287
#define	ELSE	288
#define	WHILE	289
#define	FOR	290
#define	TO	291
#define	DO	292
#define	LET	293
#define	IN	294
#define	END	295
#define	OF	296
#define	BREAK	297
#define	NIL	298
#define	FUNCTION	299
#define	VAR	300
#define	TYPE	301
#define	CLASS	302
#define	EXTENDS	303

#line 1 "tiger.y"

#include <stdio.h>
#include <stdlib.h>
#include "../../../Compiler/HEADER_FILES/util.h"
#include "../../../Compiler/HEADER_FILES/errormsg.h"
#include "../../../Compiler/HEADER_FILES/symbol.h" 
#include "../../../Compiler/HEADER_FILES/absyn.h"

#define alloca malloc

int yylex(void); /* function prototype */

A_exp absyn_root;

void yyerror(char *s)
{
 EM_error(EM_tokPos, "%s", s);
}

#line 22 "tiger.y"
typedef union
{
	union
	{
		int			ival;
		float		fval;
		string		sval;
		A_var		var;
		A_exp		exp;
		A_dec		dec;
		A_decList	decList;
		A_expList	expList;
		A_fieldList	fieldList;
		A_funcList  funcList;
	}
	gval;
} YYSTYPE;
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		190
#define	YYFLAG		-32768
#define	YYNTBASE	49

#define YYTRANSLATE(x) ((unsigned)(x) <= 303 ? yytranslate[x] : 74)

static const char yytranslate[] = {     0,
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
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
    36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
    46,    47,    48
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     4,     6,     8,    10,    12,    16,    18,    20,
    22,    24,    26,    28,    30,    34,    38,    42,    46,    50,
    54,    58,    62,    66,    70,    74,    78,    83,    92,    96,
   100,   104,   106,   110,   116,   120,   125,   132,   139,   146,
   153,   160,   165,   170,   175,   180,   185,   192,   199,   206,
   213,   222,   230,   240,   242,   244,   246,   248,   251,   253,
   259,   261,   265,   269,   274,   278,   282,   286,   290,   295,
   301,   308,   315,   324,   327,   329,   331,   337,   342,   345,
   347,   354,   363,   371
};

static const short yyrhs[] = {    50,
     0,     3,     0,     4,     0,     5,     0,    66,     0,    56,
     0,    10,    50,    11,     0,    65,     0,    53,     0,    52,
     0,    67,     0,    51,     0,    68,     0,    43,     0,    50,
    17,    50,     0,    50,    18,    50,     0,    50,    19,    50,
     0,    50,    20,    50,     0,    50,    21,    50,     0,    50,
    22,    50,     0,    50,    23,    50,     0,    50,    24,    50,
     0,    50,    25,    50,     0,    50,    26,    50,     0,    50,
    27,    50,     0,    50,    28,    50,     0,    31,    50,    32,
    50,     0,    35,     6,    29,    50,    36,    50,    37,    50,
     0,    50,     9,    54,     0,    50,     9,    50,     0,    50,
     7,    55,     0,    50,     0,    10,    54,    11,     0,     6,
     8,     6,     7,    57,     0,     6,     8,     6,     0,    46,
     6,    21,     6,     0,    46,     6,    21,    30,    41,     6,
     0,    46,     6,    21,    14,    57,    15,     0,     6,    12,
     3,    13,    41,    43,     0,     6,    12,     3,    13,    41,
     3,     0,     6,    12,     3,    13,    41,     4,     0,     6,
    14,    55,    15,     0,    45,     6,     8,     6,     0,    45,
     6,    29,    50,     0,    45,     6,    29,    59,     0,    45,
     6,    29,    60,     0,    45,     6,     8,     6,    29,    50,
     0,    45,     6,     8,     6,    29,    59,     0,    45,     6,
     8,     6,    29,    60,     0,    44,     6,    10,    11,    21,
    50,     0,    44,     6,    10,    11,     8,     6,    21,    50,
     0,    44,     6,    10,    57,    11,    21,    50,     0,    44,
     6,    10,    57,    11,     8,     6,    21,    50,     0,    58,
     0,    61,     0,    62,     0,    69,     0,    63,    64,     0,
    63,     0,    38,    64,    39,    50,    40,     0,     6,     0,
    66,    16,     6,     0,     6,    16,     6,     0,    66,    12,
    50,    13,     0,    66,    29,    50,     0,    66,    29,    59,
     0,    66,    29,    60,     0,     6,    10,    11,     0,     6,
    10,    55,    11,     0,     6,    16,     6,    10,    11,     0,
     6,    16,     6,    10,    55,    11,     0,    47,     6,    21,
    14,    70,    15,     0,    47,     6,    48,     6,    21,    14,
    70,    15,     0,    71,    72,     0,    71,     0,    72,     0,
     6,     8,     6,     9,    71,     0,     6,     8,     6,     9,
     0,    73,    72,     0,    73,     0,    44,     6,    10,    11,
    21,    50,     0,    44,     6,    10,    11,     8,     6,    21,
    50,     0,    44,     6,    10,    57,    11,    21,    50,     0,
    44,     6,    10,    57,    11,     8,     6,    21,    50,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
   125,   127,   128,   129,   130,   131,   132,   133,   134,   135,
   136,   137,   138,   139,   141,   142,   143,   144,   145,   146,
   147,   148,   149,   150,   151,   152,   154,   156,   158,   159,
   161,   162,   164,   166,   167,   169,   170,   171,   173,   174,
   175,   177,   179,   180,   181,   182,   183,   184,   185,   187,
   188,   189,   190,   192,   193,   194,   195,   197,   198,   200,
   202,   203,   204,   205,   207,   208,   209,   211,   212,   213,
   214,   216,   217,   219,   220,   221,   223,   224,   226,   227,
   229,   230,   231,   232
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","INT","FLOAT",
"STRING","ID","COMMA","COLON","SEMICOLON","LPAREN","RPAREN","LBRACK","RBRACK",
"LBRACE","RBRACE","ARROW","PLUS","MINUS","TIMES","DIVIDE","EQ","NEQ","LT","LE",
"GT","GE","AND","OR","ASSIGN","ARRAY","IF","THEN","ELSE","WHILE","FOR","TO",
"DO","LET","IN","END","OF","BREAK","NIL","FUNCTION","VAR","TYPE","CLASS","EXTENDS",
"program","exp","OpExp","IfThenExp","ForExp","ListExpSemicolon","ListExpComma",
"SequenceExp","TypeFields","TypeDeclaration","AllocateArrayExp","AllocateRecordExp",
"VariableDeclaration","FunctionDeclaration","declaration","declarations","LetExp",
"variable","AssignExp","CallExp","ClassDeclaration","ClassBody","MembersDeclarationList",
"MethodsDeclarationList","MethodsDec", NULL
};
#endif

static const short yyr1[] = {     0,
    49,    50,    50,    50,    50,    50,    50,    50,    50,    50,
    50,    50,    50,    50,    51,    51,    51,    51,    51,    51,
    51,    51,    51,    51,    51,    51,    52,    53,    54,    54,
    55,    55,    56,    57,    57,    58,    58,    58,    59,    59,
    59,    60,    61,    61,    61,    61,    61,    61,    61,    62,
    62,    62,    62,    63,    63,    63,    63,    64,    64,    65,
    66,    66,    66,    66,    67,    67,    67,    68,    68,    68,
    68,    69,    69,    70,    70,    70,    71,    71,    72,    72,
    73,    73,    73,    73
};

static const short yyr2[] = {     0,
     1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
     1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
     3,     3,     3,     3,     3,     3,     4,     8,     3,     3,
     3,     1,     3,     5,     3,     4,     6,     6,     6,     6,
     6,     4,     4,     4,     4,     4,     6,     6,     6,     6,
     8,     7,     9,     1,     1,     1,     1,     2,     1,     5,
     1,     3,     3,     4,     3,     3,     3,     3,     4,     5,
     6,     6,     8,     2,     1,     1,     5,     4,     2,     1,
     6,     8,     7,     9
};

static const short yydefact[] = {     0,
     2,     3,     4,    61,     0,     0,     0,     0,    14,     1,
    12,    10,     9,     6,     8,     5,    11,    13,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    54,    55,
    56,    59,     0,    57,     0,     0,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
    32,     0,    63,     0,     7,    33,     0,     0,     0,     0,
     0,     0,    58,     0,    15,    16,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,     0,    62,    61,    65,
    66,    67,     0,    69,     0,    30,    29,    27,     0,     0,
     0,     0,     0,     0,     0,     0,    64,     0,     0,    31,
    70,     0,     0,     0,     0,     0,    43,    44,    45,    46,
    36,     0,     0,     0,     0,    60,     0,     0,    71,     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    75,    76,    80,     0,     0,    42,     0,    35,     0,    50,
     0,     0,    47,    48,    49,    38,    37,     0,     0,    72,
    74,    79,     0,     0,    28,     0,     0,     0,    52,     0,
     0,     0,    40,    41,    39,    34,    51,     0,    78,     0,
     0,    73,    53,    77,     0,     0,     0,     0,    81,     0,
     0,     0,     0,    83,    82,     0,    84,     0,     0,     0
};

static const short yydefgoto[] = {   188,
    51,    11,    12,    13,    22,    52,    14,   106,    29,    81,
    82,    30,    31,    32,    33,    15,    16,    17,    18,    34,
   130,   131,   132,   133
};

static const short yypact[] = {    75,
-32768,-32768,-32768,     6,    75,    75,     3,    70,-32768,   307,
-32768,-32768,-32768,-32768,-32768,    -4,-32768,-32768,    56,    14,
   227,    10,   279,    27,    24,    68,    78,    83,-32768,-32768,
-32768,    70,    51,-32768,    75,    75,    75,    75,    75,    75,
    75,    75,    75,    75,    75,    75,    75,    87,   116,-32768,
   194,    84,    95,    75,-32768,-32768,    75,    75,    97,    -5,
    90,   -19,-32768,    75,    63,    63,-32768,-32768,   121,   121,
   121,   121,   121,   121,   110,   110,   295,-32768,    86,   307,
-32768,-32768,    75,-32768,    66,   247,-32768,   307,   259,    17,
   102,   116,     1,    98,   118,   170,-32768,   140,    75,-32768,
-32768,   133,    75,   137,     5,   135,   119,   307,-32768,-32768,
-32768,   143,   109,     8,   131,-32768,   142,   138,-32768,   206,
   150,   152,    75,    47,   116,   145,   155,   154,   157,   149,
   122,-32768,   122,   151,   126,-32768,    75,   162,   153,   307,
   164,    75,   307,-32768,-32768,-32768,-32768,   165,   163,-32768,
-32768,-32768,     8,     7,   307,   143,    75,   156,   307,   166,
    21,   168,-32768,-32768,-32768,-32768,   307,    75,   172,    65,
   161,-32768,   307,-32768,   173,    75,    67,   159,   307,   178,
    75,    75,   179,   307,   307,    75,   307,   185,   199,-32768
};

static const short yypgoto[] = {-32768,
     0,-32768,-32768,-32768,   148,   -66,-32768,  -108,-32768,   -91,
   -74,-32768,-32768,-32768,   171,-32768,-32768,-32768,-32768,-32768,
    52,    35,   -68,-32768
};


#define	YYLAST		335


static const short yytable[] = {    10,
   109,    94,    91,   126,    21,    23,   111,    47,    24,   163,
   164,    48,   122,   128,   112,    19,   100,   110,   102,    53,
    56,    20,   104,    92,    49,   123,   104,   105,    95,    59,
   113,   170,   118,   144,    65,    66,    67,    68,    69,    70,
    71,    72,    73,    74,    75,    76,    77,   166,    80,   165,
   145,   129,   171,    86,   141,    58,    88,    89,     1,     2,
     3,     4,   151,    96,   152,     5,    50,   142,     1,     2,
     3,     4,   175,    60,   180,     5,   101,     1,     2,     3,
     4,    37,    38,    61,     5,   176,     6,   181,    62,    64,
     7,   108,    78,     8,    84,    19,     6,    98,     9,    99,
     7,    20,   120,     8,    85,     6,    90,   107,     9,     7,
    93,   114,     8,    25,    26,    27,    28,     9,     1,     2,
     3,    79,   140,   115,   143,     5,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,   155,    35,    36,    37,
    38,   159,   117,   119,   121,   124,     6,   125,   104,   127,
     7,   134,   136,     8,   135,   138,   167,   139,     9,   146,
   147,   148,   149,   150,   153,   129,   154,   173,   156,   158,
   160,   177,   161,   157,   169,   179,   168,   128,   178,   182,
   184,   185,   172,   183,   189,   187,    35,    36,    37,    38,
    39,    40,    41,    42,    43,    44,    45,    46,   190,   186,
    83,    87,    63,   174,   162,     0,     0,     0,     0,   116,
    35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
    45,    46,    35,    36,    37,    38,    39,    40,    41,    42,
    43,    44,    45,    46,     0,    54,     0,    55,     0,     0,
     0,     0,   137,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,    46,    54,     0,     0,     0,     0,
     0,     0,     0,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,    46,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,     0,     0,     0,
     0,     0,     0,     0,   103,    35,    36,    37,    38,    39,
    40,    41,    42,    43,    44,    45,    46,    97,     0,     0,
    57,    35,    36,    37,    38,    39,    40,    41,    42,    43,
    44,    45,    46,    35,    36,    37,    38,    39,    40,    41,
    42,    43,    44,    45,    46
};

static const short yycheck[] = {     0,
    92,    21,     8,   112,     5,     6,     6,    12,     6,     3,
     4,    16,     8,     6,    14,    10,    83,    92,    85,     6,
    11,    16,     6,    29,    29,    21,     6,    11,    48,     6,
    30,    11,    99,   125,    35,    36,    37,    38,    39,    40,
    41,    42,    43,    44,    45,    46,    47,   156,    49,    43,
   125,    44,   161,    54,     8,    29,    57,    58,     3,     4,
     5,     6,   131,    64,   133,    10,    11,    21,     3,     4,
     5,     6,     8,     6,     8,    10,    11,     3,     4,     5,
     6,    19,    20,     6,    10,    21,    31,    21,     6,    39,
    35,    92,     6,    38,    11,    10,    31,    12,    43,    14,
    35,    16,   103,    38,    10,    31,    10,     6,    43,    35,
    21,    14,    38,    44,    45,    46,    47,    43,     3,     4,
     5,     6,   123,     6,   125,    10,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,   137,    17,    18,    19,
    20,   142,     3,    11,     8,    11,    31,    29,     6,    41,
    35,    21,    15,    38,    13,     6,   157,     6,    43,    15,
     6,     8,     6,    15,    14,    44,    41,   168,     7,     6,
     6,    11,    10,    21,     9,   176,    21,     6,     6,    21,
   181,   182,    15,     6,     0,   186,    17,    18,    19,    20,
    21,    22,    23,    24,    25,    26,    27,    28,     0,    21,
     7,    54,    32,   169,   153,    -1,    -1,    -1,    -1,    40,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    17,    18,    19,    20,    21,    22,    23,    24,
    25,    26,    27,    28,    -1,     9,    -1,    11,    -1,    -1,
    -1,    -1,    37,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,     9,    -1,    -1,    -1,    -1,
    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    36,    17,    18,    19,    20,    21,
    22,    23,    24,    25,    26,    27,    28,    13,    -1,    -1,
    32,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    17,    18,    19,    20,    21,    22,    23,
    24,    25,    26,    27,    28
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

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
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 196 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 1:
#line 125 "tiger.y"
{absyn_root = yyvsp[0].gval.exp;;
    break;}
case 2:
#line 127 "tiger.y"
{yyval.gval.exp = A_IntExp(EM_tokPos,yyvsp[0].gval.ival);;
    break;}
case 3:
#line 128 "tiger.y"
{yyval.gval.exp = A_FloatExp(EM_tokPos,yyvsp[0].gval.fval);;
    break;}
case 4:
#line 129 "tiger.y"
{yyval.gval.exp = A_StringExp(EM_tokPos,yyvsp[0].gval.sval);;
    break;}
case 5:
#line 130 "tiger.y"
{yyval.gval.exp = A_VarExp(EM_tokPos,yyvsp[0].gval.var);;
    break;}
case 6:
#line 131 "tiger.y"
{yyval.gval.exp = yyvsp[0].gval.exp;;
    break;}
case 7:
#line 132 "tiger.y"
{yyval.gval.exp = yyvsp[-1].gval.exp;;
    break;}
case 8:
#line 133 "tiger.y"
{yyval.gval.exp = yyvsp[0].gval.exp;;
    break;}
case 9:
#line 134 "tiger.y"
{yyval.gval.exp = yyvsp[0].gval.exp;;
    break;}
case 10:
#line 135 "tiger.y"
{yyval.gval.exp = yyvsp[0].gval.exp;;
    break;}
case 11:
#line 136 "tiger.y"
{yyval.gval.exp = yyvsp[0].gval.exp;;
    break;}
case 12:
#line 137 "tiger.y"
{yyval.gval.exp = yyvsp[0].gval.exp;;
    break;}
case 13:
#line 138 "tiger.y"
{yyval.gval.exp = yyvsp[0].gval.exp;;
    break;}
case 14:
#line 139 "tiger.y"
{yyval.gval.exp = A_NilExp(EM_tokPos);;
    break;}
case 15:
#line 141 "tiger.y"
{yyval.gval.exp = A_OpExp(EM_tokPos, A_plusOp,   yyvsp[-2].gval.exp, yyvsp[0].gval.exp);;
    break;}
case 16:
#line 142 "tiger.y"
{yyval.gval.exp = A_OpExp(EM_tokPos, A_minusOp,  yyvsp[-2].gval.exp, yyvsp[0].gval.exp);;
    break;}
case 17:
#line 143 "tiger.y"
{yyval.gval.exp = A_OpExp(EM_tokPos, A_timesOp,  yyvsp[-2].gval.exp, yyvsp[0].gval.exp);;
    break;}
case 18:
#line 144 "tiger.y"
{yyval.gval.exp = A_OpExp(EM_tokPos, A_divideOp, yyvsp[-2].gval.exp, yyvsp[0].gval.exp);;
    break;}
case 19:
#line 145 "tiger.y"
{yyval.gval.exp = A_OpExp(EM_tokPos, A_eqOp,     yyvsp[-2].gval.exp, yyvsp[0].gval.exp);;
    break;}
case 20:
#line 146 "tiger.y"
{yyval.gval.exp = A_OpExp(EM_tokPos, A_neqOp,    yyvsp[-2].gval.exp, yyvsp[0].gval.exp);;
    break;}
case 21:
#line 147 "tiger.y"
{yyval.gval.exp = A_OpExp(EM_tokPos, A_ltOp,     yyvsp[-2].gval.exp, yyvsp[0].gval.exp);;
    break;}
case 22:
#line 148 "tiger.y"
{yyval.gval.exp = A_OpExp(EM_tokPos, A_leOp,     yyvsp[-2].gval.exp, yyvsp[0].gval.exp);;
    break;}
case 23:
#line 149 "tiger.y"
{yyval.gval.exp = A_OpExp(EM_tokPos, A_gtOp,     yyvsp[-2].gval.exp, yyvsp[0].gval.exp);;
    break;}
case 24:
#line 150 "tiger.y"
{yyval.gval.exp = A_OpExp(EM_tokPos, A_geOp,     yyvsp[-2].gval.exp, yyvsp[0].gval.exp);;
    break;}
case 25:
#line 151 "tiger.y"
{yyval.gval.exp = A_OpExp(EM_tokPos, A_andOp,    yyvsp[-2].gval.exp, yyvsp[0].gval.exp);;
    break;}
case 26:
#line 152 "tiger.y"
{yyval.gval.exp = A_OpExp(EM_tokPos, A_orOp,     yyvsp[-2].gval.exp, yyvsp[0].gval.exp);;
    break;}
case 27:
#line 154 "tiger.y"
{yyval.gval.exp = A_IfExp(EM_tokPos,yyvsp[-2].gval.exp,yyvsp[0].gval.exp,NULL);;
    break;}
case 28:
#line 156 "tiger.y"
{yyval.gval.exp = A_ForExp(EM_tokPos,S_Symbol(yyvsp[-6].gval.sval),yyvsp[-4].gval.exp,yyvsp[-2].gval.exp,yyvsp[0].gval.exp);;
    break;}
case 29:
#line 158 "tiger.y"
{yyval.gval.expList = A_ExpList(yyvsp[-2].gval.exp,yyvsp[0].gval.expList);;
    break;}
case 30:
#line 159 "tiger.y"
{yyval.gval.expList = A_ExpList(yyvsp[-2].gval.exp,A_ExpList(yyvsp[0].gval.exp,NULL));;
    break;}
case 31:
#line 161 "tiger.y"
{yyval.gval.expList = A_ExpList(yyvsp[-2].gval.exp,yyvsp[0].gval.expList);;
    break;}
case 32:
#line 162 "tiger.y"
{yyval.gval.expList = A_ExpList(yyvsp[0].gval.exp,NULL);;
    break;}
case 33:
#line 164 "tiger.y"
{yyval.gval.exp = A_SeqExp(EM_tokPos,yyvsp[-1].gval.expList);;
    break;}
case 34:
#line 166 "tiger.y"
{yyval.gval.fieldList = A_FieldList(A_Field(EM_tokPos,S_Symbol(yyvsp[-4].gval.sval),S_Symbol(yyvsp[-2].gval.sval)),yyvsp[0].gval.fieldList);;
    break;}
case 35:
#line 167 "tiger.y"
{yyval.gval.fieldList = A_FieldList(A_Field(EM_tokPos,S_Symbol(yyvsp[-2].gval.sval),S_Symbol(yyvsp[0].gval.sval)),NULL);;
    break;}
case 36:
#line 169 "tiger.y"
{yyval.gval.dec = A_NameTypeDec(  EM_tokPos,S_Symbol(yyvsp[-2].gval.sval),S_Symbol(yyvsp[0].gval.sval));;
    break;}
case 37:
#line 170 "tiger.y"
{yyval.gval.dec = A_ArrayTypeDec( EM_tokPos,S_Symbol(yyvsp[-4].gval.sval),S_Symbol(yyvsp[0].gval.sval));;
    break;}
case 38:
#line 171 "tiger.y"
{yyval.gval.dec = A_RecordTypeDec(EM_tokPos,S_Symbol(yyvsp[-4].gval.sval),yyvsp[-1].gval.fieldList);;
    break;}
case 39:
#line 173 "tiger.y"
{yyval.gval.exp = A_AllocateArrayExp(EM_tokPos,S_Symbol(yyvsp[-5].gval.sval),yyvsp[-3].gval.ival,0);;
    break;}
case 40:
#line 174 "tiger.y"
{yyval.gval.exp = A_AllocateArrayExp(EM_tokPos,S_Symbol(yyvsp[-5].gval.sval),yyvsp[-3].gval.ival,yyvsp[0].gval.ival);;
    break;}
case 41:
#line 175 "tiger.y"
{yyval.gval.exp = A_AllocateArrayExp(EM_tokPos,S_Symbol(yyvsp[-5].gval.sval),yyvsp[-3].gval.ival,2);;
    break;}
case 42:
#line 177 "tiger.y"
{yyval.gval.exp = A_AllocateRecordExp(EM_tokPos,S_Symbol(yyvsp[-3].gval.sval),yyvsp[-1].gval.expList);;
    break;}
case 43:
#line 179 "tiger.y"
{yyval.gval.dec = A_VarDec(EM_tokPos,S_Symbol(yyvsp[-2].gval.sval),S_Symbol(yyvsp[0].gval.sval),NULL);;
    break;}
case 44:
#line 180 "tiger.y"
{yyval.gval.dec = A_VarDec(EM_tokPos,S_Symbol(yyvsp[-2].gval.sval),NULL,             yyvsp[0].gval.exp);;
    break;}
case 45:
#line 181 "tiger.y"
{yyval.gval.dec = A_VarDec(EM_tokPos,S_Symbol(yyvsp[-2].gval.sval),NULL,             yyvsp[0].gval.exp);;
    break;}
case 46:
#line 182 "tiger.y"
{yyval.gval.dec = A_VarDec(EM_tokPos,S_Symbol(yyvsp[-2].gval.sval),NULL,             yyvsp[0].gval.exp);;
    break;}
case 47:
#line 183 "tiger.y"
{yyval.gval.dec = A_VarDec(EM_tokPos,S_Symbol(yyvsp[-4].gval.sval),S_Symbol(yyvsp[-2].gval.sval),yyvsp[0].gval.exp);;
    break;}
case 48:
#line 184 "tiger.y"
{yyval.gval.dec = A_VarDec(EM_tokPos,S_Symbol(yyvsp[-4].gval.sval),S_Symbol(yyvsp[-2].gval.sval),yyvsp[0].gval.exp);;
    break;}
case 49:
#line 185 "tiger.y"
{yyval.gval.dec = A_VarDec(EM_tokPos,S_Symbol(yyvsp[-4].gval.sval),S_Symbol(yyvsp[-2].gval.sval),yyvsp[0].gval.exp);;
    break;}
case 50:
#line 187 "tiger.y"
{yyval.gval.dec = A_FunDec(EM_tokPos,S_Symbol(yyvsp[-4].gval.sval),NULL,NULL,yyvsp[0].gval.exp);;
    break;}
case 51:
#line 188 "tiger.y"
{yyval.gval.dec = A_FunDec(EM_tokPos,S_Symbol(yyvsp[-6].gval.sval),NULL,S_Symbol(yyvsp[-2].gval.sval),yyvsp[0].gval.exp);;
    break;}
case 52:
#line 189 "tiger.y"
{yyval.gval.dec = A_FunDec(EM_tokPos,S_Symbol(yyvsp[-5].gval.sval),yyvsp[-3].gval.fieldList,NULL,yyvsp[0].gval.exp);;
    break;}
case 53:
#line 190 "tiger.y"
{yyval.gval.dec = A_FunDec(EM_tokPos,S_Symbol(yyvsp[-7].gval.sval),yyvsp[-5].gval.fieldList,S_Symbol(yyvsp[-2].gval.sval),yyvsp[0].gval.exp);;
    break;}
case 54:
#line 192 "tiger.y"
{yyval.gval.dec = yyvsp[0].gval.dec;;
    break;}
case 55:
#line 193 "tiger.y"
{yyval.gval.dec = yyvsp[0].gval.dec;;
    break;}
case 56:
#line 194 "tiger.y"
{yyval.gval.dec = yyvsp[0].gval.dec;;
    break;}
case 57:
#line 195 "tiger.y"
{yyval.gval.dec = yyvsp[0].gval.dec;;
    break;}
case 58:
#line 197 "tiger.y"
{yyval.gval.decList = A_DecList(yyvsp[-1].gval.dec,yyvsp[0].gval.decList);;
    break;}
case 59:
#line 198 "tiger.y"
{yyval.gval.decList = A_DecList(yyvsp[0].gval.dec,NULL);;
    break;}
case 60:
#line 200 "tiger.y"
{yyval.gval.exp = A_LetExp(EM_tokPos,yyvsp[-3].gval.decList,yyvsp[-1].gval.exp);;
    break;}
case 61:
#line 202 "tiger.y"
{yyval.gval.var = A_SimpleVar(EM_tokPos,S_Symbol(yyvsp[0].gval.sval));;
    break;}
case 62:
#line 203 "tiger.y"
{yyval.gval.var = A_FieldVar(EM_tokPos,yyvsp[-2].gval.var,S_Symbol(yyvsp[0].gval.sval));;
    break;}
case 63:
#line 204 "tiger.y"
{yyval.gval.var = A_FieldVar(EM_tokPos,A_SimpleVar(EM_tokPos,S_Symbol(yyvsp[-2].gval.sval)),S_Symbol(yyvsp[0].gval.sval));;
    break;}
case 64:
#line 205 "tiger.y"
{yyval.gval.var = A_SubscriptVar(EM_tokPos,yyvsp[-3].gval.var,yyvsp[-1].gval.exp);;
    break;}
case 65:
#line 207 "tiger.y"
{yyval.gval.exp = A_AssignExp(EM_tokPos,yyvsp[-2].gval.var,yyvsp[0].gval.exp);;
    break;}
case 66:
#line 208 "tiger.y"
{yyval.gval.exp = A_AssignExp(EM_tokPos,yyvsp[-2].gval.var,yyvsp[0].gval.exp);;
    break;}
case 67:
#line 209 "tiger.y"
{yyval.gval.exp = A_AssignExp(EM_tokPos,yyvsp[-2].gval.var,yyvsp[0].gval.exp);;
    break;}
case 68:
#line 211 "tiger.y"
{yyval.gval.exp = A_CallExp(EM_tokPos,S_Symbol(yyvsp[-2].gval.sval),NULL);;
    break;}
case 69:
#line 212 "tiger.y"
{yyval.gval.exp = A_CallExp(EM_tokPos,S_Symbol(yyvsp[-3].gval.sval),yyvsp[-1].gval.expList);;
    break;}
case 70:
#line 213 "tiger.y"
{yyval.gval.exp = A_CallExp(EM_tokPos,S_Symbol(yyvsp[-2].gval.sval),NULL);;
    break;}
case 71:
#line 214 "tiger.y"
{yyval.gval.exp = A_CallExp(EM_tokPos,S_Symbol(yyvsp[-5].gval.sval),yyvsp[-3].gval.expList);;
    break;}
case 72:
#line 216 "tiger.y"
{yyval.gval.dec = A_ClassDec(EM_tokPos,S_Symbol(yyvsp[-4].gval.sval),NULL,yyvsp[-1].gval.fieldList,yyvsp[-1].gval.funcList);;
    break;}
case 73:
#line 217 "tiger.y"
{yyval.gval.dec = A_ClassDec(EM_tokPos,S_Symbol(yyvsp[-6].gval.sval),S_Symbol(yyvsp[-4].gval.sval),yyvsp[-3].gval.fieldList,yyvsp[-3].gval.funcList);;
    break;}
case 74:
#line 219 "tiger.y"
{yyval.gval.fieldList = yyvsp[-1].gval.fieldList; yyval.gval.funcList = yyvsp[0].gval.funcList;;
    break;}
case 75:
#line 220 "tiger.y"
{yyval.gval.fieldList = yyvsp[0].gval.fieldList;;
    break;}
case 76:
#line 221 "tiger.y"
{yyval.gval.funcList = yyvsp[0].gval.funcList;;
    break;}
case 77:
#line 223 "tiger.y"
{yyval.gval.fieldList = A_FieldList(A_Field(EM_tokPos,S_Symbol(yyvsp[-4].gval.sval),S_Symbol(yyvsp[-2].gval.sval)),yyvsp[0].gval.fieldList);;
    break;}
case 78:
#line 224 "tiger.y"
{yyval.gval.fieldList = A_FieldList(A_Field(EM_tokPos,S_Symbol(yyvsp[-3].gval.sval),S_Symbol(yyvsp[-1].gval.sval)),NULL);;
    break;}
case 79:
#line 226 "tiger.y"
{yyval.gval.funcList = A_FuncList(yyvsp[-1].gval.dec,yyvsp[0].gval.decList);;
    break;}
case 80:
#line 227 "tiger.y"
{yyval.gval.funcList = A_FuncList(yyvsp[0].gval.dec,NULL);;
    break;}
case 81:
#line 229 "tiger.y"
{yyval.gval.dec = A_FunDec(EM_tokPos,S_Symbol(yyvsp[-4].gval.sval),NULL,NULL,yyvsp[0].gval.exp);;
    break;}
case 82:
#line 230 "tiger.y"
{yyval.gval.dec = A_FunDec(EM_tokPos,S_Symbol(yyvsp[-6].gval.sval),NULL,S_Symbol(yyvsp[-2].gval.sval),yyvsp[0].gval.exp);;
    break;}
case 83:
#line 231 "tiger.y"
{yyval.gval.dec = A_FunDec(EM_tokPos,S_Symbol(yyvsp[-5].gval.sval),yyvsp[-3].gval.fieldList,NULL,yyvsp[0].gval.exp);;
    break;}
case 84:
#line 232 "tiger.y"
{yyval.gval.dec = A_FunDec(EM_tokPos,S_Symbol(yyvsp[-7].gval.sval),yyvsp[-5].gval.fieldList,S_Symbol(yyvsp[-2].gval.sval),yyvsp[0].gval.exp);;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 498 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 234 "tiger.y"
