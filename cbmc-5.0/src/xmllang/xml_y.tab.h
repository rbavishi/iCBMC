/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YYXML_XML_Y_TAB_HPP_INCLUDED
# define YY_YYXML_XML_Y_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yyxmldebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    STARTXMLDECL = 258,
    VERSION = 259,
    STARTPI = 260,
    ENDPI = 261,
    EQ = 262,
    SLASH = 263,
    CLOSE = 264,
    END = 265,
    ENCODING = 266,
    NAME = 267,
    VALUE = 268,
    DATA = 269,
    COMMENT = 270,
    START = 271
  };
#endif
/* Tokens.  */
#define STARTXMLDECL 258
#define VERSION 259
#define STARTPI 260
#define ENDPI 261
#define EQ 262
#define SLASH 263
#define CLOSE 264
#define END 265
#define ENCODING 266
#define NAME 267
#define VALUE 268
#define DATA 269
#define COMMENT 270
#define START 271

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 19 "parser.y" /* yacc.c:1909  */
char *s;

#line 89 "xml_y.tab.hpp" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yyxmllval;

int yyxmlparse (void);

#endif /* !YY_YYXML_XML_Y_TAB_HPP_INCLUDED  */
