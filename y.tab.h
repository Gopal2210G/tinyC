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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    IDENTIFIER = 258,              /* IDENTIFIER  */
    INTEGER_CONSTANT = 259,        /* INTEGER_CONSTANT  */
    FLOAT_CONSTANT = 260,          /* FLOAT_CONSTANT  */
    CHARACTER_CONSTANT = 261,      /* CHARACTER_CONSTANT  */
    STRING_LITERAL = 262,          /* STRING_LITERAL  */
    ROUND_BRACKET_OPEN = 263,      /* ROUND_BRACKET_OPEN  */
    ROUND_BRACKET_CLOSE = 264,     /* ROUND_BRACKET_CLOSE  */
    SQUARE_BRACKET_OPEN = 265,     /* SQUARE_BRACKET_OPEN  */
    SQUARE_BRACKET_CLOSE = 266,    /* SQUARE_BRACKET_CLOSE  */
    CURLY_BRACKET_OPEN = 267,      /* CURLY_BRACKET_OPEN  */
    CURLY_BRACKET_CLOSE = 268,     /* CURLY_BRACKET_CLOSE  */
    UNARY_INCREMENT = 269,         /* UNARY_INCREMENT  */
    UNARY_DECREMENT = 270,         /* UNARY_DECREMENT  */
    NOT = 271,                     /* NOT  */
    MUL = 272,                     /* MUL  */
    DIV = 273,                     /* DIV  */
    MOD = 274,                     /* MOD  */
    PLUS = 275,                    /* PLUS  */
    MINUS = 276,                   /* MINUS  */
    COMPLEMENT = 277,              /* COMPLEMENT  */
    XOR = 278,                     /* XOR  */
    DOT = 279,                     /* DOT  */
    DOTS = 280,                    /* DOTS  */
    COMMA = 281,                   /* COMMA  */
    QUES_MARK = 282,               /* QUES_MARK  */
    COLON = 283,                   /* COLON  */
    SEMICOLON = 284,               /* SEMICOLON  */
    IMPLIES = 285,                 /* IMPLIES  */
    HASH = 286,                    /* HASH  */
    BITWISE_LEFT = 287,            /* BITWISE_LEFT  */
    BITWISE_RIGHT = 288,           /* BITWISE_RIGHT  */
    BITWISE_AND = 289,             /* BITWISE_AND  */
    BITWISE_OR = 290,              /* BITWISE_OR  */
    LOGICAL_AND = 291,             /* LOGICAL_AND  */
    LOGICAL_OR = 292,              /* LOGICAL_OR  */
    LESS_THAN = 293,               /* LESS_THAN  */
    GREATER_THAN = 294,            /* GREATER_THAN  */
    LESS_EQUAL = 295,              /* LESS_EQUAL  */
    GREATER_EQUAL = 296,           /* GREATER_EQUAL  */
    EQUAL = 297,                   /* EQUAL  */
    NOT_EQUAL = 298,               /* NOT_EQUAL  */
    ASSIGN = 299,                  /* ASSIGN  */
    MUL_ASSIGN = 300,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 301,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 302,              /* MOD_ASSIGN  */
    PLUS_ASSIGN = 303,             /* PLUS_ASSIGN  */
    MINUS_ASSIGN = 304,            /* MINUS_ASSIGN  */
    BITWISE_LEFT_ASSIGN = 305,     /* BITWISE_LEFT_ASSIGN  */
    BITWISE_RIGHT_ASSIGN = 306,    /* BITWISE_RIGHT_ASSIGN  */
    BITWISE_AND_ASSIGN = 307,      /* BITWISE_AND_ASSIGN  */
    XOR_ASSIGN = 308,              /* XOR_ASSIGN  */
    BITWISE_OR_ASSIGN = 309,       /* BITWISE_OR_ASSIGN  */
    EXTERN = 310,                  /* EXTERN  */
    STATIC = 311,                  /* STATIC  */
    VOID = 312,                    /* VOID  */
    CHAR = 313,                    /* CHAR  */
    SHORT = 314,                   /* SHORT  */
    INT = 315,                     /* INT  */
    LONG = 316,                    /* LONG  */
    FLOAT = 317,                   /* FLOAT  */
    DOUBLE = 318,                  /* DOUBLE  */
    CONST = 319,                   /* CONST  */
    RESTRICT = 320,                /* RESTRICT  */
    VOLATILE = 321,                /* VOLATILE  */
    INLINE = 322,                  /* INLINE  */
    SIZEOF = 323,                  /* SIZEOF  */
    TYPEDEF = 324,                 /* TYPEDEF  */
    UNION = 325,                   /* UNION  */
    STRUCT = 326,                  /* STRUCT  */
    CASE = 327,                    /* CASE  */
    DEFAULT = 328,                 /* DEFAULT  */
    IF = 329,                      /* IF  */
    ELSE = 330,                    /* ELSE  */
    SWITCH = 331,                  /* SWITCH  */
    WHILE = 332,                   /* WHILE  */
    DO = 333,                      /* DO  */
    FOR = 334,                     /* FOR  */
    GOTO = 335,                    /* GOTO  */
    CONTINUE = 336,                /* CONTINUE  */
    BREAK = 337,                   /* BREAK  */
    RETURN = 338                   /* RETURN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define INTEGER_CONSTANT 259
#define FLOAT_CONSTANT 260
#define CHARACTER_CONSTANT 261
#define STRING_LITERAL 262
#define ROUND_BRACKET_OPEN 263
#define ROUND_BRACKET_CLOSE 264
#define SQUARE_BRACKET_OPEN 265
#define SQUARE_BRACKET_CLOSE 266
#define CURLY_BRACKET_OPEN 267
#define CURLY_BRACKET_CLOSE 268
#define UNARY_INCREMENT 269
#define UNARY_DECREMENT 270
#define NOT 271
#define MUL 272
#define DIV 273
#define MOD 274
#define PLUS 275
#define MINUS 276
#define COMPLEMENT 277
#define XOR 278
#define DOT 279
#define DOTS 280
#define COMMA 281
#define QUES_MARK 282
#define COLON 283
#define SEMICOLON 284
#define IMPLIES 285
#define HASH 286
#define BITWISE_LEFT 287
#define BITWISE_RIGHT 288
#define BITWISE_AND 289
#define BITWISE_OR 290
#define LOGICAL_AND 291
#define LOGICAL_OR 292
#define LESS_THAN 293
#define GREATER_THAN 294
#define LESS_EQUAL 295
#define GREATER_EQUAL 296
#define EQUAL 297
#define NOT_EQUAL 298
#define ASSIGN 299
#define MUL_ASSIGN 300
#define DIV_ASSIGN 301
#define MOD_ASSIGN 302
#define PLUS_ASSIGN 303
#define MINUS_ASSIGN 304
#define BITWISE_LEFT_ASSIGN 305
#define BITWISE_RIGHT_ASSIGN 306
#define BITWISE_AND_ASSIGN 307
#define XOR_ASSIGN 308
#define BITWISE_OR_ASSIGN 309
#define EXTERN 310
#define STATIC 311
#define VOID 312
#define CHAR 313
#define SHORT 314
#define INT 315
#define LONG 316
#define FLOAT 317
#define DOUBLE 318
#define CONST 319
#define RESTRICT 320
#define VOLATILE 321
#define INLINE 322
#define SIZEOF 323
#define TYPEDEF 324
#define UNION 325
#define STRUCT 326
#define CASE 327
#define DEFAULT 328
#define IF 329
#define ELSE 330
#define SWITCH 331
#define WHILE 332
#define DO 333
#define FOR 334
#define GOTO 335
#define CONTINUE 336
#define BREAK 337
#define RETURN 338

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "tinyC_22CS10026_22CS30006.y"
            		
	
	Expression* expr;		   //expression
	Statement* stat;		   //statement	
	Array* Arr;  		   	   //array type

	char unaryOp;	  		   //unary operator		
	char* char_value;		   //char value

	int instr_number;		   //instruction number used for backpatching
	int int_value;			   //integer value	
	int num_params;			   //number of parameters

	symboltype* sym_type;	   //symbol type  
	sym* sym_ptr;			   //symbol pointer

#line 250 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
