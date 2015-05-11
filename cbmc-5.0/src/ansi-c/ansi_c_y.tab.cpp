/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         yyansi_cparse
#define yylex           yyansi_clex
#define yyerror         yyansi_cerror
#define yydebug         yyansi_cdebug
#define yynerrs         yyansi_cnerrs

#define yylval          yyansi_clval
#define yychar          yyansi_cchar

/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */


/*
 * This parser is based on:
 *
 * c5.y, a ANSI-C grammar written by James A. Roskind.
 * "Portions Copyright (c) 1989, 1990 James A. Roskind".
 * (http://www.idiom.com/free-compilers/,
 * ftp://ftp.infoseek.com/ftp/pub/c++grammar/,
 * ftp://ftp.sra.co.jp/.a/pub/cmd/c++grammar2.0.tar.gz)
 */

#define PARSER ansi_c_parser

#include "ansi_c_parser.h"

int yyansi_clex();
extern char *yyansi_ctext;

#include "parser_static.inc"

#include "ansi_c_y.tab.h"

// statements have right recursion, deep nesting of statements thus
// requires more stack space
#define YYMAXDEPTH 25600

/*** token declaration **************************************************/
#line 233 "parser.y" /* yacc.c:339  */

/************************************************************************/
/*** rules **************************************************************/
/************************************************************************/

#line 109 "ansi_c_y.tab.cpp" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "ansi_c_y.tab.hpp".  */
#ifndef YY_YYANSI_C_ANSI_C_Y_TAB_HPP_INCLUDED
# define YY_YYANSI_C_ANSI_C_Y_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yyansi_cdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOK_AUTO = 258,
    TOK_BOOL = 259,
    TOK_COMPLEX = 260,
    TOK_BREAK = 261,
    TOK_CASE = 262,
    TOK_CHAR = 263,
    TOK_CONST = 264,
    TOK_CONTINUE = 265,
    TOK_DEFAULT = 266,
    TOK_DO = 267,
    TOK_DOUBLE = 268,
    TOK_ELSE = 269,
    TOK_ENUM = 270,
    TOK_EXTERN = 271,
    TOK_FLOAT = 272,
    TOK_FOR = 273,
    TOK_GOTO = 274,
    TOK_IF = 275,
    TOK_INLINE = 276,
    TOK_INT = 277,
    TOK_LONG = 278,
    TOK_REGISTER = 279,
    TOK_RESTRICT = 280,
    TOK_RETURN = 281,
    TOK_SHORT = 282,
    TOK_SIGNED = 283,
    TOK_SIZEOF = 284,
    TOK_STATIC = 285,
    TOK_STRUCT = 286,
    TOK_SWITCH = 287,
    TOK_TYPEDEF = 288,
    TOK_UNION = 289,
    TOK_UNSIGNED = 290,
    TOK_VOID = 291,
    TOK_VOLATILE = 292,
    TOK_WCHAR_T = 293,
    TOK_WHILE = 294,
    TOK_ARROW = 295,
    TOK_INCR = 296,
    TOK_DECR = 297,
    TOK_SHIFTLEFT = 298,
    TOK_SHIFTRIGHT = 299,
    TOK_LE = 300,
    TOK_GE = 301,
    TOK_EQ = 302,
    TOK_NE = 303,
    TOK_ANDAND = 304,
    TOK_OROR = 305,
    TOK_ELLIPSIS = 306,
    TOK_MULTASSIGN = 307,
    TOK_DIVASSIGN = 308,
    TOK_MODASSIGN = 309,
    TOK_PLUSASSIGN = 310,
    TOK_MINUSASSIGN = 311,
    TOK_SHLASSIGN = 312,
    TOK_SHRASSIGN = 313,
    TOK_ANDASSIGN = 314,
    TOK_XORASSIGN = 315,
    TOK_ORASSIGN = 316,
    TOK_IDENTIFIER = 317,
    TOK_TYPEDEFNAME = 318,
    TOK_INTEGER = 319,
    TOK_FLOATING = 320,
    TOK_CHARACTER = 321,
    TOK_STRING = 322,
    TOK_ASM_STRING = 323,
    TOK_INT8 = 324,
    TOK_INT16 = 325,
    TOK_INT32 = 326,
    TOK_INT64 = 327,
    TOK_PTR32 = 328,
    TOK_PTR64 = 329,
    TOK_TYPEOF = 330,
    TOK_GCC_AUTO_TYPE = 331,
    TOK_GCC_FLOAT80 = 332,
    TOK_GCC_FLOAT128 = 333,
    TOK_GCC_INT128 = 334,
    TOK_GCC_DECIMAL32 = 335,
    TOK_GCC_DECIMAL64 = 336,
    TOK_GCC_DECIMAL128 = 337,
    TOK_GCC_ASM = 338,
    TOK_GCC_ASM_PAREN = 339,
    TOK_GCC_ATTRIBUTE = 340,
    TOK_GCC_ATTRIBUTE_ALIGNED = 341,
    TOK_GCC_ATTRIBUTE_TRANSPARENT_UNION = 342,
    TOK_GCC_ATTRIBUTE_PACKED = 343,
    TOK_GCC_ATTRIBUTE_VECTOR_SIZE = 344,
    TOK_GCC_ATTRIBUTE_MODE = 345,
    TOK_GCC_ATTRIBUTE_GNU_INLINE = 346,
    TOK_GCC_ATTRIBUTE_END = 347,
    TOK_GCC_LABEL = 348,
    TOK_MSC_ASM = 349,
    TOK_MSC_BASED = 350,
    TOK_CW_VAR_ARG_TYPEOF = 351,
    TOK_BUILTIN_VA_ARG = 352,
    TOK_GCC_BUILTIN_TYPES_COMPATIBLE_P = 353,
    TOK_OFFSETOF = 354,
    TOK_ALIGNOF = 355,
    TOK_MSC_TRY = 356,
    TOK_MSC_FINALLY = 357,
    TOK_MSC_EXCEPT = 358,
    TOK_MSC_LEAVE = 359,
    TOK_MSC_DECLSPEC = 360,
    TOK_INTERFACE = 361,
    TOK_CDECL = 362,
    TOK_STDCALL = 363,
    TOK_FASTCALL = 364,
    TOK_CLRCALL = 365,
    TOK_FORALL = 366,
    TOK_EXISTS = 367,
    TOK_ACSL_FORALL = 368,
    TOK_ACSL_EXISTS = 369,
    TOK_ARRAY_OF = 370,
    TOK_CPROVER_BITVECTOR = 371,
    TOK_CPROVER_FLOATBV = 372,
    TOK_CPROVER_FIXEDBV = 373,
    TOK_CPROVER_ATOMIC = 374,
    TOK_CPROVER_BOOL = 375,
    TOK_CPROVER_THROW = 376,
    TOK_CPROVER_CATCH = 377,
    TOK_CPROVER_TRY = 378,
    TOK_CPROVER_FINALLY = 379,
    TOK_IMPLIES = 380,
    TOK_EQUIVALENT = 381,
    TOK_TRUE = 382,
    TOK_FALSE = 383,
    TOK_REAL = 384,
    TOK_IMAG = 385,
    TOK_ALIGNAS = 386,
    TOK_ATOMIC_TYPE_QUALIFIER = 387,
    TOK_ATOMIC_TYPE_SPECIFIER = 388,
    TOK_GENERIC = 389,
    TOK_IMAGINARY = 390,
    TOK_NORETURN = 391,
    TOK_STATIC_ASSERT = 392,
    TOK_THREAD_LOCAL = 393,
    TOK_NULLPTR = 394,
    TOK_CONSTEXPR = 395,
    TOK_SCANNER_ERROR = 396,
    TOK_SCANNER_EOF = 397,
    TOK_CATCH = 398,
    TOK_CHAR16_T = 399,
    TOK_CHAR32_T = 400,
    TOK_CLASS = 401,
    TOK_DELETE = 402,
    TOK_DECLTYPE = 403,
    TOK_EXPLICIT = 404,
    TOK_FRIEND = 405,
    TOK_MUTABLE = 406,
    TOK_NAMESPACE = 407,
    TOK_NEW = 408,
    TOK_NOEXCEPT = 409,
    TOK_OPERATOR = 410,
    TOK_PRIVATE = 411,
    TOK_PROTECTED = 412,
    TOK_PUBLIC = 413,
    TOK_TEMPLATE = 414,
    TOK_THIS = 415,
    TOK_THROW = 416,
    TOK_TYPEID = 417,
    TOK_TYPENAME = 418,
    TOK_TRY = 419,
    TOK_USING = 420,
    TOK_VIRTUAL = 421,
    TOK_SCOPE = 422,
    TOK_DOTPM = 423,
    TOK_ARROWPM = 424,
    TOK_MSC_UNARY_TYPE_PREDICATE = 425,
    TOK_MSC_BINARY_TYPE_PREDICATE = 426,
    TOK_MSC_UUIDOF = 427,
    TOK_MSC_IF_EXISTS = 428,
    TOK_MSC_IF_NOT_EXISTS = 429,
    TOK_MSC_UNDERLYING_TYPE = 430
  };
#endif
/* Tokens.  */
#define TOK_AUTO 258
#define TOK_BOOL 259
#define TOK_COMPLEX 260
#define TOK_BREAK 261
#define TOK_CASE 262
#define TOK_CHAR 263
#define TOK_CONST 264
#define TOK_CONTINUE 265
#define TOK_DEFAULT 266
#define TOK_DO 267
#define TOK_DOUBLE 268
#define TOK_ELSE 269
#define TOK_ENUM 270
#define TOK_EXTERN 271
#define TOK_FLOAT 272
#define TOK_FOR 273
#define TOK_GOTO 274
#define TOK_IF 275
#define TOK_INLINE 276
#define TOK_INT 277
#define TOK_LONG 278
#define TOK_REGISTER 279
#define TOK_RESTRICT 280
#define TOK_RETURN 281
#define TOK_SHORT 282
#define TOK_SIGNED 283
#define TOK_SIZEOF 284
#define TOK_STATIC 285
#define TOK_STRUCT 286
#define TOK_SWITCH 287
#define TOK_TYPEDEF 288
#define TOK_UNION 289
#define TOK_UNSIGNED 290
#define TOK_VOID 291
#define TOK_VOLATILE 292
#define TOK_WCHAR_T 293
#define TOK_WHILE 294
#define TOK_ARROW 295
#define TOK_INCR 296
#define TOK_DECR 297
#define TOK_SHIFTLEFT 298
#define TOK_SHIFTRIGHT 299
#define TOK_LE 300
#define TOK_GE 301
#define TOK_EQ 302
#define TOK_NE 303
#define TOK_ANDAND 304
#define TOK_OROR 305
#define TOK_ELLIPSIS 306
#define TOK_MULTASSIGN 307
#define TOK_DIVASSIGN 308
#define TOK_MODASSIGN 309
#define TOK_PLUSASSIGN 310
#define TOK_MINUSASSIGN 311
#define TOK_SHLASSIGN 312
#define TOK_SHRASSIGN 313
#define TOK_ANDASSIGN 314
#define TOK_XORASSIGN 315
#define TOK_ORASSIGN 316
#define TOK_IDENTIFIER 317
#define TOK_TYPEDEFNAME 318
#define TOK_INTEGER 319
#define TOK_FLOATING 320
#define TOK_CHARACTER 321
#define TOK_STRING 322
#define TOK_ASM_STRING 323
#define TOK_INT8 324
#define TOK_INT16 325
#define TOK_INT32 326
#define TOK_INT64 327
#define TOK_PTR32 328
#define TOK_PTR64 329
#define TOK_TYPEOF 330
#define TOK_GCC_AUTO_TYPE 331
#define TOK_GCC_FLOAT80 332
#define TOK_GCC_FLOAT128 333
#define TOK_GCC_INT128 334
#define TOK_GCC_DECIMAL32 335
#define TOK_GCC_DECIMAL64 336
#define TOK_GCC_DECIMAL128 337
#define TOK_GCC_ASM 338
#define TOK_GCC_ASM_PAREN 339
#define TOK_GCC_ATTRIBUTE 340
#define TOK_GCC_ATTRIBUTE_ALIGNED 341
#define TOK_GCC_ATTRIBUTE_TRANSPARENT_UNION 342
#define TOK_GCC_ATTRIBUTE_PACKED 343
#define TOK_GCC_ATTRIBUTE_VECTOR_SIZE 344
#define TOK_GCC_ATTRIBUTE_MODE 345
#define TOK_GCC_ATTRIBUTE_GNU_INLINE 346
#define TOK_GCC_ATTRIBUTE_END 347
#define TOK_GCC_LABEL 348
#define TOK_MSC_ASM 349
#define TOK_MSC_BASED 350
#define TOK_CW_VAR_ARG_TYPEOF 351
#define TOK_BUILTIN_VA_ARG 352
#define TOK_GCC_BUILTIN_TYPES_COMPATIBLE_P 353
#define TOK_OFFSETOF 354
#define TOK_ALIGNOF 355
#define TOK_MSC_TRY 356
#define TOK_MSC_FINALLY 357
#define TOK_MSC_EXCEPT 358
#define TOK_MSC_LEAVE 359
#define TOK_MSC_DECLSPEC 360
#define TOK_INTERFACE 361
#define TOK_CDECL 362
#define TOK_STDCALL 363
#define TOK_FASTCALL 364
#define TOK_CLRCALL 365
#define TOK_FORALL 366
#define TOK_EXISTS 367
#define TOK_ACSL_FORALL 368
#define TOK_ACSL_EXISTS 369
#define TOK_ARRAY_OF 370
#define TOK_CPROVER_BITVECTOR 371
#define TOK_CPROVER_FLOATBV 372
#define TOK_CPROVER_FIXEDBV 373
#define TOK_CPROVER_ATOMIC 374
#define TOK_CPROVER_BOOL 375
#define TOK_CPROVER_THROW 376
#define TOK_CPROVER_CATCH 377
#define TOK_CPROVER_TRY 378
#define TOK_CPROVER_FINALLY 379
#define TOK_IMPLIES 380
#define TOK_EQUIVALENT 381
#define TOK_TRUE 382
#define TOK_FALSE 383
#define TOK_REAL 384
#define TOK_IMAG 385
#define TOK_ALIGNAS 386
#define TOK_ATOMIC_TYPE_QUALIFIER 387
#define TOK_ATOMIC_TYPE_SPECIFIER 388
#define TOK_GENERIC 389
#define TOK_IMAGINARY 390
#define TOK_NORETURN 391
#define TOK_STATIC_ASSERT 392
#define TOK_THREAD_LOCAL 393
#define TOK_NULLPTR 394
#define TOK_CONSTEXPR 395
#define TOK_SCANNER_ERROR 396
#define TOK_SCANNER_EOF 397
#define TOK_CATCH 398
#define TOK_CHAR16_T 399
#define TOK_CHAR32_T 400
#define TOK_CLASS 401
#define TOK_DELETE 402
#define TOK_DECLTYPE 403
#define TOK_EXPLICIT 404
#define TOK_FRIEND 405
#define TOK_MUTABLE 406
#define TOK_NAMESPACE 407
#define TOK_NEW 408
#define TOK_NOEXCEPT 409
#define TOK_OPERATOR 410
#define TOK_PRIVATE 411
#define TOK_PROTECTED 412
#define TOK_PUBLIC 413
#define TOK_TEMPLATE 414
#define TOK_THIS 415
#define TOK_THROW 416
#define TOK_TYPEID 417
#define TOK_TYPENAME 418
#define TOK_TRY 419
#define TOK_USING 420
#define TOK_VIRTUAL 421
#define TOK_SCOPE 422
#define TOK_DOTPM 423
#define TOK_ARROWPM 424
#define TOK_MSC_UNARY_TYPE_PREDICATE 425
#define TOK_MSC_BINARY_TYPE_PREDICATE 426
#define TOK_MSC_UUIDOF 427
#define TOK_MSC_IF_EXISTS 428
#define TOK_MSC_IF_NOT_EXISTS 429
#define TOK_MSC_UNDERLYING_TYPE 430

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yyansi_clval;

int yyansi_cparse (void);

#endif /* !YY_YYANSI_C_ANSI_C_Y_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 510 "ansi_c_y.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  134
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6442

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  200
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  202
/* YYNRULES -- Number of rules.  */
#define YYNRULES  581
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1038

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   430

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   190,     2,     2,     2,   192,   185,     2,
     176,   177,   186,   187,   178,   188,   180,   191,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   179,   199,
     193,   198,   194,   197,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   181,     2,   182,   195,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   183,   196,   184,   189,     2,     2,     2,
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
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   241,   241,   247,   251,   255,   259,   263,   267,   272,
     273,   274,   275,   281,   282,   283,   285,   286,   287,   288,
     289,   290,   294,   304,   308,   315,   322,   332,   339,   353,
     362,   372,   380,   387,   397,   405,   415,   423,   435,   445,
     446,   448,   457,   466,   472,   478,   484,   491,   501,   515,
     516,   520,   525,   533,   534,   540,   546,   551,   561,   566,
     571,   576,   581,   586,   591,   596,   602,   611,   612,   619,
     624,   632,   633,   635,   637,   642,   643,   645,   650,   651,
     653,   658,   659,   661,   663,   665,   670,   671,   673,   678,
     679,   684,   685,   690,   691,   696,   697,   702,   703,   711,
     712,   720,   721,   726,   727,   734,   744,   745,   747,   749,
     751,   753,   755,   757,   759,   761,   763,   765,   770,   771,
     776,   781,   782,   788,   794,   800,   801,   802,   806,   818,
     817,   830,   829,   842,   841,   857,   864,   868,   872,   877,
     880,   886,   884,   902,   900,   918,   916,   932,   933,   934,
     935,   936,   940,   941,   942,   943,   944,   948,   949,   953,
     954,   958,   965,   966,   973,   980,   981,   988,   989,   993,
     994,   995,   996,   997,   998,   999,  1000,  1004,  1005,  1009,
    1010,  1011,  1015,  1016,  1023,  1027,  1031,  1035,  1042,  1046,
    1050,  1054,  1062,  1066,  1070,  1078,  1079,  1083,  1090,  1094,
    1098,  1105,  1109,  1113,  1120,  1124,  1128,  1135,  1139,  1143,
    1150,  1155,  1163,  1164,  1168,  1172,  1179,  1188,  1189,  1193,
    1197,  1204,  1208,  1212,  1219,  1220,  1224,  1228,  1232,  1236,
    1240,  1244,  1251,  1256,  1264,  1267,  1271,  1272,  1273,  1274,
    1275,  1276,  1277,  1278,  1279,  1283,  1284,  1285,  1286,  1287,
    1288,  1289,  1290,  1291,  1292,  1293,  1294,  1295,  1296,  1297,
    1298,  1299,  1300,  1301,  1302,  1303,  1304,  1310,  1317,  1324,
    1328,  1329,  1330,  1334,  1339,  1351,  1348,  1369,  1365,  1389,
    1385,  1402,  1404,  1409,  1414,  1423,  1426,  1431,  1434,  1440,
    1445,  1454,  1455,  1462,  1468,  1471,  1475,  1476,  1483,  1485,
    1487,  1489,  1491,  1493,  1495,  1497,  1502,  1505,  1509,  1514,
    1522,  1523,  1524,  1528,  1535,  1546,  1554,  1569,  1577,  1588,
    1591,  1602,  1611,  1623,  1626,  1630,  1642,  1640,  1654,  1651,
    1664,  1675,  1684,  1687,  1691,  1696,  1701,  1708,  1719,  1723,
    1730,  1731,  1740,  1745,  1752,  1761,  1766,  1774,  1782,  1789,
    1797,  1806,  1814,  1821,  1829,  1837,  1844,  1852,  1860,  1868,
    1875,  1886,  1887,  1891,  1895,  1900,  1904,  1913,  1917,  1927,
    1928,  1934,  1943,  1951,  1959,  1961,  1969,  1970,  1978,  1984,
    1999,  2006,  2013,  2021,  2028,  2036,  2048,  2049,  2050,  2051,
    2052,  2053,  2054,  2055,  2056,  2057,  2058,  2059,  2063,  2072,
    2080,  2087,  2096,  2107,  2114,  2122,  2134,  2141,  2146,  2153,
    2168,  2177,  2186,  2197,  2198,  2202,  2210,  2219,  2218,  2246,
    2263,  2270,  2272,  2274,  2276,  2281,  2302,  2307,  2314,  2318,
    2324,  2335,  2341,  2350,  2359,  2367,  2375,  2380,  2388,  2398,
    2400,  2401,  2402,  2403,  2415,  2421,  2428,  2436,  2445,  2457,
    2461,  2465,  2469,  2475,  2485,  2490,  2498,  2502,  2506,  2512,
    2522,  2527,  2535,  2539,  2543,  2551,  2556,  2564,  2568,  2572,
    2577,  2585,  2593,  2595,  2599,  2600,  2604,  2609,  2613,  2614,
    2618,  2625,  2646,  2651,  2654,  2658,  2663,  2671,  2676,  2677,
    2681,  2688,  2692,  2696,  2700,  2708,  2712,  2716,  2724,  2729,
    2739,  2740,  2741,  2745,  2751,  2757,  2765,  2773,  2780,  2787,
    2794,  2804,  2805,  2809,  2810,  2814,  2815,  2820,  2824,  2825,
    2830,  2838,  2840,  2850,  2851,  2856,  2862,  2867,  2875,  2877,
    2882,  2892,  2893,  2898,  2899,  2903,  2904,  2909,  2922,  2928,
    2930,  2940,  2947,  2952,  2953,  2954,  2958,  2959,  2963,  2965,
    2976,  2975,  2998,  2999,  3007,  3006,  3026,  3033,  3043,  3051,
    3058,  3067,  3076,  3089,  3095,  3103,  3108,  3118,  3129,  3135,
    3143,  3148,  3158,  3169,  3171,  3173,  3175,  3181,  3190,  3192,
    3194,  3195
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"auto\"", "\"bool\"", "\"complex\"",
  "\"break\"", "\"case\"", "\"char\"", "\"const\"", "\"continue\"",
  "\"default\"", "\"do\"", "\"double\"", "\"else\"", "\"enum\"",
  "\"extern\"", "\"float\"", "\"for\"", "\"goto\"", "\"if\"", "\"inline\"",
  "\"int\"", "\"long\"", "\"register\"", "\"restrict\"", "\"return\"",
  "\"short\"", "\"signed\"", "\"sizeof\"", "\"static\"", "\"struct\"",
  "\"switch\"", "\"typedef\"", "\"union\"", "\"unsigned\"", "\"void\"",
  "\"volatile\"", "\"wchar_t\"", "\"while\"", "\"->\"", "\"++\"", "\"--\"",
  "\"<<\"", "\">>\"", "\"<=\"", "\">=\"", "\"==\"", "\"!=\"", "\"&&\"",
  "\"||\"", "\"...\"", "\"*=\"", "\"/=\"", "\"%=\"", "\"+=\"", "\"-=\"",
  "\"<<=\"", "\">>=\"", "\"&=\"", "\"^=\"", "\"|=\"", "TOK_IDENTIFIER",
  "TOK_TYPEDEFNAME", "TOK_INTEGER", "TOK_FLOATING", "TOK_CHARACTER",
  "TOK_STRING", "TOK_ASM_STRING", "\"__int8\"", "\"__int16\"",
  "\"__int32\"", "\"__int64\"", "\"__ptr32\"", "\"__ptr64\"", "\"typeof\"",
  "\"__auto_type\"", "\"__float80\"", "\"__float128\"", "\"__int128\"",
  "\"_Decimal32\"", "\"_Decimal64\"", "\"_Decimal128\"", "\"__asm__\"",
  "\"__asm__ (with parentheses)\"", "\"__attribute__\"", "\"aligned\"",
  "\"transparent_union\"", "\"packed\"", "\"vector_size\"", "\"mode\"",
  "\"__gnu_inline__\"", "\")\"", "\"__label__\"", "\"__asm\"",
  "\"__based\"", "\"_var_arg_typeof\"", "\"__builtin_va_arg\"",
  "\"__builtin_types_compatible_p\"", "\"__offsetof\"", "\"__alignof__\"",
  "\"__try\"", "\"__finally\"", "\"__except\"", "\"__leave\"",
  "\"__declspec\"", "\"__interface\"", "\"__cdecl\"", "\"__stdcall\"",
  "\"__fastcall\"", "\"__clrcall\"", "\"forall\"", "\"exists\"",
  "\"\\\\forall\"", "\"\\\\exists\"", "\"array_of\"",
  "\"__CPROVER_bitvector\"", "\"__CPROVER_floatbv\"",
  "\"__CPROVER_fixedbv\"", "\"__CPROVER_atomic\"", "\"__CPROVER_bool\"",
  "\"__CPROVER_throw\"", "\"__CPROVER_catch\"", "\"__CPROVER_try\"",
  "\"__CPROVER_finally\"", "\"==>\"", "\"<==>\"", "\"TRUE\"", "\"FALSE\"",
  "\"__real__\"", "\"__imag__\"", "\"_Alignas\"", "\"_Atomic\"",
  "\"_Atomic()\"", "\"_Generic\"", "\"_Imaginary\"", "\"_Noreturn\"",
  "\"_Static_assert\"", "\"_Thread_local\"", "\"nullptr\"",
  "\"constexpr\"", "TOK_SCANNER_ERROR", "TOK_SCANNER_EOF", "\"catch\"",
  "\"char16_t\"", "\"char32_t\"", "\"class\"", "\"delete\"",
  "\"decltype\"", "\"explicit\"", "\"friend\"", "\"mutable\"",
  "\"namespace\"", "\"new\"", "\"noexcept\"", "\"operator\"",
  "\"private\"", "\"protected\"", "\"public\"", "\"template\"", "\"this\"",
  "\"throw\"", "\"typeid\"", "\"typename\"", "\"try\"", "\"using\"",
  "\"virtual\"", "\"::\"", "\".*\"", "\"->*\"",
  "TOK_MSC_UNARY_TYPE_PREDICATE", "TOK_MSC_BINARY_TYPE_PREDICATE",
  "\"__uuidof\"", "\"__if_exists\"", "\"__if_not_exists\"",
  "\"__underlying_type\"", "'('", "')'", "','", "':'", "'.'", "'['", "']'",
  "'{'", "'}'", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'",
  "'<'", "'>'", "'^'", "'|'", "'?'", "'='", "';'", "$accept", "grammar",
  "identifier", "typedef_name", "integer", "floating", "character",
  "string", "constant", "primary_expression", "generic_selection",
  "generic_assoc_list", "generic_association", "gcc_builtin_expressions",
  "cw_builtin_expressions", "offsetof", "offsetof_member_designator",
  "quantifier_expression", "statement_expression", "postfix_expression",
  "member_name", "argument_expression_list", "unary_expression",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "logical_implication_expression", "logical_equivalence_expression",
  "conditional_expression", "assignment_expression", "comma_expression",
  "constant_expression", "comma_expression_opt", "declaration",
  "static_assert_declaration", "default_declaring_list", "@1", "@2", "$@3",
  "post_declarator_attribute", "post_declarator_attributes",
  "post_declarator_attributes_opt", "declaring_list", "@4", "@5", "$@6",
  "declaration_specifier", "type_specifier", "declaration_qualifier_list",
  "type_qualifier_list", "attribute_type_qualifier_list",
  "declaration_qualifier", "type_qualifier", "attribute_or_type_qualifier",
  "attribute_or_type_qualifier_or_storage_class",
  "attribute_type_qualifier_storage_class_list",
  "basic_declaration_specifier", "basic_type_specifier",
  "sue_declaration_specifier", "sue_type_specifier",
  "typedef_declaration_specifier", "typeof_declaration_specifier",
  "atomic_declaration_specifier", "typedef_type_specifier",
  "typeof_specifier", "typeof_type_specifier", "atomic_specifier",
  "atomic_type_specifier", "msc_decl_identifier", "msc_decl_modifier",
  "msc_declspec_seq", "msc_declspec", "msc_declspec_opt", "storage_class",
  "basic_type_name", "elaborated_type_name", "array_of_construct",
  "pragma_packed", "aggregate_name", "$@7", "$@8", "$@9", "aggregate_key",
  "gcc_attribute_expression_list", "gcc_attribute_expression_list_opt",
  "gcc_attribute", "gcc_attribute_list", "gcc_attribute_specifier",
  "gcc_type_attribute_opt", "gcc_type_attribute_list",
  "gcc_type_attribute", "member_declaration_list_opt",
  "member_declaration_list", "member_declaration",
  "member_default_declaring_list", "member_declaring_list",
  "member_declarator", "member_identifier_declarator",
  "bit_field_size_opt", "bit_field_size", "enum_name", "$@10", "$@11",
  "enum_key", "enumerator_list_opt", "enumerator_list",
  "enumerator_declaration", "enumerator_value_opt", "parameter_type_list",
  "KnR_parameter_list", "KnR_parameter", "parameter_list",
  "parameter_declaration", "identifier_or_typedef_name", "type_name",
  "initializer_opt", "initializer", "initializer_list",
  "initializer_list_opt", "designated_initializer", "designator",
  "statement", "declaration_statement", "labeled_statement",
  "compound_statement", "compound_scope", "statement_list",
  "expression_statement", "selection_statement",
  "declaration_or_expression_statement", "iteration_statement", "$@12",
  "jump_statement", "gcc_local_label_statement", "gcc_local_label_list",
  "gcc_local_label", "gcc_asm_statement", "msc_asm_statement",
  "msc_seh_statement", "cprover_exception_statement",
  "volatile_or_goto_opt", "gcc_asm_commands", "gcc_asm_assembler_template",
  "gcc_asm_outputs", "gcc_asm_output", "gcc_asm_output_list",
  "gcc_asm_inputs", "gcc_asm_input", "gcc_asm_input_list",
  "gcc_asm_clobbered_registers", "gcc_asm_clobbered_register",
  "gcc_asm_clobbered_registers_list", "gcc_asm_labels",
  "gcc_asm_labels_list", "gcc_asm_label", "translation_unit",
  "external_definition_list", "external_definition", "asm_definition",
  "function_definition", "function_body", "KnR_parameter_header_opt",
  "KnR_parameter_header", "KnR_parameter_declaration",
  "KnR_declaration_qualifier_list", "KnR_basic_declaration_specifier",
  "KnR_typedef_declaration_specifier", "KnR_sue_declaration_specifier",
  "KnR_declaration_specifier", "KnR_parameter_declaring_list",
  "function_head", "declarator", "typedef_declarator",
  "parameter_typedef_declarator", "clean_typedef_declarator",
  "clean_postfix_typedef_declarator", "paren_typedef_declarator",
  "paren_postfix_typedef_declarator", "simple_paren_typedef_declarator",
  "identifier_declarator", "unary_identifier_declarator",
  "postfix_identifier_declarator", "paren_identifier_declarator",
  "abstract_declarator", "parameter_abstract_declarator",
  "postfixing_abstract_declarator", "$@13",
  "parameter_postfixing_abstract_declarator", "$@14",
  "array_abstract_declarator", "unary_abstract_declarator",
  "parameter_unary_abstract_declarator", "postfix_abstract_declarator",
  "parameter_postfix_abstract_declarator", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,    40,    41,    44,    58,
      46,    91,    93,   123,   125,    38,    42,    43,    45,   126,
      33,    47,    37,    60,    62,    94,   124,    63,    61,    59
};
# endif

#define YYPACT_NINF -804

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-804)))

#define YYTABLE_NINF -551

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1844,  -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,
    -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,
    -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,
    -804,  -804,  -100,  -804,  -804,  -804,  -804,  -804,  -804,  -804,
     -86,   -78,   -38,    22,    35,   -53,    12,    94,    62,    73,
     104,    75,   122,   161,  -804,  -804,  -804,   108,   194,  -804,
     119,  3532,  -804,   374,  -804,  1182,  -804,   187,  -110,   -32,
      24,    38,  3281,  3281,  -804,  5954,  5954,  5983,  5983,  5983,
    5983,  5983,  5983,   820,   277,   820,   277,  -804,  -804,  1182,
    -804,  -804,  -804,  1182,  -804,  -804,  -804,  1182,  -804,  1844,
    -804,  -804,  -804,  -804,  -804,  -804,  -804,    77,  3862,   316,
     217,  -804,  4907,  -804,  -804,  4907,   333,  -804,  4907,    44,
    1182,  4907,  4907,  4907,  1182,  4907,   226,   138,  1328,   119,
     815,  -804,  -804,  -804,  -804,  -804,  1182,  -804,  -804,   119,
    -804,   246,  -804,   264,  3477,  -804,    77,  1017,  -804,  -804,
    -804,  -804,  -804,  -804,  -804,  -804,  1348,  1182,  -804,  -804,
    1182,  1182,  -804,  1182,  -804,  -804,   231,  1182,  -804,   820,
     820,  -804,  1182,  -804,  -804,   240,  1182,  1182,  -804,  1182,
    1182,  -804,  -804,  -804,  1182,  1182,  1182,  1182,  1182,  1328,
    1182,  1328,  1182,  -804,   332,   400,  -804,  -804,   247,  -804,
      -5,  2938,  -804,  -804,   263,  5062,  5101,  5101,   400,  -804,
    -804,  -804,  -804,   279,   298,   318,   335,  5204,  -804,  -804,
    -804,  -804,  4907,  4907,   346,  3756,  4907,  4907,  4907,  4907,
    4907,  4907,  -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,
    -804,  -804,  -804,  -804,  -804,    52,  -804,   980,  -111,   103,
     429,    -1,   441,   268,   309,   341,   465,     5,  -804,   -76,
    -804,  -804,   380,  6193,   347,   376,    57,   383,   401,   378,
     426,  -804,  -804,  -804,  -804,  -804,   369,  -804,    49,   375,
     -22,    63,    87,   394,   395,    77,  -804,   815,  -804,  1004,
    -804,  -804,  -804,  1364,   264,  -804,   398,   406,    77,   264,
     327,  -804,  -804,  -804,    60,  -804,  1364,  -804,  -804,  -804,
    -804,  -804,  -804,  -804,   388,  -804,  1328,  1328,  -804,   388,
    -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,
    -804,  -804,   400,  -804,  -804,   405,  1387,  2242,  5710,   333,
    5584,  -804,  4242,  -804,   414,  -804,  -804,  3068,  -804,  -804,
    5002,  3756,  -804,  3756,  -804,  -804,  -804,  -804,  1182,  4907,
    1182,  1182,  3756,  -804,   418,   422,  5332,  5332,  -804,  -804,
    4907,   430,   433,   443,  -804,  -804,  -804,  -804,  -804,  -804,
     400,  -804,  -804,  4337,   400,  4907,  4907,  4907,  4907,  4907,
    4907,  4907,  4907,  4907,  4907,  4907,  4907,  4907,  4907,  4907,
    4907,  4907,  4907,  4907,  4907,  4907,  4907,  4907,  4907,  4907,
    4907,  4907,  4907,  4907,  4907,  4907,  4907,  4432,  -804,  4907,
     373,  2106,  6310,   820,   820,  -804,  -804,  -804,   438,  -804,
     467,  -804,   436,   549,   555,   561,  -804,   354,  -804,  -804,
    -804,  -804,   488,   494,  -804,  4907,  -804,   388,  -804,   144,
      77,    77,   490,   177,   264,  -804,  -804,   641,   681,   541,
    -804,   388,   388,  4527,  -804,  -804,   552,   557,   400,  -804,
     558,   525,  4907,   539,   565,  2618,  -804,  4622,   574,  3546,
     575,   576,   569,    60,   400,    -9,  -804,  -804,   560,  -804,
    -804,   577,    46,   585,   566,  -804,    24,    38,  3281,  3281,
     587,  -804,  -804,  -804,  -804,  2430,  -804,  -804,  -804,  -804,
    -804,  -804,  -804,  -804,  -804,   246,  6072,   277,  5954,  5983,
    -804,  5710,  -804,  5836,  5954,  5983,  -804,   246,   -12,  -804,
     439,  -804,   250,   250,  1975,  1975,   591,   586,  -804,  -804,
    -804,  -804,   572,  -804,  4717,   588,   592,   594,   595,   598,
     599,   600,   596,  5332,  5332,  1214,  1214,   602,  -804,  4812,
    -804,  -804,  -804,  -804,  -804,   452,  -804,  -804,   151,  -804,
    -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,
    -804,  -804,  -804,  -804,  -111,  -111,   103,   103,   429,   429,
     429,   429,    -1,    -1,   441,   268,   309,   341,   465,  -804,
    -804,  4907,   454,  -804,   154,  3151,  -804,  -804,  -804,  -804,
    -804,  -804,  -804,  4907,   606,    57,  -804,  -804,  -804,   607,
     611,   593,  4907,  4907,   613,  -804,   388,  -804,  -804,  -804,
    -804,  -804,   248,  -804,  -804,   316,  -804,  -804,  4147,  -804,
    -804,  1137,   609,  1182,   610,   615,  -804,  1182,   400,  -804,
       1,  -804,  2618,   759,   624,   605,    64,  4907,  -804,    65,
    4907,  4907,  -804,   -63,    79,  -804,  -804,   739,   548,  -804,
     228,  -804,  1364,  1364,  -804,  -804,  2618,  -804,  -804,  -804,
    -804,  1182,  1182,  -804,  1182,  -804,  1182,   400,   400,  1182,
    1182,  1182,  -804,   246,  -804,  5710,   333,   262,  1309,  -804,
    -804,  1182,  -804,  -804,  -804,  -804,  -804,  1182,  -804,   314,
    1635,  1182,  -804,  1182,  -804,  -804,  5458,  -804,  -804,  -804,
     625,   625,  -804,  1182,  1182,   400,   625,  4907,  4907,  4907,
    -804,  -804,   960,  4147,  -804,  -804,  4907,  -804,  -804,  4907,
     632,   637,   640,   373,  -804,  -804,   642,   645,  -804,  -804,
    -804,  -804,    92,   184,   338,  -804,  -804,  -804,  -804,   647,
     639,   400,  4907,   651,   652,  -804,   657,   635,  -804,  3650,
    -804,   638,  6193,   654,  1380,  -804,    97,   105,  1137,  -804,
    1182,   400,   644,   666,  4907,  2618,  -804,   660,  2806,  -804,
    -804,   481,  -804,   486,   675,   316,   785,   400,  -804,   670,
    -804,   679,  -804,  -804,  -804,  -804,  -804,  -804,  -804,  1182,
    1182,  -804,  -804,  -804,  -804,  -804,  5710,  -804,  -804,   683,
     687,   250,  -804,  -804,  -804,   192,  -804,  -804,  -804,  -804,
     688,   692,   299,  -804,    56,    89,   677,   503,  -804,   694,
     680,   690,  -804,  -804,  -804,    77,    77,  -804,  4907,  -804,
     505,  -804,  -804,  -804,    10,   697,  -804,     7,  4527,  3957,
    -804,   400,  4907,  4527,  -804,  -804,    95,  3403,  1182,  -804,
     106,  -804,    95,  -804,   695,  -804,  -804,  4907,  -804,  1182,
     705,  -804,  4907,  -804,  -804,  4907,  2618,  2618,  2618,   708,
     707,  -804,  -804,  -804,  4907,  -804,  -804,  -804,  -804,   196,
    -804,  -804,  -804,  -804,  -804,   400,  4907,  -804,  -804,  4907,
    -804,   960,  4907,  4052,  -804,  -804,  -804,  -804,  -804,    92,
     400,   720,  -804,   693,    48,   718,  4907,  -804,  -804,  -804,
    -804,  -804,    16,  -804,  4907,  -804,  1182,   721,  -804,  1182,
     721,  -804,  -804,  -804,  1182,  -804,  -804,  2618,   507,   700,
     888,  -804,  -804,   704,  -804,   512,   727,  -804,  -804,   339,
    -804,  -804,  -804,  -804,   710,   728,  4907,    10,   400,   733,
    -804,   743,   316,   732,   360,  4907,  -804,  -804,  -804,  1182,
    -804,  -804,  1182,  -804,  -804,  -804,   723,  4907,  2618,  -804,
    -804,  -804,    92,   316,   514,  -804,   735,  4907,    48,  -804,
    -804,   745,   400,  -804,  -804,   368,  -804,  -804,  -804,  -804,
     749,  -804,  -804,   751,   753,  -804,   316,   527,  -804,   316,
    -804,   752,  -804,  -804,  2618,  -804,  4907,   755,  -804,  -804,
     400,  -804,   529,  4907,  -804,  -804,   538,  -804
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     472,   239,   264,   265,   250,   170,   260,   331,   237,   253,
     241,   245,   252,   240,   171,   251,   261,   238,   281,   236,
     282,   262,   263,   172,     3,     4,   246,   247,   248,   249,
     174,   175,     0,   254,   255,   256,   257,   258,   259,   243,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   173,   269,   169,     0,     0,   242,
       0,     0,   479,     0,   541,   294,   477,     0,     0,     0,
       0,     0,     0,     0,   162,   147,   152,   148,   153,   149,
     150,   151,   154,   212,   155,   217,   156,   244,   157,   294,
     195,   272,   270,   294,   305,   159,   271,   294,     2,   473,
     474,   478,   476,   406,   506,   533,   535,   534,   294,     0,
       0,   301,     0,   299,   298,     0,     0,   304,     0,     0,
     294,     0,     0,     0,   294,     0,     0,     0,     0,     0,
     162,   165,   178,   536,     1,   207,   295,   296,   125,     0,
     127,     0,   126,     0,     0,   123,   515,   139,   512,   514,
     517,   518,   513,   523,   511,   124,   139,   294,   161,   168,
     294,   294,   167,   294,   192,   160,   129,   294,   163,   213,
     218,   158,   294,   196,   164,   131,   294,   294,   190,   294,
     294,   194,   197,   193,   294,   294,   294,   294,   294,   215,
     294,   220,   294,   188,   234,   326,   475,   482,     0,   481,
     554,     0,   538,   548,   552,     0,     0,     0,     0,     5,
       6,     7,     8,     0,     0,     0,     0,     0,   406,   406,
     406,   406,     0,     0,     0,   294,     0,     0,     0,     0,
       0,     0,    13,     9,    10,    11,    12,    14,    39,    21,
      17,    18,    19,    20,    16,    53,    67,    71,    75,    78,
      81,    86,    89,    91,    93,    95,    97,    99,   101,   103,
     106,   118,     0,     0,     0,     0,   287,     0,     0,     0,
       0,   223,   221,   222,   233,   229,   224,   230,     0,     0,
       0,     0,     0,     0,     0,   539,   542,   163,   166,   164,
     537,   297,   133,   139,     0,   531,     0,     0,     0,     0,
       0,   519,   526,   516,   439,   138,   140,   141,   136,   143,
     199,   202,   205,   184,   367,   208,   214,   219,   189,   367,
     186,   187,   185,   191,   200,   203,   206,   209,   198,   201,
     204,   235,   275,   361,   362,     0,   294,   121,   553,     0,
       0,   556,     0,   120,     0,   179,   182,     0,   181,   180,
       0,   294,    63,   294,    54,    55,   428,    57,   294,     0,
     294,   294,   294,    65,     0,     0,     0,     0,    69,    70,
       0,     0,     0,     0,    56,    58,    59,    60,    61,    62,
       0,    45,    46,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   210,     0,
     363,   365,   152,   153,   154,   155,   156,   211,     0,   288,
     289,   291,     0,     0,     0,     0,   176,     0,   232,   231,
     273,   266,     0,     0,   216,     0,   540,   367,   145,     0,
     521,   528,     0,     0,     0,   520,   527,   441,   440,     0,
     137,   367,   367,     0,   130,   132,     0,   279,   332,   330,
       0,     0,     0,     0,     0,   121,   417,     0,     0,     0,
       0,     0,     0,   439,     0,     0,   406,   435,     0,   406,
     403,    13,   294,   122,     0,   398,     0,     0,     0,     0,
       0,   407,   388,   386,   387,   121,   389,   390,   391,   392,
     394,   393,   395,   396,   397,     0,     0,   162,   152,   154,
     488,   549,   485,     0,   500,   501,   502,     0,     0,   344,
       0,   342,   347,   354,   351,   358,     0,   340,   345,   558,
     559,   557,     0,   183,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,     0,
      38,    49,    50,    44,    41,     0,    51,    43,     0,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   107,
      72,    73,    74,    71,    76,    77,    79,    80,    84,    85,
      82,    83,    87,    88,    90,    92,    94,    96,    98,   100,
     102,     0,     0,   119,   554,   563,   567,   364,   545,   543,
     544,   366,   480,   285,     0,   287,   302,   300,   303,     0,
       0,     0,     0,     0,     0,   134,   367,   532,   522,   530,
     529,   524,     0,   442,   443,     0,   142,   144,   375,   369,
     368,   294,     0,   294,     0,   333,   334,   294,   332,   422,
       0,   421,   121,     0,     0,     0,     0,     0,   423,     0,
       0,   121,   405,     0,     0,   426,   432,     0,     0,   436,
       0,   409,   139,   139,   129,   131,   121,   404,   408,   504,
     489,   294,   294,   486,   294,   490,   294,     0,     0,   294,
     294,   294,   503,     0,   487,   483,     0,   554,   568,   572,
     350,   294,   348,   580,   546,   547,   357,   294,   355,   554,
     568,   294,   352,   294,   359,   555,     0,   560,   562,   561,
      64,     0,    29,   294,   294,     0,    66,     0,     0,   406,
      35,    37,   294,   375,    68,    42,     0,    40,   105,     0,
       0,     0,     0,   564,   565,   283,   286,     0,   293,   292,
     226,   225,     0,     0,     0,   128,   146,   525,   449,     0,
     444,     0,     0,    13,     0,   376,   374,     0,   372,     0,
     312,     0,     0,     0,   294,   308,     0,     0,   294,   280,
     294,   336,   338,     0,     0,   121,   402,     0,   121,   420,
     419,     0,   424,     0,     0,     0,     0,     0,   425,     0,
     406,     0,   406,   406,   399,   492,   495,   496,   491,   294,
     294,   493,   494,   497,   505,   551,   484,   343,   553,     0,
       0,   569,   570,   349,   356,   569,   353,   360,   341,   346,
       0,     0,     0,    31,     0,     0,     0,     0,    23,     0,
     374,     0,    52,   104,   575,   573,   574,   566,     0,   290,
       0,   267,   268,   135,   451,   445,   380,     0,     0,     0,
     370,     0,     0,     0,   378,   313,   319,     0,   294,   309,
       0,   311,   319,   310,     0,   327,   335,     0,   337,   294,
       0,   400,     0,   413,   414,   121,   121,   121,   121,     0,
       0,   427,   431,   434,     0,   437,   438,   498,   499,   578,
     579,   571,    27,    28,    30,     0,     0,    34,    36,     0,
      22,   294,     0,     0,    47,   577,   576,   284,   227,     0,
       0,     0,   454,   450,   457,   446,     0,   381,   379,   371,
     373,   385,     0,   377,     0,   316,   294,   323,   314,   294,
     323,   274,   315,   317,   294,   339,   329,   121,     0,     0,
     410,   412,   415,     0,   430,     0,   554,   581,    32,     0,
      26,    24,    25,    48,     0,     0,     0,     0,     0,     0,
     460,   456,   463,   447,     0,     0,   383,   325,   320,   294,
     324,   322,   294,   276,   274,   401,     0,   121,   121,   429,
     406,    33,     0,     0,     0,   455,     0,     0,     0,   464,
     465,   462,   468,   448,   382,     0,   318,   321,   278,   416,
       0,   411,   433,     0,     0,   452,     0,     0,   461,     0,
     471,   467,   469,   384,   121,   228,     0,     0,   458,   466,
       0,   418,     0,     0,   470,   453,     0,   459
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -804,  -804,     0,   328,  -804,  -804,  -804,   -92,  -804,   165,
    -804,  -804,    21,  -804,  -804,  -804,  -804,  -804,  -804,  -804,
    -333,  -804,   301,  1147,   329,   325,   193,   323,   523,   524,
     526,   528,   530,  -804,   331,  -804,  -590,   870,   -83,  -200,
    -630,    41,  -605,  -804,  -804,  -804,  -804,   631,  -804,  -142,
    -804,  -804,  -804,  -804,     3,    23,     6,   118,  -118,   132,
    1003,   812,   604,  -804,  -804,  -210,  -804,  -185,  -804,  -804,
    -804,  -154,   -65,  -102,   -52,   -61,  -407,   664,  -804,   762,
    -804,  1093,   -57,    31,  -804,   -39,  -804,  -804,  -804,  -804,
     423,  -804,  -804,   334,  -804,  -804,   966,  -804,   420,   175,
    -804,   183,  -804,  -804,    88,    93,    19,  -722,  -804,  -804,
    -804,   442,   319,  -804,   181,  -804,  -804,  -804,   273,  -804,
     254,  -162,    51,  -285,  -453,   239,   242,  -803,  -804,   -40,
     176,  -804,  -101,   453,  -804,   189,  -804,  -804,  -804,  -804,
    -804,  -804,  -804,  -195,  -804,  -804,  -804,  -804,   495,   186,
    -804,  -804,    15,  -804,  -804,   -19,  -804,  -804,   -36,  -804,
    -804,  -804,   -45,  -804,  -804,   887,  -804,  -804,  -804,  -804,
     292,  -493,  -804,  -804,  -804,  -804,  -804,  -804,  -804,    55,
    -804,  -135,  -116,  -804,   -95,  -804,  -257,    91,   -55,  -804,
     -48,  -399,  -470,  -103,  -804,  -450,  -804,  -804,   385,  -601,
     386,  -478
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    63,   232,   146,   233,   234,   235,   236,   237,   238,
     239,   837,   838,   240,   241,   242,   832,   243,   244,   245,
     764,   565,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   493,   639,
     494,   495,    67,    68,   314,   319,   447,   305,   306,   307,
      69,   461,   462,   626,   496,   497,   498,   499,   129,   158,
      74,   131,   346,   347,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,   276,   277,   278,    87,
     332,    88,    89,    90,    91,   983,    92,   466,   642,   643,
      93,   746,   747,   431,   432,    94,   263,   136,   137,   773,
     774,   775,   776,   777,   935,   938,   979,   936,    96,   335,
     470,    97,   644,   645,   646,   878,   536,   530,   531,   537,
     538,   500,   839,   464,   765,   766,   767,   768,   769,   501,
     502,   503,   504,   198,   505,   506,   507,   885,   508,   654,
     509,   510,   664,  1020,   511,   512,   513,   514,   459,   759,
     760,   855,   922,   923,   925,   970,   971,   973,  1000,  1001,
    1003,  1021,  1022,    98,    99,   100,   101,   102,   199,   815,
     521,   522,   523,   524,   525,   526,   527,   528,   103,   937,
     148,   149,   150,   151,   152,   153,   298,   154,   105,   106,
     107,   607,   822,   452,   339,   203,   340,   204,   609,   704,
     610,   705
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      64,   344,   197,    70,   202,   126,    72,   160,   169,   301,
     640,   738,   127,   357,   309,   163,   172,   265,   177,   180,
     161,   170,   611,    71,   202,   262,   300,   296,   683,   267,
     621,   794,   268,   336,   465,   270,   771,   449,   280,   281,
     282,    66,   453,   303,   404,   405,   356,   563,   297,   302,
     416,   567,   784,   422,   111,   414,   930,  -550,   926,   666,
      64,    64,   702,   708,   712,   714,   429,   975,   139,   271,
      64,    64,    64,    64,   271,   397,   108,   212,   423,   457,
     398,   399,   703,   703,   703,   703,    24,    25,   126,   140,
     109,   104,   380,   381,   382,   127,   819,   458,   110,    64,
      24,    25,    70,   164,   173,    72,   272,   273,   819,   424,
     930,   272,   273,   795,   113,   212,   269,   271,    73,    24,
     796,   417,    71,   115,   373,   147,   156,   114,   518,    64,
     415,    41,    42,    43,    44,    45,    46,    47,   112,    64,
      66,    64,   371,    64,    64,   939,   141,   542,   939,   843,
     545,   448,   133,   423,   272,   273,   419,    24,    25,   264,
     441,   425,   625,   166,   175,   455,   693,   142,    24,   771,
     467,   279,   338,   771,   667,   283,   636,   637,   296,   128,
     785,    24,   446,   296,   519,   419,   117,   694,   116,   927,
     104,   920,   406,   407,   419,   333,   293,   632,   976,   297,
     143,   189,   426,   191,   297,   456,   744,   176,   333,   181,
     144,   184,   185,   186,   143,   980,  -550,    73,   980,   820,
     290,   274,   275,   145,   144,  -362,   438,   275,   383,   968,
     292,   820,   384,   385,   419,   133,   425,   155,   118,   126,
     907,   419,   419,   419,   126,   442,   127,   703,   703,   119,
     373,   127,   373,   200,    24,   949,   121,   797,   201,   703,
     703,   373,   128,   790,   792,   419,   430,   419,   371,   443,
     371,   143,   650,   908,   934,   870,   372,   426,   798,   371,
       1,   144,    60,   872,   124,   934,   420,   316,   317,   665,
     400,   401,    61,     8,    64,    60,   871,   120,    10,    64,
      64,    13,   568,   122,   873,    61,   647,    17,    24,    25,
      19,   518,    24,    25,   200,   286,   864,   608,   608,   201,
     200,   627,   356,   683,    24,   201,    24,    25,    65,   419,
     604,   338,   333,   737,   602,   201,   423,   491,   296,   529,
     605,   756,   123,   532,   847,   850,   534,   628,   629,   606,
     802,   901,   803,   200,   631,   901,   169,  1010,   201,   297,
      39,   515,   419,   533,   172,   180,   851,   519,   709,   170,
     125,   703,   956,   201,   134,   703,    24,   201,   710,   271,
     561,   421,    49,   212,   561,   668,   138,   699,   670,    24,
      25,   290,   833,   266,   656,    24,   659,   700,   706,   126,
     157,   167,   546,   285,   547,   928,   127,   555,   556,   548,
     933,   550,   551,   552,  -509,    59,   272,   273,   619,   425,
      95,   620,   143,  -510,   200,   757,   697,    65,   856,   201,
     337,   201,   144,   160,   169,   653,   698,    49,   697,   818,
     294,   163,   172,   201,   350,   699,   161,   170,   698,   957,
     144,   169,   173,   410,    64,   358,   516,   699,   535,   172,
     426,   180,    24,    25,   170,   678,   686,   690,   333,   160,
     169,   295,   402,   403,   359,   491,   904,   163,   172,   905,
     906,   132,   161,   170,   333,   518,   647,   743,   408,   409,
     709,   818,   165,   174,   360,   201,    64,    64,    64,    64,
     710,   740,   608,   454,   411,   491,   352,   354,   355,   699,
     423,   361,   964,   144,   413,    64,   419,   419,   363,    95,
     852,   991,   370,   334,   427,   809,   810,    64,   931,   164,
     173,   309,    64,    64,    64,    64,   334,   412,   419,   753,
     754,   519,  1004,   758,   515,   437,   419,   173,   289,   604,
    1023,   672,   673,   428,   201,   435,   291,   418,   419,   605,
     433,   419,   422,   301,   132,   164,   173,   308,   606,   440,
     679,   444,   958,   445,   791,   450,   308,   793,   434,   419,
     821,   296,   692,   451,   880,  1013,   463,   423,   468,   674,
     675,    65,   825,   425,   727,   728,   540,   588,   589,   590,
     591,   553,   891,   436,   419,   554,   518,   558,   419,   174,
     559,   174,   786,   614,   615,   430,   695,   696,   424,   647,
     560,   349,   295,   701,   707,   711,   713,   295,   373,   735,
     736,   423,   419,   739,   426,   356,   804,   612,   763,   516,
     608,   616,   126,   613,   834,   835,   371,   617,   333,   127,
     800,   801,   491,   618,   126,   685,   689,   691,   886,   419,
     334,   127,   519,   887,   419,   492,    65,   630,    65,   622,
     425,   364,   365,   366,   367,   623,   491,   945,   633,   857,
     910,   911,   918,   919,   986,   419,   455,   333,   333,   990,
     419,  1015,   419,    64,    65,    65,   529,    64,    64,   893,
     634,   895,   896,   758,  1028,   419,  1035,   419,   562,    64,
      64,   426,   562,   308,   425,  1037,   419,   635,   515,   532,
     730,   731,   534,   128,   649,   561,   308,   586,   587,   584,
     585,   592,   593,   763,   977,   641,   174,   174,   651,   533,
    -277,   648,   915,   916,   652,   881,   599,   600,   814,   167,
     657,   660,   661,   662,   717,   426,  -361,    95,   965,   669,
      95,   561,   921,   419,   716,   671,   676,   349,   715,   720,
     719,   721,   722,   726,   830,   831,   723,   724,   725,   932,
     732,   333,   295,   748,   750,   491,    95,    95,   751,   133,
     755,   752,   778,   781,   780,   866,   334,   333,   787,   948,
     788,   133,   169,   492,   789,   655,   996,   799,   733,   844,
     172,   955,   334,   516,   845,   170,   128,   846,   854,   860,
     848,    64,   849,   959,   853,    64,   157,   167,   128,     5,
     -49,   858,   969,   492,   535,   859,   882,   865,   868,   515,
     356,   174,   877,   974,   167,    14,   950,   951,   952,    65,
     879,   684,   888,   890,   892,   894,   909,    23,   913,   763,
     899,   561,   157,   167,   900,   902,    64,    64,   356,   903,
      64,   967,    64,   912,   914,   921,   924,  -177,  -177,   944,
     999,    65,    65,   994,   947,   953,   491,   491,   491,  1012,
     867,   954,  1005,    30,    31,    95,   966,   972,   173,   987,
     934,  1014,   988,   989,   818,   561,   969,   985,   992,   997,
     993,  1002,   290,   763,  1017,    48,   290,  1016,   165,   174,
     333,   998,  1009,  1019,  1027,    95,  1024,   999,  1025,  1026,
    1030,  1033,   961,   594,   516,   595,   174,   460,   596,    54,
     288,   597,   439,  1032,   598,  1008,   687,   491,  1011,   749,
    1036,   543,    56,   874,   165,   174,   331,   869,   940,   982,
     943,   940,   876,   942,   883,   688,   562,   783,   333,   817,
     829,   836,   840,    95,    95,   841,   334,   884,   663,  1018,
     492,   889,   995,  1029,  1031,  1034,   196,   816,   491,   741,
     742,  -177,  -177,  -177,  -177,   284,  -177,     0,     0,     0,
       0,  -177,   333,     0,   492,     0,     0,     0,     0,  -177,
    -177,     0,     0,     0,     0,   334,   334,     0,     0,     0,
       0,     0,     0,    65,   491,   132,     0,     0,     0,     0,
     333,   135,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,     0,     0,    65,    41,    42,    43,    44,    45,
      46,    47,     0,   562,     0,   193,     0,     0,     0,   194,
       0,   562,     0,   195,   130,     0,  -178,  -178,     0,     0,
       0,   343,    95,     0,     0,   159,   168,     0,   159,   178,
     159,   182,   159,   159,   159,   187,     0,     0,     0,   562,
       0,     0,   308,   308,     0,     0,    95,     0,     0,     0,
      65,   304,    41,    42,    43,    44,    45,    46,    47,   334,
       0,     0,     0,   492,     0,     0,    65,     0,   132,     0,
       0,     0,     0,   310,     0,   334,   311,   312,     0,   313,
     132,   287,     0,   315,     0,     0,    95,     0,   318,     0,
       0,     0,   320,   321,    65,   322,   323,   130,     0,     0,
     324,   325,   326,   327,   328,     0,   329,     0,   330,     0,
       0,     0,     0,     0,     0,   162,   171,     0,   162,   179,
     162,   183,   162,   162,   162,   188,     0,   190,   396,   192,
    -178,  -178,  -178,  -178,     0,  -178,     0,   562,     0,   562,
    -178,     0,   168,     0,   168,   167,     0,     0,  -178,  -178,
    -507,     0,     0,     0,   345,    95,     0,     0,    95,     0,
       0,     0,     0,     0,   492,   492,   492,   343,     0,     0,
     343,     0,    41,    42,    43,    44,    45,    46,    47,   549,
       0,     0,     0,   562,     0,     0,     0,     0,     0,     0,
     557,   562,     0,     0,     0,     0,     0,     0,   334,     0,
       0,     0,     0,   566,     0,     0,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,    41,    42,    43,
      44,    45,    46,    47,    58,   492,    24,     0,   209,   210,
     211,   212,     0,     0,     0,     0,     0,   174,     0,   603,
       0,     0,     0,     0,   348,     0,   334,     0,     0,     0,
       0,     0,   469,     0,     0,     0,    95,    95,    95,     0,
     213,   214,   215,   216,     0,   624,   492,     0,     5,   168,
     168,  -306,     0,     0,     0,   218,   219,   220,   221,     0,
     334,     0,     0,   343,    14,     0,   770,     5,     0,     0,
       0,   517,   343,     0,     0,     0,    23,     0,   224,     0,
     345,     0,   492,    14,     0,     0,     0,     0,   334,     0,
       0,     0,     0,     0,     0,    23,     0,    95,     0,   368,
     369,    24,    25,   374,   375,   376,   377,   378,   379,     0,
       0,     0,    30,    31,     0,     0,     0,     0,     0,     0,
     729,     0,     0,     0,    41,    42,    43,    44,    45,    46,
      47,    30,    31,     0,    48,     0,     0,     0,    95,     0,
       0,     0,     0,    41,    42,    43,    44,    45,    46,    47,
       0,     0,     0,    48,   168,   178,   182,   187,    54,     0,
       0,   520,   304,    41,    42,    43,    44,    45,    46,    47,
     348,    56,     0,     0,    95,     0,     0,    54,   304,    41,
      42,    43,    44,    45,    46,    47,     0,     0,   135,     0,
      56,     0,     0,     0,     0,    41,    42,    43,    44,    45,
      46,    47,    41,    42,    43,    44,    45,    46,    47,     0,
       0,     0,     0,   745,     0,   697,     0,     0,     0,   375,
     201,     0,     0,     0,     0,   698,     0,     0,     0,     0,
       0,   159,   168,     0,   699,     0,     0,     0,   343,     0,
       0,     0,     0,     0,     0,     0,     0,    58,     0,   168,
       0,   178,   187,     0,   517,     0,   159,   159,   159,     0,
       0,  -508,     0,     0,     0,     0,     0,   159,   168,     0,
       0,     0,     0,     0,   580,   581,   582,   583,   583,   583,
     583,   583,   583,   583,   583,   583,   583,   583,   583,   583,
     583,   583,   583,   583,  -307,     0,     0,     0,     0,     0,
    -328,     0,     0,     0,     0,     0,     0,     0,     0,   770,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   162,   171,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   343,     0,     0,   842,   772,   130,   779,
     680,   681,   682,   782,   520,     0,   162,   162,   162,     0,
       0,     0,     0,     0,     0,     0,     0,   162,   171,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   343,
       0,     0,     0,     0,     5,     0,     0,   805,   806,     0,
     807,     0,   808,     0,   343,   811,   812,   813,     0,     0,
      14,     0,     0,     0,     0,     0,     0,   823,     0,     0,
       0,     0,    23,   824,     0,     0,     0,   826,     0,   827,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   375,     0,     0,     0,     0,     0,    24,   517,     0,
       0,   130,     0,     0,     0,     0,   734,     0,    30,    31,
       0,     0,     0,   130,     0,     0,     0,     0,   917,     0,
      41,    42,    43,    44,    45,    46,    47,     0,   343,   343,
      48,     0,     0,   343,     0,     0,     0,     0,     0,     0,
     772,     0,     0,     0,   772,     0,   875,   343,   583,     0,
       0,     0,     0,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,     0,     0,
       0,     0,     0,     0,     0,   897,   898,     0,     0,   960,
       0,     0,   962,   343,     0,     0,     0,     0,   520,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   343,     0,     0,     0,     0,     0,
       0,   709,     0,     0,     0,     0,   201,     0,     0,   517,
       0,   710,     0,     0,     0,     0,     0,     0,     0,     0,
     699,     0,     0,     0,   941,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   946,     0,     1,     2,     3,
       0,     0,     4,     5,     0,     0,     0,     6,     0,     7,
       8,     9,     0,     0,     0,    10,    11,    12,    13,    14,
     168,    15,    16,     0,    17,    18,     0,    19,    20,    21,
      22,    23,     0,     0,     0,     0,   583,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   978,     0,     0,   981,    24,    25,     0,   520,
     984,     0,     0,    26,    27,    28,    29,    30,    31,    32,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,     0,     0,     0,    48,
       0,     0,     0,     0,     0,  1006,     0,     0,  1007,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
      51,    52,    53,    54,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    57,     1,     2,
       3,    58,    59,     4,     5,     0,     0,     0,     6,     0,
       7,     8,     9,     0,     0,     0,    10,    11,    12,    13,
      14,     0,    15,    16,     0,    17,    18,     0,    19,    20,
      21,    22,    23,     0,     0,     0,     0,     0,     0,     0,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      61,     0,     0,     0,     0,     0,     0,    24,    25,     0,
       0,     0,     0,    62,    26,    27,    28,    29,    30,    31,
      32,     0,    33,    34,    35,    36,    37,    38,    39,     0,
      41,    42,    43,    44,    45,    46,    47,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,    51,    52,    53,    54,    55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,    57,     0,
       2,     3,     0,    59,     4,     5,     0,     0,     0,     6,
       0,     7,     0,     9,     0,     0,     0,     0,    11,    12,
       0,    14,     0,    15,    16,     0,     0,    18,     0,     0,
      20,    21,    22,    23,     0,     0,     0,     0,     0,     0,
       0,   709,     0,     0,     0,     0,   201,     0,     0,     0,
       0,   710,     0,     0,     0,     0,     0,     0,     0,    25,
     699,     0,     0,     0,     0,    26,    27,    28,    29,    30,
      31,    32,     0,    33,    34,    35,    36,    37,    38,     0,
       0,    41,    42,    43,    44,    45,    46,    47,     0,     0,
       0,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    57,
       0,     0,     0,     0,     0,     1,     2,     3,   471,   472,
       4,     5,   473,   474,   475,     6,     0,     7,     8,     9,
     476,   477,   478,    10,    11,    12,    13,    14,   479,    15,
      16,   205,    17,    18,   480,    19,    20,    21,    22,    23,
       0,   481,   604,   206,   207,     0,     0,   201,     0,     0,
       0,   208,   605,     0,     0,     0,     0,     0,     0,     0,
       0,   606,     0,     0,    24,    25,   209,   210,   211,   212,
     482,    26,    27,    28,    29,    30,    31,    32,     0,    33,
      34,    35,    36,    37,    38,    39,   483,    41,    42,    43,
      44,    45,    46,    47,     0,   484,   485,    48,   213,   214,
     215,   216,   217,   486,     0,     0,   487,    49,     0,     0,
       0,     0,     0,   218,   219,   220,   221,    50,    51,    52,
      53,    54,    55,   488,     0,   489,     0,     0,     0,     0,
       0,   222,   223,     0,    56,    57,   224,     0,     0,    58,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,     0,
       0,     0,     0,     0,     0,  -406,   490,   226,   227,   228,
     229,   230,   231,     1,     2,     3,   471,   472,     4,     5,
     473,   474,   475,     6,     0,     7,     8,     9,   476,   477,
     478,    10,    11,    12,    13,    14,   479,    15,    16,   205,
      17,    18,   480,    19,    20,    21,    22,    23,     0,   481,
       0,   206,   207,     0,     0,     0,     0,     0,     0,   208,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,    25,   209,   210,   211,   212,     0,    26,
      27,    28,    29,    30,    31,    32,     0,    33,    34,    35,
      36,    37,    38,    39,   483,    41,    42,    43,    44,    45,
      46,    47,     0,   484,   485,    48,   213,   214,   215,   216,
     217,   486,     0,     0,   487,    49,     0,     0,     0,     0,
       0,   218,   219,   220,   221,    50,    51,    52,    53,    54,
      55,   488,     0,   489,     0,     0,     0,     0,     0,   222,
     223,     0,    56,    57,   224,     0,     0,    58,    59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,     0,     0,     0,
       0,     0,     0,  -406,   677,   226,   227,   228,   229,   230,
     231,     1,     2,     3,   471,   472,     4,     5,   473,   474,
     475,     6,     0,     7,     8,     9,   476,   477,   478,    10,
      11,    12,    13,    14,   479,    15,    16,   205,    17,    18,
     480,    19,    20,    21,    22,    23,     0,   481,     0,   206,
     207,     0,     0,     0,     0,     0,     0,   208,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,    25,   209,   210,   211,   212,     0,    26,    27,    28,
      29,    30,    31,    32,     0,    33,    34,    35,    36,    37,
      38,    39,   483,    41,    42,    43,    44,    45,    46,    47,
       0,   484,   485,    48,   213,   214,   215,   216,   217,   486,
       0,     0,   487,    49,     0,     0,     0,     0,     0,   218,
     219,   220,   221,    50,    51,    52,    53,    54,    55,   488,
       0,   489,     0,     0,     0,     0,     0,   222,   223,     0,
      56,    57,   224,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,     0,     0,     0,     0,     0,
       0,  -406,     0,   226,   227,   228,   229,   230,   231,     1,
       2,     3,     0,     0,     4,     5,     0,     0,     0,     6,
       0,     7,     8,     9,     0,     0,     0,    10,    11,    12,
      13,    14,     0,    15,    16,   205,    17,    18,     0,    19,
      20,    21,    22,    23,     0,     0,     0,   206,   207,     0,
       0,     0,     0,     0,     0,   208,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,    25,
     209,   210,   211,   212,     0,    26,    27,    28,    29,    30,
      31,    32,     0,    33,    34,    35,    36,    37,    38,    39,
       0,    41,    42,    43,    44,    45,    46,    47,     0,     0,
       0,    48,   213,   214,   215,   216,   217,     0,     0,     0,
       0,    49,     0,     0,     0,     0,     0,   218,   219,   220,
     221,    50,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,   222,   223,     0,    56,    57,
     224,     1,     0,    58,    59,     0,     0,     5,     0,     0,
       0,     0,     0,     0,     8,     0,     0,     0,     0,    10,
       0,     0,    13,    14,     0,     0,     0,   205,    17,     0,
       0,    19,     0,     0,     0,    23,     0,     0,     0,   206,
     207,     0,   225,     0,     0,     0,     0,   208,     0,     0,
       0,   226,   227,   228,   229,   230,   231,     0,     0,     0,
      24,     0,   209,   210,   211,   212,     0,     0,     0,     0,
       0,    30,    31,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,    41,    42,    43,    44,    45,    46,    47,
       0,     0,     0,    48,   213,   214,   215,   216,   217,     0,
       0,     0,     0,    49,     0,     0,     0,     0,     0,   218,
     219,   220,   221,     0,     0,     0,     0,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   222,   223,     0,
      56,     1,   224,     0,     0,     0,    59,     5,     0,     0,
       0,     0,     0,     0,     8,     0,     0,     0,     0,    10,
       0,     0,    13,    14,     0,     0,     0,   205,    17,     0,
       0,    19,     0,     0,     0,    23,     0,     0,     0,   206,
     207,     0,     0,     0,   225,     0,     0,   208,     0,     0,
     341,     0,     0,   226,   342,   228,   229,   230,   231,     0,
      24,     0,   209,   210,   211,   212,     0,     0,     0,     0,
       0,    30,    31,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,    41,    42,    43,    44,    45,    46,    47,
       5,     0,     0,    48,   213,   214,   215,   216,   217,     0,
       0,     0,     0,    49,     0,     0,    14,     0,     0,   218,
     219,   220,   221,     0,     0,     0,     0,    54,    23,     0,
       0,     0,     0,     0,     0,     0,     0,   222,   223,     0,
      56,     0,   224,     0,     0,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    41,    42,    43,    44,
      45,    46,    47,     0,   225,     0,    48,     0,     0,     0,
     541,     0,     0,   226,   227,   228,   229,   230,   231,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    56,     1,     2,     3,     0,     0,     4,
       5,     0,     0,     0,     6,     0,     7,     8,     9,     0,
       0,     0,    10,    11,    12,    13,    14,     0,    15,    16,
       0,    17,    18,     0,    19,    20,    21,    22,    23,     0,
       0,     0,     0,     0,     0,     0,     0,   604,     0,     0,
       0,     0,   201,     0,     0,     0,     0,   605,     0,     0,
       0,     0,     0,    24,    25,     0,   606,     0,     0,     0,
      26,    27,    28,    29,    30,    31,    32,     0,    33,    34,
      35,    36,    37,    38,    39,     0,    41,    42,    43,    44,
      45,    46,    47,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,    51,    52,    53,
      54,    55,     0,     0,     0,     0,     0,     2,     3,     0,
       0,     4,     5,    56,    57,     0,     6,     0,     7,    59,
       9,     0,     0,     0,     0,    11,    12,     0,    14,     0,
      15,    16,     0,     0,    18,     0,     0,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    60,     0,     0,
       0,     0,     0,     0,     0,    24,    25,    61,     0,     0,
       0,     0,    26,    27,    28,    29,    30,    31,    32,     0,
      33,    34,    35,    36,    37,    38,     5,     0,    41,    42,
      43,    44,    45,    46,    47,     0,     0,     0,    48,     0,
       0,     0,    14,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,     0,     0,     0,    50,    51,
      52,    53,    54,    55,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    56,    57,     0,     0,    24,
      25,     5,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    31,     0,     0,     0,     0,     0,    14,     0,     0,
       0,     0,    41,    42,    43,    44,    45,    46,    47,    23,
       0,     0,    48,     0,     0,   205,     0,     0,     0,    60,
       0,     0,   934,     0,     0,     0,     0,   206,   207,    61,
       0,     0,     0,     0,    24,   208,    54,     0,     0,     0,
       0,     0,     0,     0,     0,    30,    31,     0,    24,    56,
     209,   210,   211,   212,     0,     0,     0,    41,    42,    43,
      44,    45,    46,    47,     0,     0,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   213,   214,   215,   216,   217,     0,     0,     0,
       0,    54,     0,   299,     0,     0,     0,   218,   219,   220,
     221,     0,     0,   144,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   222,   223,     0,     0,   205,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   206,   207,     0,     0,     0,     0,     0,     0,   208,
       0,     0,     0,     0,     0,     0,     0,     0,    60,     0,
       0,     0,    24,     0,   209,   210,   211,   212,    61,     0,
       0,     0,   225,     0,     0,     0,     0,     0,     0,     0,
       0,   226,   227,   228,   229,   230,   231,     0,     0,     0,
       0,     0,     0,     0,     0,   658,   213,   214,   215,   216,
     217,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,   219,   220,   221,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   222,
     223,     0,     0,     0,   224,   205,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   206,   207,     0,
       0,     0,     0,     0,     0,   208,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,     0,
     209,   210,   211,   212,     0,     0,   225,     0,     0,     0,
     861,   862,     0,   638,     0,   226,   227,   228,   229,   230,
     231,    41,    42,    43,    44,    45,    46,    47,   863,     0,
       0,     0,   213,   214,   215,   216,   217,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,   219,   220,
     221,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   222,   223,     0,     0,     0,
     224,   205,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   206,   207,     0,     0,     0,     0,     0,
       0,   208,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,   209,   210,   211,   212,
       0,     0,   225,     0,     0,     0,     0,     0,     0,  -406,
       0,   226,   227,   228,   229,   230,   231,    41,    42,    43,
      44,    45,    46,    47,     0,     0,     0,     0,   213,   214,
     215,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   218,   219,   220,   221,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   205,     0,     0,     0,
       0,   222,   223,     0,     0,     0,   224,     0,   206,   207,
       0,     0,     0,     0,     0,     0,   208,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,   209,   210,   211,   212,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,     0,
       0,     0,     0,     0,     0,     0,     0,   226,   227,   228,
     229,   230,   231,   213,   214,   215,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   218,   219,
     220,   221,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   205,     0,     0,     0,     0,   222,   223,     0,     0,
       0,   224,     0,   206,   207,     0,     0,     0,     0,     0,
       0,   208,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,    25,   209,   210,   211,   212,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,     0,     0,     0,   761,   762,     0,
     638,   929,   226,   227,   228,   229,   230,   231,   213,   214,
     215,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   218,   219,   220,   221,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   205,     0,     0,     0,
       0,   222,   223,     0,     0,     0,   224,     0,   206,   207,
       0,     0,     0,     0,     0,     0,   208,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,   209,   210,   211,   212,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,     0,
       0,     0,   761,   762,     0,   638,   963,   226,   227,   228,
     229,   230,   231,   213,   214,   215,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   218,   219,
     220,   221,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   205,     0,     0,     0,     0,   222,   223,     0,     0,
       0,   224,     0,   206,   207,     0,     0,     0,     0,     0,
       0,   208,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,   209,   210,   211,   212,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,     0,     0,     0,   761,   762,     0,
     638,     0,   226,   227,   228,   229,   230,   231,   213,   214,
     215,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   218,   219,   220,   221,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   205,     0,     0,     0,
       0,   222,   223,     0,     0,     0,   224,     0,   206,   207,
       0,     0,     0,     0,     0,     0,   208,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,   209,   210,   211,   212,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,     0,
       0,     0,     0,     0,   539,     0,     0,   226,   227,   228,
     229,   230,   231,   213,   214,   215,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   218,   219,
     220,   221,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   205,     0,     0,     0,     0,   222,   223,     0,     0,
       0,   224,     0,   206,   207,     0,     0,     0,     0,     0,
       0,   208,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,   209,   210,   211,   212,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,   564,     0,     0,     0,     0,     0,
       0,     0,   226,   227,   228,   229,   230,   231,   213,   214,
     215,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   218,   219,   220,   221,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   205,     0,     0,     0,
       0,   222,   223,     0,     0,     0,   224,     0,   206,   207,
       0,     0,     0,     0,     0,     0,   208,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,   209,   210,   211,   212,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,     0,
       0,   601,     0,     0,     0,     0,     0,   226,   227,   228,
     229,   230,   231,   213,   214,   215,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   218,   219,
     220,   221,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   205,     0,     0,     0,     0,   222,   223,     0,     0,
       0,   224,     0,   206,   207,     0,     0,     0,     0,     0,
       0,   208,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,    25,   209,   210,   211,   212,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,     0,     0,     0,     0,     0,     0,
     638,     0,   226,   227,   228,   229,   230,   231,   213,   214,
     215,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   218,   219,   220,   221,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   205,     0,     0,     0,
       0,   222,   223,     0,     0,     0,   224,     0,   206,   207,
       0,     0,     0,     0,     0,     0,   208,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,   209,   210,   211,   212,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,     0,
       0,     0,     0,     0,     0,     0,     0,   226,   227,   228,
     229,   230,   231,   213,   214,   215,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   218,   219,
     220,   221,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   205,     0,     0,     0,     0,   222,   223,     0,     0,
       0,   224,     0,   206,   207,     0,     0,     0,     0,     0,
       0,   208,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,   209,   210,   211,   212,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,     0,     0,     0,     0,     0,   718,
       0,     0,   226,   227,   228,   229,   230,   231,   213,   214,
     215,   216,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   218,   219,   220,   221,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   205,     0,     0,     0,
       0,   222,   223,     0,     0,     0,   224,     0,   206,   207,
       0,     0,     0,     0,     0,     0,   208,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,   209,   210,   211,   212,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,     0,
       0,     0,     0,     0,     0,   733,     0,   226,   227,   228,
     229,   230,   231,   213,   214,   215,   216,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   218,   219,
     220,   221,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   205,     0,     0,     0,     0,   222,   223,     0,     0,
       0,   224,     0,   206,   207,     0,     0,     0,     0,     0,
       0,   208,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,   209,   210,   211,   212,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,     0,     0,     0,     0,     0,     0,
       0,   205,   226,   227,   228,   229,   230,   231,   213,   214,
     215,   216,   217,   206,   207,     0,     0,     0,     0,     0,
       0,   208,     0,   218,   219,   220,   221,     0,     0,     0,
       0,     0,     0,     0,    24,     0,   209,   210,   211,   212,
     205,   222,   223,     0,     0,     0,   224,     0,     0,     0,
       0,     0,   206,   207,     0,     0,     0,     0,     0,     0,
     208,     0,     0,     0,     0,     0,     0,     0,   213,   214,
     215,   216,   217,    24,     0,   209,   210,   211,   212,     0,
       0,     0,     0,   218,   219,   220,   221,     0,   225,     0,
       0,     0,     0,     0,     0,     0,     0,   226,   544,   228,
     229,   230,   231,     0,     0,     0,   224,   213,   214,   215,
     216,   217,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,   219,   220,   221,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   205,     0,   224,     0,     0,   351,     0,
       0,     0,     0,     0,     0,   206,   207,   226,   227,   228,
     229,   230,   231,   208,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,     0,   209,   210,
     211,   212,     0,     0,     0,     0,     0,   353,     0,     0,
       0,     0,     0,     0,     0,     0,   226,   227,   228,   229,
     230,   231,     0,     0,     0,     0,     0,     0,     0,     0,
     213,   214,   215,   216,   217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,   219,   220,   221,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     2,     3,   224,     0,
       4,     5,     0,     0,     0,     6,     0,     7,     8,     9,
       0,     0,     0,    10,    11,    12,    13,    14,     0,    15,
      16,     0,    17,    18,     0,    19,    20,    21,    22,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     362,     0,     0,     0,     0,     0,     0,     0,     0,   226,
     227,   228,   229,   230,   231,    25,     0,     0,     0,     0,
       0,    26,    27,    28,    29,    30,    31,    32,     0,    33,
      34,    35,    36,    37,    38,    39,     0,    41,    42,    43,
      44,    45,    46,    47,     0,     0,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    51,    52,
      53,    54,    55,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     2,     3,    56,    57,     4,     5,     0,    58,
      59,     6,     0,     7,     8,     9,     0,     0,     0,    10,
      11,    12,    13,    14,     0,    15,    16,     0,    17,    18,
       0,    19,    20,    21,    22,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   828,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,     0,     0,     0,     0,     0,    26,    27,    28,
      29,    30,    31,    32,     0,    33,    34,    35,    36,    37,
      38,    39,     0,    41,    42,    43,    44,    45,    46,    47,
       0,     0,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    51,    52,    53,    54,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     2,     3,
      56,    57,     4,     5,     0,     0,    59,     6,     0,     7,
       8,     9,     0,     0,     0,    10,    11,    12,    13,    14,
       0,    15,    16,     0,    17,    18,     0,    19,    20,    21,
      22,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,     0,
       0,     0,     0,    26,    27,    28,    29,    30,    31,    32,
       0,    33,    34,    35,    36,    37,    38,    39,     0,    41,
      42,    43,    44,    45,    46,    47,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
      51,    52,    53,    54,    55,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     2,     3,    56,    57,     4,     5,
       0,     0,    59,     6,     0,     7,     8,     9,     0,     0,
       0,    10,    11,    12,    13,    14,     0,    15,    16,     0,
      17,    18,     0,    19,    20,    21,    22,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,     0,     0,     0,     0,     0,    26,
      27,    28,    29,    30,    31,    32,     0,    33,    34,    35,
      36,    37,    38,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,    51,    52,    53,    54,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       2,     3,    56,    57,     4,     5,     0,     0,    59,     6,
       0,     7,     8,     9,     0,     0,     0,    10,    11,    12,
      13,    14,     0,    15,    16,     0,    17,    18,     0,    19,
      20,    21,    22,    23,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
       0,     0,     0,     0,     0,    26,    27,    28,    29,    30,
      31,     0,     0,    33,    34,    35,    36,    37,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,    52,    53,    54,    55,     1,     2,     3,
       0,     0,     4,     5,     0,     0,     0,     6,    56,     0,
       8,     9,     0,     0,    59,    10,    11,    12,    13,    14,
       0,    15,    16,     0,    17,     0,     1,    19,     0,    21,
      22,    23,     5,     0,     0,     0,     0,     0,     0,     8,
       0,     0,     0,     0,    10,     0,     0,    13,    14,     0,
       0,     0,     0,    17,     0,     0,    19,     0,     0,     0,
      23,     0,     0,    26,    27,    28,    29,    30,    31,     0,
       0,    33,    34,    35,    36,    37,    38,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,    30,    31,     0,    49,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
      51,    52,    53,    54,    55,     0,     2,     3,    48,     0,
       4,     5,     0,     0,     0,     6,    56,     7,    49,     9,
       0,     0,    59,     0,    11,    12,     0,    14,     0,    15,
      16,     0,    54,    18,     0,     0,    20,    21,    22,    23,
       0,     0,     0,     0,     0,    56,     0,     0,     0,     0,
       0,    59,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,     0,     0,     0,
       0,    26,    27,    28,    29,    30,    31,    32,     0,    33,
      34,    35,    36,    37,    38,     0,     0,    41,    42,    43,
      44,    45,    46,    47,     0,     0,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    51,    52,
      53,    54,    55,     0,     0,     0,     0,     2,     3,     0,
       0,     4,     5,     0,    56,    57,     6,     0,     7,     0,
       9,     0,     0,     0,     0,    11,    12,     0,    14,     0,
      15,    16,     0,     0,    18,     0,     0,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,     0,
       0,     0,    26,    27,    28,    29,    30,    31,    32,     0,
      33,    34,    35,    36,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,    51,
      52,    53,    54,    55,     2,     3,     0,     0,     4,     5,
       0,     0,     0,     6,     0,    56,    57,     9,     0,     0,
       0,     0,    11,    12,     0,    14,     0,    15,    16,     0,
       0,     0,     0,     0,     0,    21,    22,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
      27,    28,    29,    30,    31,     0,     0,    33,    34,    35,
      36,    37,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,    52,    53,    54,
      55,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    56
};

static const yytype_int16 yycheck[] =
{
       0,   201,   103,     0,   107,    60,     0,    72,    73,   144,
     463,   601,    60,   208,   156,    72,    73,   109,    75,    76,
      72,    73,   421,     0,   127,   108,   144,   143,   521,   112,
     437,   661,   115,   195,   319,   118,   641,   294,   121,   122,
     123,     0,   299,   146,    45,    46,   208,   380,   143,   144,
     126,   384,    51,   263,    92,    50,   859,    62,    51,    68,
      60,    61,   532,   533,   534,   535,     9,    51,   178,    25,
      70,    71,    72,    73,    25,   186,   176,    67,   263,    19,
     191,   192,   532,   533,   534,   535,    62,    63,   143,   199,
     176,     0,    40,    41,    42,   143,   697,    37,   176,    99,
      62,    63,    99,    72,    73,    99,    62,    63,   709,   263,
     913,    62,    63,   176,    92,    67,   116,    25,     0,    62,
     183,   197,    99,   176,   225,    70,    71,    92,   338,   129,
     125,    85,    86,    87,    88,    89,    90,    91,   176,   139,
      99,   141,   225,   143,   144,   867,   178,   347,   870,   739,
     350,   293,    61,   338,    62,    63,   178,    62,    63,   108,
     182,   263,   447,    72,    73,   300,   178,   199,    62,   774,
     332,   120,   177,   778,   183,   124,   461,   462,   294,    61,
     179,    62,   285,   299,   338,   178,    92,   199,   176,   182,
      99,   181,   193,   194,   178,   195,   141,   454,   182,   294,
     176,    83,   263,    85,   299,   300,   605,    75,   208,    77,
     186,    79,    80,    81,   176,   937,    62,    99,   940,   697,
     129,   177,   178,   199,   186,   179,   177,   178,   176,   181,
     139,   709,   180,   181,   178,   144,   338,   199,   176,   294,
     184,   178,   178,   178,   299,   182,   294,   697,   698,   176,
     351,   299,   353,   176,    62,   885,   181,   178,   181,   709,
     710,   362,   144,   199,   199,   178,   266,   178,   351,   182,
     353,   176,   472,   184,   179,   178,   225,   338,   199,   362,
       3,   186,   176,   178,   176,   179,   263,   169,   170,   484,
     187,   188,   186,    16,   294,   176,   199,   193,    21,   299,
     300,    24,   385,   181,   199,   186,   468,    30,    62,    63,
      33,   521,    62,    63,   176,   177,   769,   420,   421,   181,
     176,   177,   484,   816,    62,   181,    62,    63,     0,   178,
     176,   177,   332,   182,   417,   181,   521,   337,   454,   339,
     186,   626,   181,   340,   743,   752,   340,   450,   451,   195,
     122,   821,   124,   176,   177,   825,   421,   987,   181,   454,
      83,   338,   178,   340,   421,   422,   182,   521,   176,   421,
     176,   821,   176,   181,     0,   825,    62,   181,   186,    25,
     380,   263,   105,    67,   384,   486,   199,   195,   489,    62,
      63,   300,   725,   176,   477,    62,   479,   532,   533,   454,
      72,    73,   351,   177,   353,   858,   454,   366,   367,   358,
     863,   360,   361,   362,   183,   138,    62,    63,    64,   521,
       0,    67,   176,   183,   176,   177,   176,    99,   761,   181,
     183,   181,   186,   498,   499,   475,   186,   105,   176,   177,
     176,   498,   499,   181,   181,   195,   498,   499,   186,   899,
     186,   516,   421,   185,   454,   176,   338,   195,   340,   516,
     521,   518,    62,    63,   516,   505,   523,   524,   468,   534,
     535,   143,    43,    44,   176,   475,   177,   534,   535,   180,
     181,    61,   534,   535,   484,   695,   648,   605,    47,    48,
     176,   177,    72,    73,   176,   181,   496,   497,   498,   499,
     186,   604,   605,   176,   195,   505,   205,   206,   207,   195,
     695,   176,   919,   186,    49,   515,   178,   178,   217,    99,
     182,   182,   176,   195,   177,   687,   688,   527,   861,   498,
     499,   673,   532,   533,   534,   535,   208,   196,   178,   622,
     623,   695,   182,   635,   521,   176,   178,   516,   128,   176,
     182,   496,   497,   177,   181,   177,   136,   177,   178,   186,
     177,   178,   772,   698,   144,   534,   535,   147,   195,   194,
     515,   177,   905,   178,   657,   177,   156,   660,   177,   178,
     698,   697,   527,   177,   784,   992,   198,   772,   183,   498,
     499,   263,   710,   695,   553,   554,   182,   404,   405,   406,
     407,   183,   797,   177,   178,   183,   816,   177,   178,   189,
     177,   191,   652,   177,   178,   615,   177,   178,   772,   781,
     177,   201,   294,   532,   533,   534,   535,   299,   729,   177,
     178,   816,   178,   179,   695,   797,   676,   199,   638,   521,
     743,    92,   697,   176,   727,   728,   729,    92,   648,   697,
     102,   103,   652,    92,   709,   523,   524,   525,   177,   178,
     332,   709,   816,   177,   178,   337,   338,   177,   340,   181,
     772,   218,   219,   220,   221,   181,   676,   877,    37,   762,
     177,   178,   177,   178,   177,   178,   821,   687,   688,   177,
     178,   177,   178,   693,   366,   367,   696,   697,   698,   800,
      19,   802,   803,   795,   177,   178,   177,   178,   380,   709,
     710,   772,   384,   293,   816,   177,   178,   176,   695,   716,
     555,   556,   716,   605,   199,   725,   306,   402,   403,   400,
     401,   408,   409,   733,   934,   183,   316,   317,   199,   716,
     183,   183,   845,   846,   179,   785,   415,   416,   693,   421,
     176,   176,   176,   184,   182,   816,   179,   337,   920,   199,
     340,   761,   854,   178,   178,   199,   179,   347,   177,   177,
     182,   177,   177,   177,   723,   724,   178,   178,   178,   862,
     178,   781,   454,   177,   177,   785,   366,   367,   177,   698,
     177,   198,   183,   178,   184,   772,   468,   797,    39,   882,
     176,   710,   867,   475,   199,   477,   968,    68,   183,   177,
     867,   894,   484,   695,   177,   867,   698,   177,   179,   184,
     178,   821,   177,   906,   177,   825,   498,   499,   710,     9,
     179,   179,   924,   505,   716,   178,   176,   199,   184,   816,
    1002,   421,   198,   926,   516,    25,   886,   887,   888,   521,
     184,   523,   177,    68,   184,   176,   179,    37,   178,   859,
     177,   861,   534,   535,   177,   177,   866,   867,  1030,   177,
     870,   178,   872,   179,   184,   967,   179,    62,    63,   184,
     972,   553,   554,   966,   179,   177,   886,   887,   888,   990,
     772,   184,   975,    73,    74,   475,   176,   179,   867,   199,
     179,   993,    14,   199,   177,   905,   998,   947,   198,   176,
     182,   179,   821,   913,   997,    95,   825,   182,   498,   499,
     920,   178,   199,   178,  1016,   505,   177,  1019,   177,   176,
     178,   176,   911,   410,   816,   411,   516,   306,   412,   119,
     128,   413,   278,  1026,   414,   984,   523,   947,   988,   615,
    1033,   347,   132,   778,   534,   535,   194,   774,   867,   940,
     872,   870,   781,   870,   788,   523,   638,   648,   968,   696,
     716,    11,   733,   553,   554,   733,   648,   788,   483,   998,
     652,   795,   967,  1019,  1024,  1030,    99,   695,   988,   604,
     604,   176,   177,   178,   179,   125,   181,    -1,    -1,    -1,
      -1,   186,  1002,    -1,   676,    -1,    -1,    -1,    -1,   194,
     195,    -1,    -1,    -1,    -1,   687,   688,    -1,    -1,    -1,
      -1,    -1,    -1,   695,  1024,   605,    -1,    -1,    -1,    -1,
    1030,    65,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    -1,    -1,   716,    85,    86,    87,    88,    89,
      90,    91,    -1,   725,    -1,    89,    -1,    -1,    -1,    93,
      -1,   733,    -1,    97,    61,    -1,    62,    63,    -1,    -1,
      -1,   201,   652,    -1,    -1,    72,    73,    -1,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    -1,    -1,   761,
      -1,    -1,   672,   673,    -1,    -1,   676,    -1,    -1,    -1,
     772,    84,    85,    86,    87,    88,    89,    90,    91,   781,
      -1,    -1,    -1,   785,    -1,    -1,   788,    -1,   698,    -1,
      -1,    -1,    -1,   157,    -1,   797,   160,   161,    -1,   163,
     710,   128,    -1,   167,    -1,    -1,   716,    -1,   172,    -1,
      -1,    -1,   176,   177,   816,   179,   180,   144,    -1,    -1,
     184,   185,   186,   187,   188,    -1,   190,    -1,   192,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    75,    76,
      77,    78,    79,    80,    81,    82,    -1,    84,   198,    86,
     176,   177,   178,   179,    -1,   181,    -1,   859,    -1,   861,
     186,    -1,   189,    -1,   191,   867,    -1,    -1,   194,   195,
     183,    -1,    -1,    -1,   201,   785,    -1,    -1,   788,    -1,
      -1,    -1,    -1,    -1,   886,   887,   888,   347,    -1,    -1,
     350,    -1,    85,    86,    87,    88,    89,    90,    91,   359,
      -1,    -1,    -1,   905,    -1,    -1,    -1,    -1,    -1,    -1,
     370,   913,    -1,    -1,    -1,    -1,    -1,    -1,   920,    -1,
      -1,    -1,    -1,   383,    -1,    -1,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,    85,    86,    87,
      88,    89,    90,    91,   137,   947,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,   867,    -1,   419,
      -1,    -1,    -1,    -1,   201,    -1,   968,    -1,    -1,    -1,
      -1,    -1,   336,    -1,    -1,    -1,   886,   887,   888,    -1,
      96,    97,    98,    99,    -1,   445,   988,    -1,     9,   316,
     317,   184,    -1,    -1,    -1,   111,   112,   113,   114,    -1,
    1002,    -1,    -1,   463,    25,    -1,   199,     9,    -1,    -1,
      -1,   338,   472,    -1,    -1,    -1,    37,    -1,   134,    -1,
     347,    -1,  1024,    25,    -1,    -1,    -1,    -1,  1030,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,   947,    -1,   222,
     223,    62,    63,   226,   227,   228,   229,   230,   231,    -1,
      -1,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
     176,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      91,    73,    74,    -1,    95,    -1,    -1,    -1,   988,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    95,   421,   422,   423,   424,   119,    -1,
      -1,   338,    84,    85,    86,    87,    88,    89,    90,    91,
     347,   132,    -1,    -1,  1024,    -1,    -1,   119,    84,    85,
      86,    87,    88,    89,    90,    91,    -1,    -1,   492,    -1,
     132,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    91,    85,    86,    87,    88,    89,    90,    91,    -1,
      -1,    -1,    -1,   613,    -1,   176,    -1,    -1,    -1,   342,
     181,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,
      -1,   498,   499,    -1,   195,    -1,    -1,    -1,   638,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,   516,
      -1,   518,   519,    -1,   521,    -1,   523,   524,   525,    -1,
      -1,   183,    -1,    -1,    -1,    -1,    -1,   534,   535,    -1,
      -1,    -1,    -1,    -1,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   184,    -1,    -1,    -1,    -1,    -1,
     183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   498,   499,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   733,    -1,    -1,   736,   641,   605,   643,
     517,   518,   519,   647,   521,    -1,   523,   524,   525,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   534,   535,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   769,
      -1,    -1,    -1,    -1,     9,    -1,    -1,   681,   682,    -1,
     684,    -1,   686,    -1,   784,   689,   690,   691,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,   701,    -1,    -1,
      -1,    -1,    37,   707,    -1,    -1,    -1,   711,    -1,   713,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   544,    -1,    -1,    -1,    -1,    -1,    62,   695,    -1,
      -1,   698,    -1,    -1,    -1,    -1,   559,    -1,    73,    74,
      -1,    -1,    -1,   710,    -1,    -1,    -1,    -1,   848,    -1,
      85,    86,    87,    88,    89,    90,    91,    -1,   858,   859,
      95,    -1,    -1,   863,    -1,    -1,    -1,    -1,    -1,    -1,
     774,    -1,    -1,    -1,   778,    -1,   780,   877,   601,    -1,
      -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   809,   810,    -1,    -1,   909,
      -1,    -1,   912,   913,    -1,    -1,    -1,    -1,   695,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   934,    -1,    -1,    -1,    -1,    -1,
      -1,   176,    -1,    -1,    -1,    -1,   181,    -1,    -1,   816,
      -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     195,    -1,    -1,    -1,   868,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   879,    -1,     3,     4,     5,
      -1,    -1,     8,     9,    -1,    -1,    -1,    13,    -1,    15,
      16,    17,    -1,    -1,    -1,    21,    22,    23,    24,    25,
     867,    27,    28,    -1,    30,    31,    -1,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,   739,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   936,    -1,    -1,   939,    62,    63,    -1,   816,
     944,    -1,    -1,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    -1,    -1,    -1,    95,
      -1,    -1,    -1,    -1,    -1,   979,    -1,    -1,   982,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,   133,     3,     4,
       5,   137,   138,     8,     9,    -1,    -1,    -1,    13,    -1,
      15,    16,    17,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    -1,    27,    28,    -1,    30,    31,    -1,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     186,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,
      -1,    -1,    -1,   199,    69,    70,    71,    72,    73,    74,
      75,    -1,    77,    78,    79,    80,    81,    82,    83,    -1,
      85,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,    -1,
       4,     5,    -1,   138,     8,     9,    -1,    -1,    -1,    13,
      -1,    15,    -1,    17,    -1,    -1,    -1,    -1,    22,    23,
      -1,    25,    -1,    27,    28,    -1,    -1,    31,    -1,    -1,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   176,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,
      -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
     195,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    75,    -1,    77,    78,    79,    80,    81,    82,    -1,
      -1,    85,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,   116,   117,   118,   119,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    39,   176,    41,    42,    -1,    -1,   181,    -1,    -1,
      -1,    49,   186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   195,    -1,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,
      -1,    -1,    -1,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,    -1,   123,    -1,    -1,    -1,    -1,
      -1,   129,   130,    -1,   132,   133,   134,    -1,    -1,   137,
     138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,   183,   184,   185,   186,   187,
     188,   189,   190,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    63,    64,    65,    66,    67,    -1,    69,
      70,    71,    72,    73,    74,    75,    -1,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,    -1,
      -1,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,    -1,   123,    -1,    -1,    -1,    -1,    -1,   129,
     130,    -1,   132,   133,   134,    -1,    -1,   137,   138,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,
      -1,    -1,    -1,   183,   184,   185,   186,   187,   188,   189,
     190,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    63,    64,    65,    66,    67,    -1,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      -1,    -1,   104,   105,    -1,    -1,    -1,    -1,    -1,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
      -1,   123,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,
     132,   133,   134,    -1,    -1,   137,   138,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,
      -1,   183,    -1,   185,   186,   187,   188,   189,   190,     3,
       4,     5,    -1,    -1,     8,     9,    -1,    -1,    -1,    13,
      -1,    15,    16,    17,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,
      64,    65,    66,    67,    -1,    69,    70,    71,    72,    73,
      74,    75,    -1,    77,    78,    79,    80,    81,    82,    83,
      -1,    85,    86,    87,    88,    89,    90,    91,    -1,    -1,
      -1,    95,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,   133,
     134,     3,    -1,   137,   138,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    -1,    29,    30,    -1,
      -1,    33,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,
      42,    -1,   176,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,   185,   186,   187,   188,   189,   190,    -1,    -1,    -1,
      62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,   111,
     112,   113,   114,    -1,    -1,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,
     132,     3,   134,    -1,    -1,    -1,   138,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    -1,    29,    30,    -1,
      -1,    33,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,
      42,    -1,    -1,    -1,   176,    -1,    -1,    49,    -1,    -1,
     182,    -1,    -1,   185,   186,   187,   188,   189,   190,    -1,
      62,    -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,
      -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    86,    87,    88,    89,    90,    91,
       9,    -1,    -1,    95,    96,    97,    98,    99,   100,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    25,    -1,    -1,   111,
     112,   113,   114,    -1,    -1,    -1,    -1,   119,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,
     132,    -1,   134,    -1,    -1,    -1,   138,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    91,    -1,   176,    -1,    95,    -1,    -1,    -1,
     182,    -1,    -1,   185,   186,   187,   188,   189,   190,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,     3,     4,     5,    -1,    -1,     8,
       9,    -1,    -1,    -1,    13,    -1,    15,    16,    17,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    -1,    27,    28,
      -1,    30,    31,    -1,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,
      -1,    -1,   181,    -1,    -1,    -1,    -1,   186,    -1,    -1,
      -1,    -1,    -1,    62,    63,    -1,   195,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    75,    -1,    77,    78,
      79,    80,    81,    82,    83,    -1,    85,    86,    87,    88,
      89,    90,    91,    -1,    -1,    -1,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,    -1,    -1,    -1,    -1,    -1,     4,     5,    -1,
      -1,     8,     9,   132,   133,    -1,    13,    -1,    15,   138,
      17,    -1,    -1,    -1,    -1,    22,    23,    -1,    25,    -1,
      27,    28,    -1,    -1,    31,    -1,    -1,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    63,   186,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    78,    79,    80,    81,    82,     9,    -1,    85,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    95,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,   133,    -1,    -1,    62,
      63,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    91,    37,
      -1,    -1,    95,    -1,    -1,    29,    -1,    -1,    -1,   176,
      -1,    -1,   179,    -1,    -1,    -1,    -1,    41,    42,   186,
      -1,    -1,    -1,    -1,    62,    49,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    -1,    62,   132,
      64,    65,    66,    67,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,   119,    -1,   176,    -1,    -1,    -1,   111,   112,   113,
     114,    -1,    -1,   186,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,    -1,    -1,    29,
     134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,    -1,    62,    -1,    64,    65,    66,    67,   186,    -1,
      -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   185,   186,   187,   188,   189,   190,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   199,    96,    97,    98,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,
     130,    -1,    -1,    -1,   134,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      64,    65,    66,    67,    -1,    -1,   176,    -1,    -1,    -1,
     180,   181,    -1,   183,    -1,   185,   186,   187,   188,   189,
     190,    85,    86,    87,    88,    89,    90,    91,   198,    -1,
      -1,    -1,    96,    97,    98,    99,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,   113,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,    -1,    -1,    -1,
     134,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    65,    66,    67,
      -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,   183,
      -1,   185,   186,   187,   188,   189,   190,    85,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,   112,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,   129,   130,    -1,    -1,    -1,   134,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,   186,   187,
     188,   189,   190,    96,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,   129,   130,    -1,    -1,
      -1,   134,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,    -1,    -1,   180,   181,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,    96,    97,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,   112,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,   129,   130,    -1,    -1,    -1,   134,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,    -1,   180,   181,    -1,   183,   184,   185,   186,   187,
     188,   189,   190,    96,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,   129,   130,    -1,    -1,
      -1,   134,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,    -1,    -1,   180,   181,    -1,
     183,    -1,   185,   186,   187,   188,   189,   190,    96,    97,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,   112,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,   129,   130,    -1,    -1,    -1,   134,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,    -1,    -1,    -1,   182,    -1,    -1,   185,   186,   187,
     188,   189,   190,    96,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,   129,   130,    -1,    -1,
      -1,   134,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   176,   177,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   185,   186,   187,   188,   189,   190,    96,    97,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,   112,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,   129,   130,    -1,    -1,    -1,   134,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,   179,    -1,    -1,    -1,    -1,    -1,   185,   186,   187,
     188,   189,   190,    96,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,   129,   130,    -1,    -1,
      -1,   134,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,   185,   186,   187,   188,   189,   190,    96,    97,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,   112,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,   129,   130,    -1,    -1,    -1,   134,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,   186,   187,
     188,   189,   190,    96,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,   129,   130,    -1,    -1,
      -1,   134,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,   182,
      -1,    -1,   185,   186,   187,   188,   189,   190,    96,    97,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,   112,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,   129,   130,    -1,    -1,    -1,   134,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,   185,   186,   187,
     188,   189,   190,    96,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,   129,   130,    -1,    -1,
      -1,   134,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    65,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,   185,   186,   187,   188,   189,   190,    96,    97,
      98,    99,   100,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,   111,   112,   113,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    64,    65,    66,    67,
      29,   129,   130,    -1,    -1,    -1,   134,    -1,    -1,    -1,
      -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,   100,    62,    -1,    64,    65,    66,    67,    -1,
      -1,    -1,    -1,   111,   112,   113,   114,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,   186,   187,
     188,   189,   190,    -1,    -1,    -1,   134,    96,    97,    98,
      99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,   112,   113,   114,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,   134,    -1,    -1,   176,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,   185,   186,   187,
     188,   189,   190,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    64,    65,
      66,    67,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   185,   186,   187,   188,
     189,   190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    98,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,   112,   113,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,   134,    -1,
       8,     9,    -1,    -1,    -1,    13,    -1,    15,    16,    17,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,    27,
      28,    -1,    30,    31,    -1,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   185,
     186,   187,   188,   189,   190,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      78,    79,    80,    81,    82,    83,    -1,    85,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,   116,   117,
     118,   119,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,   132,   133,     8,     9,    -1,   137,
     138,    13,    -1,    15,    16,    17,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    -1,    27,    28,    -1,    30,    31,
      -1,    33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    75,    -1,    77,    78,    79,    80,    81,
      82,    83,    -1,    85,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,   116,   117,   118,   119,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
     132,   133,     8,     9,    -1,    -1,   138,    13,    -1,    15,
      16,    17,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      -1,    27,    28,    -1,    30,    31,    -1,    33,    34,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    75,
      -1,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      86,    87,    88,    89,    90,    91,    -1,    -1,    -1,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,   132,   133,     8,     9,
      -1,    -1,   138,    13,    -1,    15,    16,    17,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    27,    28,    -1,
      30,    31,    -1,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    75,    -1,    77,    78,    79,
      80,    81,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,   132,   133,     8,     9,    -1,    -1,   138,    13,
      -1,    15,    16,    17,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    -1,    27,    28,    -1,    30,    31,    -1,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    -1,    -1,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,   117,   118,   119,   120,     3,     4,     5,
      -1,    -1,     8,     9,    -1,    -1,    -1,    13,   132,    -1,
      16,    17,    -1,    -1,   138,    21,    22,    23,    24,    25,
      -1,    27,    28,    -1,    30,    -1,     3,    33,    -1,    35,
      36,    37,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    24,    25,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    -1,
      37,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    77,    78,    79,    80,    81,    82,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
     116,   117,   118,   119,   120,    -1,     4,     5,    95,    -1,
       8,     9,    -1,    -1,    -1,    13,   132,    15,   105,    17,
      -1,    -1,   138,    -1,    22,    23,    -1,    25,    -1,    27,
      28,    -1,   119,    31,    -1,    -1,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,
      -1,   138,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    75,    -1,    77,
      78,    79,    80,    81,    82,    -1,    -1,    85,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,   116,   117,
     118,   119,   120,    -1,    -1,    -1,    -1,     4,     5,    -1,
      -1,     8,     9,    -1,   132,   133,    13,    -1,    15,    -1,
      17,    -1,    -1,    -1,    -1,    22,    23,    -1,    25,    -1,
      27,    28,    -1,    -1,    31,    -1,    -1,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    75,    -1,
      77,    78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,     4,     5,    -1,    -1,     8,     9,
      -1,    -1,    -1,    13,    -1,   132,   133,    17,    -1,    -1,
      -1,    -1,    22,    23,    -1,    25,    -1,    27,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    -1,    -1,    77,    78,    79,
      80,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,   117,   118,   119,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     8,     9,    13,    15,    16,    17,
      21,    22,    23,    24,    25,    27,    28,    30,    31,    33,
      34,    35,    36,    37,    62,    63,    69,    70,    71,    72,
      73,    74,    75,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    95,   105,
     115,   116,   117,   118,   119,   120,   132,   133,   137,   138,
     176,   186,   199,   201,   202,   203,   241,   242,   243,   250,
     254,   255,   256,   257,   260,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   279,   281,   282,
     283,   284,   286,   290,   295,   298,   308,   311,   363,   364,
     365,   366,   367,   378,   387,   388,   389,   390,   176,   176,
     176,    92,   176,    92,    92,   176,   176,    92,   176,   176,
     193,   181,   181,   181,   176,   176,   388,   390,   257,   258,
     260,   261,   298,   387,     0,   296,   297,   298,   199,   178,
     199,   178,   199,   176,   186,   199,   203,   379,   380,   381,
     382,   383,   384,   385,   387,   199,   379,   203,   259,   260,
     272,   274,   281,   282,   283,   298,   387,   203,   260,   272,
     274,   281,   282,   283,   298,   387,   259,   282,   260,   281,
     282,   259,   260,   281,   259,   259,   259,   260,   281,   257,
     281,   257,   281,   296,   296,   296,   365,   332,   333,   368,
     176,   181,   393,   395,   397,    29,    41,    42,    49,    64,
      65,    66,    67,    96,    97,    98,    99,   100,   111,   112,
     113,   114,   129,   130,   134,   176,   185,   186,   187,   188,
     189,   190,   202,   204,   205,   206,   207,   208,   209,   210,
     213,   214,   215,   217,   218,   219,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   296,   322,   207,   176,   238,   238,   202,
     238,    25,    62,    63,   177,   178,   276,   277,   278,   322,
     238,   238,   238,   322,   237,   177,   177,   260,   261,   298,
     387,   298,   387,   379,   176,   203,   382,   384,   386,   176,
     258,   381,   384,   393,    84,   247,   248,   249,   298,   249,
     296,   296,   296,   296,   244,   296,   257,   257,   296,   245,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   279,   280,   202,   203,   309,   321,   183,   177,   394,
     396,   182,   186,   237,   239,   260,   262,   263,   281,   298,
     181,   176,   222,   176,   222,   222,   321,   343,   176,   176,
     176,   176,   176,   222,   333,   333,   333,   333,   223,   223,
     176,   238,   322,   332,   223,   223,   223,   223,   223,   223,
      40,    41,    42,   176,   180,   181,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,   198,   186,   191,   192,
     187,   188,    43,    44,    45,    46,   193,   194,    47,    48,
     185,   195,   196,    49,    50,   125,   126,   197,   177,   178,
     255,   257,   265,   267,   271,   273,   275,   177,   177,     9,
     202,   293,   294,   177,   177,   177,   177,   176,   177,   277,
     194,   182,   182,   182,   177,   178,   393,   246,   249,   386,
     177,   177,   393,   386,   176,   381,   384,    19,    37,   348,
     247,   251,   252,   198,   323,   323,   287,   321,   183,   296,
     310,     6,     7,    10,    11,    12,    18,    19,    20,    26,
      32,    39,    68,    84,    93,    94,   101,   104,   121,   123,
     184,   202,   203,   238,   240,   241,   254,   255,   256,   257,
     321,   329,   330,   331,   332,   334,   335,   336,   338,   340,
     341,   344,   345,   346,   347,   255,   257,   260,   265,   271,
     281,   370,   371,   372,   373,   374,   375,   376,   377,   202,
     317,   318,   254,   255,   256,   257,   316,   319,   320,   182,
     182,   182,   239,   262,   186,   239,   322,   322,   322,   237,
     322,   322,   322,   183,   183,   241,   241,   237,   177,   177,
     177,   202,   203,   220,   177,   221,   237,   220,   238,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     223,   223,   223,   223,   224,   224,   225,   225,   226,   226,
     226,   226,   227,   227,   228,   229,   230,   231,   232,   234,
     234,   179,   238,   237,   176,   186,   195,   391,   393,   398,
     400,   391,   199,   176,   177,   178,    92,    92,    92,    64,
      67,   276,   181,   181,   237,   323,   253,   177,   393,   393,
     177,   177,   386,    37,    19,   176,   323,   323,   183,   239,
     324,   183,   288,   289,   312,   313,   314,   321,   183,   199,
     239,   199,   179,   329,   339,   203,   238,   176,   199,   238,
     176,   176,   184,   348,   342,   343,    68,   183,   332,   199,
     332,   199,   379,   379,   387,   387,   179,   184,   329,   379,
     281,   281,   281,   371,   203,   259,   282,   290,   311,   259,
     282,   259,   379,   178,   199,   177,   178,   176,   186,   195,
     381,   387,   392,   395,   399,   401,   381,   387,   392,   176,
     186,   387,   392,   387,   392,   177,   178,   182,   182,   182,
     177,   177,   177,   178,   178,   178,   177,   241,   241,   176,
     209,   209,   178,   183,   223,   177,   178,   182,   236,   179,
     393,   398,   400,   258,   391,   237,   291,   292,   177,   293,
     177,   177,   198,   238,   238,   177,   323,   177,   207,   349,
     350,   180,   181,   202,   220,   324,   325,   326,   327,   328,
     199,   242,   296,   299,   300,   301,   302,   303,   183,   296,
     184,   178,   296,   312,    51,   179,   329,    39,   176,   199,
     199,   238,   199,   238,   240,   176,   183,   178,   199,    68,
     102,   103,   122,   124,   329,   296,   296,   296,   296,   321,
     321,   296,   296,   296,   379,   369,   370,   318,   177,   399,
     401,   258,   392,   296,   296,   258,   296,   296,    51,   320,
     322,   322,   216,   220,   238,   238,    11,   211,   212,   322,
     325,   326,   237,   236,   177,   177,   177,   391,   178,   177,
     276,   182,   182,   177,   179,   351,   220,   238,   179,   178,
     184,   180,   181,   198,   324,   199,   255,   257,   184,   301,
     178,   199,   178,   199,   299,   296,   314,   198,   315,   184,
     239,   329,   176,   330,   335,   337,   177,   177,   177,   349,
      68,   343,   184,   332,   176,   332,   332,   296,   296,   177,
     177,   392,   177,   177,   177,   180,   181,   184,   184,   179,
     177,   178,   179,   178,   184,   393,   393,   237,   177,   178,
     181,   207,   352,   353,   179,   354,    51,   182,   324,   184,
     327,   220,   238,   324,   179,   304,   307,   379,   305,   307,
     387,   296,   305,   304,   184,   239,   296,   179,   238,   240,
     329,   329,   329,   177,   184,   238,   176,   395,   220,   238,
     237,   212,   237,   184,   276,   321,   176,   178,   181,   207,
     355,   356,   179,   357,   238,    51,   182,   239,   296,   306,
     307,   296,   306,   285,   296,   329,   177,   199,    14,   199,
     177,   182,   198,   182,   238,   352,   321,   176,   178,   207,
     358,   359,   179,   360,   182,   238,   296,   296,   285,   199,
     240,   329,   332,   276,   207,   177,   182,   238,   355,   178,
     343,   361,   362,   182,   177,   177,   176,   207,   177,   358,
     178,   329,   238,   176,   362,   177,   238,   177
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     208,   208,   208,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   210,   211,   211,   212,   212,   213,   213,   214,
     215,   216,   216,   216,   217,   217,   217,   217,   218,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   220,
     220,   221,   221,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   223,   223,   223,
     223,   224,   224,   224,   224,   225,   225,   225,   226,   226,
     226,   227,   227,   227,   227,   227,   228,   228,   228,   229,
     229,   230,   230,   231,   231,   232,   232,   233,   233,   234,
     234,   235,   235,   236,   236,   236,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   238,   238,
     239,   240,   240,   241,   241,   241,   241,   241,   242,   244,
     243,   245,   243,   246,   243,   247,   247,   248,   248,   249,
     249,   251,   250,   252,   250,   253,   250,   254,   254,   254,
     254,   254,   255,   255,   255,   255,   255,   256,   256,   256,
     256,   256,   257,   257,   257,   258,   258,   259,   259,   260,
     260,   260,   260,   260,   260,   260,   260,   261,   261,   262,
     262,   262,   263,   263,   264,   264,   264,   264,   265,   265,
     265,   265,   266,   266,   266,   267,   267,   267,   268,   268,
     268,   269,   269,   269,   270,   270,   270,   271,   271,   271,
     272,   272,   273,   273,   273,   273,   274,   275,   275,   275,
     275,   276,   276,   276,   277,   277,   277,   277,   277,   277,
     278,   278,   279,   279,   280,   280,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     283,   283,   283,   284,   285,   287,   286,   288,   286,   289,
     286,   290,   290,   291,   291,   292,   292,   293,   293,   293,
     293,   294,   294,   295,   296,   296,   297,   297,   298,   298,
     298,   298,   298,   298,   298,   298,   299,   299,   300,   300,
     301,   301,   301,   301,   302,   302,   303,   303,   304,   304,
     304,   305,   305,   306,   306,   307,   309,   308,   310,   308,
     308,   311,   312,   312,   313,   313,   313,   314,   315,   315,
     316,   316,   317,   317,   318,   319,   319,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   321,   321,   322,   322,   322,   322,   323,   323,   324,
     324,   324,   325,   325,   326,   326,   327,   327,   327,   327,
     328,   328,   328,   328,   328,   328,   329,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   330,   331,
     331,   331,   331,   332,   332,   332,   333,   334,   334,   335,
     336,   336,   336,   337,   337,   338,   338,   339,   338,   340,
     340,   340,   340,   340,   340,   341,   342,   342,   343,   344,
     344,   345,   345,   346,   346,   346,   347,   347,   347,   348,
     348,   348,   348,   348,   349,   349,   349,   349,   349,   350,
     351,   351,   352,   352,   353,   353,   354,   354,   355,   355,
     356,   356,   357,   357,   358,   359,   359,   360,   360,   361,
     361,   362,   363,   363,   364,   364,   365,   365,   365,   365,
     366,   367,   368,   369,   369,   370,   370,   371,   372,   372,
     372,   373,   373,   373,   373,   374,   374,   374,   375,   375,
     376,   376,   376,   377,   377,   377,   378,   378,   378,   378,
     378,   379,   379,   380,   380,   381,   381,   381,   382,   382,
     382,   383,   383,   384,   384,   384,   384,   384,   385,   385,
     385,   386,   386,   387,   387,   388,   388,   388,   389,   389,
     389,   390,   390,   391,   391,   391,   392,   392,   393,   393,
     394,   393,   395,   395,   396,   395,   397,   397,   397,   397,
     397,   397,   397,   398,   398,   398,   398,   398,   399,   399,
     399,   399,   399,   400,   400,   400,   400,   400,   401,   401,
     401,   401
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     6,     1,     3,     3,     3,     6,     6,     4,
       6,     1,     3,     4,     6,     4,     6,     4,     3,     1,
       4,     3,     4,     3,     3,     2,     2,     6,     7,     1,
       1,     1,     3,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     2,     4,     1,     4,     2,
       2,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     4,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       1,     0,     1,     2,     2,     2,     2,     2,     6,     0,
       4,     0,     4,     0,     5,     5,     1,     2,     1,     0,
       1,     0,     5,     0,     5,     0,     6,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     1,     1,
       1,     1,     1,     2,     3,     3,     3,     3,     2,     3,
       2,     3,     2,     2,     2,     1,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       4,     4,     1,     2,     3,     2,     4,     1,     2,     3,
       2,     1,     1,     1,     1,     4,     4,     6,    10,     1,
       1,     2,     4,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     7,     7,     1,
       1,     1,     1,     4,     0,     0,     9,     0,    10,     0,
       6,     1,     1,     1,     3,     0,     1,     0,     1,     1,
       4,     1,     3,     6,     0,     1,     1,     2,     2,     2,
       5,     2,     5,     5,     2,     1,     0,     1,     1,     2,
       2,     2,     1,     2,     3,     3,     3,     3,     3,     0,
       2,     3,     2,     0,     1,     2,     0,     7,     0,     8,
       4,     1,     0,     1,     1,     3,     2,     3,     0,     2,
       1,     3,     1,     3,     1,     1,     3,     1,     2,     3,
       2,     1,     2,     3,     1,     2,     3,     2,     1,     2,
       3,     1,     1,     2,     3,     2,     3,     0,     2,     1,
       3,     4,     1,     3,     1,     0,     1,     3,     2,     3,
       2,     3,     5,     4,     6,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     6,     3,     3,     4,     4,     0,     1,     2,     2,
       5,     7,     5,     1,     1,     5,     7,     0,     9,     3,
       3,     2,     2,     2,     3,     3,     1,     3,     1,     6,
       5,     4,     2,     7,     4,     1,     2,     4,     4,     0,
       1,     1,     2,     2,     1,     2,     3,     4,     5,     1,
       2,     1,     4,     7,     1,     3,     2,     1,     4,     7,
       1,     3,     2,     1,     1,     1,     3,     2,     1,     1,
       3,     1,     0,     1,     1,     2,     1,     1,     1,     1,
       5,     2,     1,     0,     1,     1,     2,     2,     1,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     4,     4,
       1,     1,     1,     2,     2,     3,     1,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     2,     1,     1,     2,
       3,     3,     4,     1,     4,     5,     2,     3,     3,     4,
       4,     1,     3,     1,     1,     1,     2,     3,     2,     3,
       4,     1,     3,     1,     1,     1,     1,     1,     1,     3,
       0,     5,     1,     2,     0,     4,     2,     3,     3,     3,
       4,     4,     4,     1,     2,     2,     3,     1,     1,     2,
       2,     3,     1,     3,     3,     3,     4,     4,     3,     3,
       1,     4
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
        case 15:
#line 284 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 3540 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 295 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          set((yyval), ID_generic_selection);
          mto((yyval), (yyvsp[-3]));
          stack((yyval)).add(ID_generic_associations).get_sub().swap((irept::subt&)stack((yyvsp[-1])).operands());
        }
#line 3551 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 305 "parser.y" /* yacc.c:1646  */
    {
          init((yyval)); mto((yyval), (yyvsp[0]));
        }
#line 3559 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 309 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]); mto((yyval), (yyvsp[0]));
        }
#line 3567 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 316 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          stack((yyval)).id(ID_generic_association);
          stack((yyval)).set(ID_type_arg, stack((yyvsp[-2])));
          stack((yyval)).set(ID_value, stack((yyvsp[0])));
        }
#line 3578 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 323 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          stack((yyval)).id(ID_generic_association);
          stack((yyval)).set(ID_type_arg, irept(ID_default));
          stack((yyval)).set(ID_value, stack((yyvsp[0])));
        }
#line 3589 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 333 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          stack((yyval)).id(ID_gcc_builtin_va_arg);
          mto((yyval), (yyvsp[-3]));
          stack((yyval)).type().swap(stack((yyvsp[-1])));
        }
#line 3600 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 341 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          stack((yyval)).id(ID_gcc_builtin_types_compatible_p);
          typet &type_arg=(typet &)(stack((yyval)).add(ID_type_arg));
          typet::subtypest &subtypes=type_arg.subtypes();
          subtypes.resize(2);
          subtypes[0].swap(stack((yyvsp[-3])));
          subtypes[1].swap(stack((yyvsp[-1])));
        }
#line 3614 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 354 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          stack((yyval)).id(ID_cw_va_arg_typeof);
          stack((yyval)).add(ID_type_arg).swap(stack((yyvsp[-1])));
        }
#line 3624 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 363 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          stack((yyval)).id(ID_builtin_offsetof);
          stack((yyval)).add(ID_type_arg).swap(stack((yyvsp[-3])));
          stack((yyval)).add(ID_designator).swap(stack((yyvsp[-1])));
        }
#line 3635 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 373 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_designated_initializer);
          stack((yyval)).operands().resize(1);
          stack((yyval)).op0().id(ID_member);
          stack((yyval)).op0().add_source_location()=stack((yyvsp[0])).source_location();
          stack((yyval)).op0().set(ID_component_name, stack((yyvsp[0])).get(ID_C_base_name));
        }
#line 3647 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 381 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          set((yyvsp[-1]), ID_member);
          stack((yyvsp[-1])).set(ID_component_name, stack((yyvsp[0])).get(ID_C_base_name));
          mto((yyval), (yyvsp[-1]));
        }
#line 3658 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 388 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          set((yyvsp[-2]), ID_index);
          mto((yyvsp[-2]), (yyvsp[-1]));
          mto((yyval), (yyvsp[-2]));
        }
#line 3669 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 398 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          set((yyval), ID_forall);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[-1]));
          PARSER.pop_scope();
        }
#line 3681 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 406 "parser.y" /* yacc.c:1646  */
    {
          // The precedence of this operator is too high; it is meant
          // to bind only very weakly.
          (yyval)=(yyvsp[-3]);
          set((yyval), ID_forall);
          mto((yyval), (yyvsp[-1]));
          mto((yyval), (yyvsp[0]));
          PARSER.pop_scope();
        }
#line 3695 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 416 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          set((yyval), ID_exists);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[-1]));
          PARSER.pop_scope();
        }
#line 3707 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 424 "parser.y" /* yacc.c:1646  */
    {
          // The precedence of this operator is too high; it is meant
          // to bind only very weakly.
          (yyval)=(yyvsp[-3]);
          set((yyval), ID_exists);
          mto((yyval), (yyvsp[-1]));
          mto((yyval), (yyvsp[0]));
          PARSER.pop_scope();
        }
#line 3721 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 436 "parser.y" /* yacc.c:1646  */
    { 
          (yyval)=(yyvsp[-2]);
          set((yyval), ID_side_effect);
          stack((yyval)).set(ID_statement, ID_statement_expression);
          mto((yyval), (yyvsp[-1]));
        }
#line 3732 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 447 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-3]), (yyvsp[-2]), ID_index, (yyvsp[-1])); }
#line 3738 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 449 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_side_effect);
          stack((yyval)).set(ID_statement, ID_function_call);
          stack((yyval)).operands().resize(2);
          stack((yyval)).op0().swap(stack((yyvsp[-2])));
          stack((yyval)).op1().clear();
          stack((yyval)).op1().id(ID_arguments);
        }
#line 3751 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 458 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-2]);
          set((yyval), ID_side_effect);
          stack((yyval)).set(ID_statement, ID_function_call);
          stack((yyval)).operands().resize(2);
          stack((yyval)).op0().swap(stack((yyvsp[-3])));
          stack((yyval)).op1().swap(stack((yyvsp[-1])));
          stack((yyval)).op1().id(ID_arguments);
        }
#line 3764 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 467 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_member);
          mto((yyval), (yyvsp[-2]));
          stack((yyval)).set(ID_component_name, stack((yyvsp[0])).get(ID_C_base_name));
        }
#line 3774 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 473 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_ptrmember);
          mto((yyval), (yyvsp[-2]));
          stack((yyval)).set(ID_component_name, stack((yyvsp[0])).get(ID_C_base_name));
        }
#line 3784 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 479 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]);
          set((yyval), ID_side_effect);
          stack((yyval)).set(ID_statement, ID_postincrement);
          mto((yyval), (yyvsp[-1]));
        }
#line 3794 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 485 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]);
          set((yyval), ID_side_effect);
          stack((yyval)).set(ID_statement, ID_postdecrement);
          mto((yyval), (yyvsp[-1]));
        }
#line 3804 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 492 "parser.y" /* yacc.c:1646  */
    {
          exprt tmp(ID_initializer_list);
          tmp.add_source_location()=stack((yyvsp[-2])).source_location();
          tmp.operands().swap(stack((yyvsp[-1])).operands());
          (yyval)=(yyvsp[-5]);
          set((yyval), ID_typecast);
          stack((yyval)).move_to_operands(tmp);
          stack((yyval)).type().swap(stack((yyvsp[-4])));
        }
#line 3818 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 502 "parser.y" /* yacc.c:1646  */
    {
          // same as above
          exprt tmp(ID_initializer_list);
          tmp.add_source_location()=stack((yyvsp[-3])).source_location();
          tmp.operands().swap(stack((yyvsp[-2])).operands());
          (yyval)=(yyvsp[-6]);
          set((yyval), ID_typecast);
          stack((yyval)).move_to_operands(tmp);
          stack((yyval)).type().swap(stack((yyvsp[-5])));
        }
#line 3833 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 521 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_expression_list);
          mto((yyval), (yyvsp[0]));
        }
#line 3842 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 526 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 3851 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 535 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_side_effect);
          stack((yyval)).set(ID_statement, ID_preincrement);
          mto((yyval), (yyvsp[0]));
        }
#line 3861 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 541 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_side_effect);
          stack((yyval)).set(ID_statement, ID_predecrement);
          mto((yyval), (yyvsp[0]));
        }
#line 3871 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 547 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_address_of);
          mto((yyval), (yyvsp[0]));
        }
#line 3880 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 552 "parser.y" /* yacc.c:1646  */
    { // this takes the address of a label (a gcc extension)
          (yyval)=(yyvsp[-1]);
          irep_idt identifier=PARSER.lookup_label(stack((yyvsp[0])).get(ID_C_base_name));
          set((yyval), ID_address_of);
          stack((yyval)).operands().resize(1);
          stack((yyval)).op0()=stack((yyvsp[0]));
          stack((yyval)).op0().id(ID_label);
          stack((yyval)).op0().set(ID_identifier, identifier);
        }
#line 3894 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 562 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_dereference);
          mto((yyval), (yyvsp[0]));
        }
#line 3903 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 567 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_unary_plus);
          mto((yyval), (yyvsp[0]));
        }
#line 3912 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 572 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_unary_minus);
          mto((yyval), (yyvsp[0]));
        }
#line 3921 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 577 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_bitnot);
          mto((yyval), (yyvsp[0]));
        }
#line 3930 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 582 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_not);
          mto((yyval), (yyvsp[0]));
        }
#line 3939 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 587 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_sizeof);
          mto((yyval), (yyvsp[0]));
        }
#line 3948 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 592 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-3]);
          set((yyval), ID_sizeof);
          stack((yyval)).add(ID_type_arg).swap(stack((yyvsp[-1])));
        }
#line 3957 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 597 "parser.y" /* yacc.c:1646  */
    { // note no parentheses for expressions, just like sizeof
          (yyval)=(yyvsp[-1]);
          set((yyval), ID_alignof);
          mto((yyval), (yyvsp[0]));
        }
#line 3967 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 603 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          stack((yyval)).id(ID_alignof);
          stack((yyval)).add(ID_type_arg).swap(stack((yyvsp[-1])));
        }
#line 3977 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 613 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          set((yyval), ID_typecast);
          mto((yyval), (yyvsp[0]));
          stack((yyval)).type().swap(stack((yyvsp[-2])));
        }
#line 3988 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 620 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_complex_real);
          mto((yyval), (yyvsp[0]));
        }
#line 3997 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 625 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          set((yyval), ID_complex_imag);
          mto((yyval), (yyvsp[0]));
        }
#line 4006 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 634 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_mult, (yyvsp[0])); }
#line 4012 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 636 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_div, (yyvsp[0])); }
#line 4018 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 638 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_mod, (yyvsp[0])); }
#line 4024 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 644 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_plus, (yyvsp[0])); }
#line 4030 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 646 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_minus, (yyvsp[0])); }
#line 4036 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 652 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_shl, (yyvsp[0])); }
#line 4042 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 654 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_shr, (yyvsp[0])); }
#line 4048 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 660 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_lt, (yyvsp[0])); }
#line 4054 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 662 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_gt, (yyvsp[0])); }
#line 4060 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 664 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_le, (yyvsp[0])); }
#line 4066 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 666 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_ge, (yyvsp[0])); }
#line 4072 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 672 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_equal, (yyvsp[0])); }
#line 4078 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 674 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_notequal, (yyvsp[0])); }
#line 4084 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 680 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_bitand, (yyvsp[0])); }
#line 4090 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 686 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_bitxor, (yyvsp[0])); }
#line 4096 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 692 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_bitor, (yyvsp[0])); }
#line 4102 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 698 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_and, (yyvsp[0])); }
#line 4108 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 704 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_or, (yyvsp[0])); }
#line 4114 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 713 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_implies, (yyvsp[0])); }
#line 4120 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 722 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_equal, (yyvsp[0])); }
#line 4126 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 728 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-3]);
          stack((yyval)).id(ID_if);
          mto((yyval), (yyvsp[-4]));
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 4137 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 735 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-2]);
          stack((yyval)).id(ID_side_effect);
          stack((yyval)).set(ID_statement, ID_gcc_conditional_expression);
          mto((yyval), (yyvsp[-3]));
          mto((yyval), (yyvsp[0]));
        }
#line 4148 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 746 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign); }
#line 4154 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 748 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_mult); }
#line 4160 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 750 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_div); }
#line 4166 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 752 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_mod); }
#line 4172 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 754 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_plus); }
#line 4178 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 756 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_minus); }
#line 4184 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 758 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_shl); }
#line 4190 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 760 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_shr); }
#line 4196 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 762 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_bitand); }
#line 4202 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 764 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_bitxor); }
#line 4208 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 766 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_side_effect, (yyvsp[0])); stack((yyval)).set(ID_statement, ID_assign_bitor); }
#line 4214 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 772 "parser.y" /* yacc.c:1646  */
    { binary((yyval), (yyvsp[-2]), (yyvsp[-1]), ID_comma, (yyvsp[0])); }
#line 4220 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 781 "parser.y" /* yacc.c:1646  */
    { init((yyval)); stack((yyval)).make_nil(); }
#line 4226 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 789 "parser.y" /* yacc.c:1646  */
    {
          // type only, no declarator!
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
        }
#line 4236 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 795 "parser.y" /* yacc.c:1646  */
    {
          // type only, no identifier!
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
        }
#line 4246 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 807 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]);
          set((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_static_assert(true);
          mto((yyval), (yyvsp[-3]));
          mto((yyval), (yyvsp[-1]));
        }
#line 4258 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 818 "parser.y" /* yacc.c:1646  */
    {
            init((yyval), ID_declaration);
            stack((yyval)).type().swap(stack((yyvsp[-1])));
            PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
          }
#line 4268 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 824 "parser.y" /* yacc.c:1646  */
    {
          // patch on the initializer
          (yyval)=(yyvsp[-1]);
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 4278 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 830 "parser.y" /* yacc.c:1646  */
    {
            init((yyval), ID_declaration);
            stack((yyval)).type().swap(stack((yyvsp[-1])));
            PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
          }
#line 4288 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 836 "parser.y" /* yacc.c:1646  */
    {
          // patch on the initializer
          (yyval)=(yyvsp[-1]);
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 4298 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 842 "parser.y" /* yacc.c:1646  */
    {
            // just add the declarator
            PARSER.add_declarator(stack((yyvsp[-2])), stack((yyvsp[0])));
            // Needs to be done before initializer, as we want to see that identifier
            // already there!
          }
#line 4309 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 849 "parser.y" /* yacc.c:1646  */
    {
          // patch on the initializer
          (yyval)=(yyvsp[-4]);
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 4319 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 858 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-4]);
          stack((yyval)).id(ID_asm);
          stack((yyval)).set(ID_flavor, ID_gcc);
          stack((yyval)).operands().swap(stack((yyvsp[-1])).operands());
        }
#line 4330 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 869 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4338 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 877 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
        }
#line 4346 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 886 "parser.y" /* yacc.c:1646  */
    {
            (yyvsp[-1])=merge((yyvsp[0]), (yyvsp[-1])); // type attribute
            
            // the symbol has to be visible during initialization
            init((yyval), ID_declaration);
            stack((yyval)).type().swap(stack((yyvsp[-2])));
            PARSER.add_declarator(stack((yyval)), stack((yyvsp[-1])));
          }
#line 4359 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 895 "parser.y" /* yacc.c:1646  */
    {
          // add the initializer
          (yyval)=(yyvsp[-1]);
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 4369 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 902 "parser.y" /* yacc.c:1646  */
    {
            (yyvsp[-1])=merge((yyvsp[0]), (yyvsp[-1]));
            
            // the symbol has to be visible during initialization
            init((yyval), ID_declaration);
            stack((yyval)).type().swap(stack((yyvsp[-2])));
            PARSER.add_declarator(stack((yyval)), stack((yyvsp[-1])));
          }
#line 4382 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 911 "parser.y" /* yacc.c:1646  */
    {
          // add the initializer
          (yyval)=(yyvsp[-1]);
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 4392 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 918 "parser.y" /* yacc.c:1646  */
    {
            // type attribute goes into declarator
            (yyvsp[-1])=merge((yyvsp[0]), (yyvsp[-1]));
            PARSER.add_declarator(stack((yyvsp[-3])), stack((yyvsp[-1])));
          }
#line 4402 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 924 "parser.y" /* yacc.c:1646  */
    {
          // add in the initializer
          (yyval)=(yyvsp[-5]);
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 4412 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 950 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4420 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 955 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4428 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 959 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4436 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 967 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4444 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 974 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4452 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 982 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4460 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 993 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_atomic); }
#line 4466 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 994 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_const); }
#line 4472 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 995 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_restrict); }
#line 4478 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 996 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_volatile); }
#line 4484 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 997 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_cprover_atomic); }
#line 4490 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 998 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_ptr32); }
#line 4496 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 999 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_ptr64); }
#line 4502 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1000 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-3]); set((yyval), ID_msc_based); mto((yyval), (yyvsp[-1])); }
#line 4508 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1017 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4516 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1024 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4524 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1028 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4532 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1032 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4540 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1036 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4548 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1043 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0])); // type attribute
        }
#line 4556 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1047 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4564 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1051 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4572 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1055 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4580 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1063 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4588 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1067 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4596 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1071 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4604 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1080 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4612 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1084 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4620 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1091 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4628 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1095 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4636 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1099 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4644 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1106 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4652 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1110 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4660 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1114 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4668 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1121 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4676 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1125 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4684 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1129 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4692 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1136 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4700 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1140 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4708 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1144 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4716 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1151 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-3]);
          stack((yyval)).id(ID_typeof);
          mto((yyval), (yyvsp[-1]));
        }
#line 4725 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1156 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-3]);
          stack((yyval)).id(ID_typeof);
          stack((yyval)).set(ID_type_arg, stack((yyvsp[-1])));
        }
#line 4734 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1165 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4742 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1169 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4750 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1173 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4758 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1180 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          stack((yyval)).id(ID_atomic_type_specifier);
          stack_type((yyval)).subtype()=stack_type((yyvsp[-1]));
        }
#line 4768 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1190 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4776 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1194 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 4784 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1198 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 4792 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1205 "parser.y" /* yacc.c:1646  */
    {
          stack((yyval)).id(stack((yyval)).get(ID_identifier));
        }
#line 4800 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1209 "parser.y" /* yacc.c:1646  */
    {
          stack((yyval)).id(stack((yyval)).get(ID_identifier));
        }
#line 4808 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1213 "parser.y" /* yacc.c:1646  */
    {
          stack((yyval)).id(ID_restrict);
        }
#line 4816 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1221 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]); mto((yyval), (yyvsp[-1]));
        }
#line 4824 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1225 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]); mto((yyval), (yyvsp[-1]));
        }
#line 4832 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1229 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-5]); mto((yyval), (yyvsp[-3])); mto((yyval), (yyvsp[-1]));
        }
#line 4840 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1233 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-9]); mto((yyval), (yyvsp[-7])); mto((yyval), (yyvsp[-5])); mto((yyval), (yyvsp[-3])); mto((yyval), (yyvsp[-1]));
        }
#line 4848 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1236 "parser.y" /* yacc.c:1646  */
    { init((yyval), ID_nil); }
#line 4854 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1241 "parser.y" /* yacc.c:1646  */
    {
          init((yyval)); mto((yyval), (yyvsp[0]));
        }
#line 4862 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1245 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]); mto((yyval), (yyvsp[0]));
        }
#line 4870 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1252 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]); set((yyval), ID_msc_declspec);
          stack((yyval)).operands().swap(stack((yyvsp[-1])).operands());
        }
#line 4879 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1257 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]); set((yyval), ID_msc_declspec);
        }
#line 4887 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1264 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_nil);
        }
#line 4895 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1271 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_typedef); }
#line 4901 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1272 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_extern); }
#line 4907 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1273 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_static); }
#line 4913 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1274 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_auto); }
#line 4919 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1275 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_register); }
#line 4925 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1276 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_inline); }
#line 4931 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1277 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_thread_local); }
#line 4937 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1278 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_asm); }
#line 4943 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1279 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); }
#line 4949 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1283 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_int); }
#line 4955 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1284 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_int8); }
#line 4961 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1285 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_int16); }
#line 4967 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1286 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_int32); }
#line 4973 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1287 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_int64); }
#line 4979 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1288 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_char); }
#line 4985 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1289 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_short); }
#line 4991 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1290 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_long); }
#line 4997 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1291 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_float); }
#line 5003 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1292 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_float80); }
#line 5009 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1293 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_float128); }
#line 5015 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1294 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_int128); }
#line 5021 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1295 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_decimal32); }
#line 5027 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1296 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_decimal64); }
#line 5033 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1297 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_gcc_decimal128); }
#line 5039 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1298 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_double); }
#line 5045 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1299 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_signed); }
#line 5051 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1300 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_unsigned); }
#line 5057 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1301 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_void); }
#line 5063 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1302 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_c_bool); }
#line 5069 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1303 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_complex); }
#line 5075 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1305 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          set((yyval), ID_custom_bv);
          stack((yyval)).add(ID_size).swap(stack((yyvsp[-1])));
        }
#line 5085 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1311 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-6]);
          set((yyval), ID_custom_floatbv);
          stack((yyval)).add(ID_size).swap(stack((yyvsp[-4])));
          stack((yyval)).add(ID_f).swap(stack((yyvsp[-1])));
        }
#line 5096 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1318 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-6]);
          set((yyval), ID_custom_fixedbv);
          stack((yyval)).add(ID_size).swap(stack((yyvsp[-4])));
          stack((yyval)).add(ID_f).swap(stack((yyvsp[-1])));
        }
#line 5107 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1324 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_proper_bool); }
#line 5113 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1335 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-3]); stack_type((yyval)).subtype().swap(stack((yyvsp[-2]))); }
#line 5119 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1339 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          if(!PARSER.pragma_pack.empty() &&
             PARSER.pragma_pack.back().is_one())
            set((yyval), ID_packed);
        }
#line 5130 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1351 "parser.y" /* yacc.c:1646  */
    {
            // an anon struct/union with body
          }
#line 5138 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1357 "parser.y" /* yacc.c:1646  */
    {
          // save the members
          stack((yyvsp[-8])).add(ID_components).get_sub().swap(
            (irept::subt &)stack((yyvsp[-3])).operands());

          // throw in the gcc attributes
          (yyval)=merge((yyvsp[-8]), merge((yyvsp[-7]), merge((yyvsp[-1]), (yyvsp[0]))));
        }
#line 5151 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1369 "parser.y" /* yacc.c:1646  */
    {
            // A struct/union with tag and body.
            PARSER.add_tag_with_body(stack((yyvsp[0])));
            stack((yyvsp[-3])).set(ID_tag, stack((yyvsp[0])));
          }
#line 5161 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1377 "parser.y" /* yacc.c:1646  */
    {
          // save the members
          stack((yyvsp[-9])).add(ID_components).get_sub().swap(
            (irept::subt &)stack((yyvsp[-3])).operands());

          // throw in the gcc attributes
          (yyval)=merge((yyvsp[-9]), merge((yyvsp[-8]), merge((yyvsp[-1]), (yyvsp[0]))));
        }
#line 5174 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1389 "parser.y" /* yacc.c:1646  */
    {
            // a struct/union with tag but without body
            stack((yyvsp[-3])).set(ID_tag, stack((yyvsp[0])));
          }
#line 5183 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1394 "parser.y" /* yacc.c:1646  */
    {
          stack((yyvsp[-5])).set(ID_components, ID_nil);
          // type attributes
          (yyval)=merge((yyvsp[-5]), merge((yyvsp[-4]), (yyvsp[0])));
        }
#line 5193 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1403 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_struct); }
#line 5199 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1405 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[0]); set((yyval), ID_union); }
#line 5205 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1410 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_expression_list);
          mto((yyval), (yyvsp[0]));
        }
#line 5214 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1415 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 5223 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1423 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_expression_list);
        }
#line 5231 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1431 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
        }
#line 5239 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1435 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          stack((yyval)).id(ID_gcc_attribute);
          stack((yyval)).set(ID_identifier, ID_const);
        }
#line 5249 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1441 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          stack((yyval)).id(ID_gcc_attribute);
        }
#line 5258 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1446 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          stack((yyval)).id(ID_gcc_attribute);
          stack((yyval)).operands().swap(stack((yyvsp[-1])).operands());
        }
#line 5268 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1456 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), (yyvsp[-1]));
        }
#line 5276 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1463 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-2]); }
#line 5282 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1468 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
        }
#line 5290 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1477 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
        }
#line 5298 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1484 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); set((yyval), ID_packed); }
#line 5304 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1486 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); set((yyval), ID_transparent_union); }
#line 5310 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1488 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-4]); set((yyval), ID_vector); stack((yyval)).add(ID_size)=stack((yyvsp[-2])); }
#line 5316 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1490 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); set((yyval), ID_aligned); }
#line 5322 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1492 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-4]); set((yyval), ID_aligned); stack((yyval)).set(ID_size, stack((yyvsp[-2]))); }
#line 5328 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1494 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-4]); set((yyval), ID_gcc_attribute_mode); stack((yyval)).set(ID_size, stack((yyvsp[-2])).get(ID_identifier)); }
#line 5334 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1496 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); set((yyval), ID_static); }
#line 5340 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1502 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration_list);
        }
#line 5348 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1510 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration_list);
          mto((yyval), (yyvsp[0]));
        }
#line 5357 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1515 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          mto((yyval), (yyvsp[0]));
        }
#line 5366 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1525 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
        }
#line 5374 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1538 "parser.y" /* yacc.c:1646  */
    {
          (yyvsp[-1])=merge((yyvsp[-1]), (yyvsp[-2]));

          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_member(true);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5387 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1547 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5396 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1557 "parser.y" /* yacc.c:1646  */
    {
          if(!PARSER.pragma_pack.empty() &&
             !PARSER.pragma_pack.back().is_zero())
            stack((yyvsp[-1])).set(ID_C_alignment, PARSER.pragma_pack.back());

          (yyvsp[-1])=merge((yyvsp[-1]), (yyvsp[-2]));

          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_member(true);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5413 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1570 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5422 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1578 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);

          if(stack((yyvsp[-1])).is_not_nil())
            make_subtype((yyval), (yyvsp[-1]));

          if(stack((yyvsp[0])).is_not_nil()) // type attribute
            (yyval)=merge((yyvsp[0]), (yyval));
        }
#line 5436 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1588 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_abstract);
        }
#line 5444 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 1592 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          stack_type((yyval)).subtype()=typet(ID_abstract);

          if(stack((yyvsp[0])).is_not_nil()) // type attribute
            (yyval)=merge((yyvsp[0]), (yyval));
        }
#line 5456 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1603 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          if(stack((yyvsp[-1])).is_not_nil())
            make_subtype((yyval), (yyvsp[-1]));
          
          if(stack((yyvsp[0])).is_not_nil()) // type attribute
            (yyval)=merge((yyvsp[0]), (yyval));
        }
#line 5469 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1612 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          stack_type((yyval)).subtype()=typet(ID_abstract);

          if(stack((yyvsp[0])).is_not_nil()) // type attribute
            (yyval)=merge((yyvsp[0]), (yyval));
        }
#line 5481 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 1623 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_nil);
        }
#line 5489 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1631 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          set((yyval), ID_c_bit_field);
          stack_type((yyval)).set(ID_size, stack((yyvsp[0])));
          stack_type((yyval)).subtype().id(ID_abstract);
        }
#line 5500 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1642 "parser.y" /* yacc.c:1646  */
    {
            // an anon enum
          }
#line 5508 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1647 "parser.y" /* yacc.c:1646  */
    {
          stack((yyvsp[-6])).operands().swap(stack((yyvsp[-2])).operands());
          (yyval)=merge((yyvsp[-6]), merge((yyvsp[-5]), (yyvsp[0]))); // throw in the gcc attributes
        }
#line 5517 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1654 "parser.y" /* yacc.c:1646  */
    {
            // an enum with tag
            stack((yyvsp[-2])).set(ID_tag, stack((yyvsp[0])));
          }
#line 5526 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1660 "parser.y" /* yacc.c:1646  */
    {
          stack((yyvsp[-7])).operands().swap(stack((yyvsp[-2])).operands());
          (yyval)=merge((yyvsp[-7]), merge((yyvsp[-6]), (yyvsp[0]))); // throw in the gcc attributes
        }
#line 5535 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1668 "parser.y" /* yacc.c:1646  */
    {
          stack((yyvsp[-3])).id(ID_c_enum_tag); // tag only
          stack((yyvsp[-3])).set(ID_tag, stack((yyvsp[-1])));
          (yyval)=merge((yyvsp[-3]), merge((yyvsp[-2]), (yyvsp[0]))); // throw in the gcc attributes
        }
#line 5545 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1676 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          set((yyval), ID_c_enum);
        }
#line 5554 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1684 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration_list);
        }
#line 5562 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1692 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration_list);
          mto((yyval), (yyvsp[0]));
        }
#line 5571 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1697 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 5580 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 1702 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
        }
#line 5588 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1709 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_enum_constant(true);
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[-2])));
          to_ansi_c_declaration(stack((yyval))).add_initializer(stack((yyvsp[0])));
        }
#line 5599 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1719 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          stack((yyval)).make_nil();
        }
#line 5608 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1724 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
        }
#line 5616 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1732 "parser.y" /* yacc.c:1646  */
    {
          typet tmp(ID_ellipsis);
          (yyval)=(yyvsp[-2]);
          stack_type((yyval)).move_to_subtypes(tmp);
        }
#line 5626 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 1741 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_parameters);
          mts((yyval), (yyvsp[0]));
        }
#line 5635 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1746 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mts((yyval), (yyvsp[0]));
        }
#line 5644 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 1753 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          stack((yyval)).type()=typet(ID_KnR);
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5654 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1762 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_parameters);
          mts((yyval), (yyvsp[0]));
        }
#line 5663 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 1767 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mts((yyval), (yyvsp[0]));
        }
#line 5672 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1775 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[0])));
          exprt declarator=exprt(ID_abstract);
          PARSER.add_declarator(stack((yyval)), declarator);
        }
#line 5684 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 1783 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5695 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 1790 "parser.y" /* yacc.c:1646  */
    {
          (yyvsp[-1])=merge((yyvsp[0]), (yyvsp[-1])); // type attribute to go into declarator
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-2])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[-1])));
        }
#line 5707 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 1798 "parser.y" /* yacc.c:1646  */
    {
          // the second tree is really the declarator -- not part
          // of the type!
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5720 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 1807 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[0])));
          exprt declarator=exprt(ID_abstract);
          PARSER.add_declarator(stack((yyval)), declarator);
        }
#line 5732 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 1815 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5743 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 1822 "parser.y" /* yacc.c:1646  */
    {
          (yyvsp[-1])=merge((yyvsp[0]), (yyvsp[-1])); // type attribute to go into declarator
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-2])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[-1])));
        }
#line 5755 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 1830 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[0])));
          exprt declarator=exprt(ID_abstract);
          PARSER.add_declarator(stack((yyval)), declarator);
        }
#line 5767 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 1838 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5778 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 1845 "parser.y" /* yacc.c:1646  */
    {
          (yyvsp[-1])=merge((yyvsp[0]), (yyvsp[-1])); // type attribute to go into declarator
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-2])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[-1])));
        }
#line 5790 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 1853 "parser.y" /* yacc.c:1646  */
    {
          // the second tree is really the declarator -- not part of the type!
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5802 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 1861 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[0])));
          exprt declarator=exprt(ID_abstract);
          PARSER.add_declarator(stack((yyval)), declarator);
        }
#line 5814 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 1869 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 5825 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 1876 "parser.y" /* yacc.c:1646  */
    {
          (yyvsp[-1])=merge((yyvsp[0]), (yyvsp[-1])); // type attribute to go into declarator
          init((yyval), ID_declaration);
          to_ansi_c_declaration(stack((yyval))).set_is_parameter(true);
          to_ansi_c_declaration(stack((yyval))).type().swap(stack((yyvsp[-2])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[-1])));
        }
#line 5837 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 1892 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[0]), (yyvsp[-1]));
        }
#line 5845 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 1896 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[-2]));
          make_subtype((yyval), (yyvsp[0]));
        }
#line 5854 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 1901 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[0]), (yyvsp[-1]));
        }
#line 5862 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 1905 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[-2]));
          make_subtype((yyval), (yyvsp[0]));
        }
#line 5871 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 1913 "parser.y" /* yacc.c:1646  */
    {
          newstack((yyval));
          stack((yyval)).make_nil();
        }
#line 5880 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 1918 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 5886 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 1929 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          set((yyval), ID_initializer_list);
          stack((yyval)).operands().swap(stack((yyvsp[-1])).operands());
        }
#line 5896 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 1935 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          set((yyval), ID_initializer_list);
          stack((yyval)).operands().swap(stack((yyvsp[-2])).operands());
        }
#line 5906 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 1944 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          exprt tmp;
          tmp.swap(stack((yyval)));
          stack((yyval)).clear();
          stack((yyval)).move_to_operands(tmp);
        }
#line 5918 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 1952 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 5927 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 1961 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          set((yyval), ID_initializer_list);
          stack((yyval)).operands().clear();
        }
#line 5937 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 1971 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          stack((yyval)).id(ID_designated_initializer);
          stack((yyval)).add(ID_designator).swap(stack((yyvsp[-2])));
          mto((yyval), (yyvsp[0]));
        }
#line 5948 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 1979 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_designated_initializer);
          stack((yyval)).add(ID_designator).swap(stack((yyvsp[-1])));
          mto((yyval), (yyvsp[0]));
        }
#line 5958 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 1985 "parser.y" /* yacc.c:1646  */
    {
          // yet another GCC speciality
          (yyval)=(yyvsp[-1]);
          stack((yyval)).id(ID_designated_initializer);
          exprt designator;
          exprt member(ID_member);
          member.set(ID_component_name, stack((yyvsp[-2])).get(ID_C_base_name));
          designator.move_to_operands(member);
          stack((yyval)).add(ID_designator).swap(designator);
          mto((yyval), (yyvsp[0]));
        }
#line 5974 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 2000 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          stack((yyvsp[-1])).id(ID_member);
          stack((yyvsp[-1])).set(ID_component_name, stack((yyvsp[0])).get(ID_C_base_name));
          mto((yyval), (yyvsp[-1]));
        }
#line 5985 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 2007 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          stack((yyvsp[-2])).id(ID_index);
          mto((yyvsp[-2]), (yyvsp[-1]));
          mto((yyval), (yyvsp[-2]));
        }
#line 5996 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 2014 "parser.y" /* yacc.c:1646  */
    {
          // TODO
          init((yyval));
          stack((yyvsp[-4])).id(ID_index);
          mto((yyvsp[-4]), (yyvsp[-3]));
          mto((yyval), (yyvsp[-4]));
        }
#line 6008 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 2022 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          stack((yyvsp[-2])).id(ID_index);
          mto((yyvsp[-2]), (yyvsp[-1]));
          mto((yyval), (yyvsp[-2]));
        }
#line 6019 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 2029 "parser.y" /* yacc.c:1646  */
    {
          // TODO
          (yyval)=(yyvsp[-5]);
          stack((yyvsp[-4])).id(ID_index);
          mto((yyvsp[-4]), (yyvsp[-3]));
          mto((yyval), (yyvsp[-4]));
        }
#line 6031 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 2037 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          stack((yyvsp[-1])).id(ID_member);
          stack((yyvsp[-1])).set(ID_component_name, stack((yyvsp[0])).get(ID_C_base_name));
          mto((yyval), (yyvsp[-1]));
        }
#line 6042 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 2064 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          statement((yyval), ID_decl);
          mto((yyval), (yyvsp[0]));
        }
#line 6052 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 2073 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          statement((yyval), ID_label);
          irep_idt identifier=PARSER.lookup_label(stack((yyvsp[-2])).get(ID_C_base_name));
          stack((yyval)).set(ID_label, identifier);
          mto((yyval), (yyvsp[0]));
        }
#line 6064 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 2081 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          statement((yyval), ID_switch_case);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6075 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 2088 "parser.y" /* yacc.c:1646  */
    {
          // this is a GCC extension
          (yyval)=(yyvsp[-5]);
          statement((yyval), ID_gcc_switch_case_range);
          mto((yyval), (yyvsp[-4]));
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6088 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 2097 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          statement((yyval), ID_switch_case);
          stack((yyval)).operands().push_back(nil_exprt());
          mto((yyval), (yyvsp[0]));
          stack((yyval)).set(ID_default, true);
        }
#line 6100 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 2108 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          statement((yyval), ID_block);
          stack((yyval)).set(ID_C_end_location, stack((yyvsp[0])).source_location());
          PARSER.pop_scope();
        }
#line 6111 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 2115 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          statement((yyval), ID_block);
          stack((yyval)).set(ID_C_end_location, stack((yyvsp[0])).source_location());
          stack((yyval)).operands().swap(stack((yyvsp[-1])).operands());
          PARSER.pop_scope();
        }
#line 6123 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 2123 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          statement((yyval), ID_asm);
          stack((yyval)).set(ID_C_end_location, stack((yyvsp[0])).source_location());
          mto((yyval), (yyvsp[-1]));
          PARSER.pop_scope();
        }
#line 6135 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 2134 "parser.y" /* yacc.c:1646  */
    {
          unsigned prefix=++PARSER.current_scope().compound_counter;
          PARSER.new_scope(i2string(prefix)+"::");
        }
#line 6144 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 2142 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          mto((yyval), (yyvsp[0]));
        }
#line 6153 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 2147 "parser.y" /* yacc.c:1646  */
    {
          mto((yyval), (yyvsp[0]));
        }
#line 6161 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 2154 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);

          if(stack((yyvsp[-1])).is_nil())
            statement((yyval), ID_skip);
          else
          {
            statement((yyval), ID_expression);
            mto((yyval), (yyvsp[-1]));
          }
        }
#line 6177 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 2169 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-4]);
          statement((yyval), ID_ifthenelse);
          stack((yyval)).operands().reserve(3);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
          stack((yyval)).copy_to_operands(nil_exprt());
        }
#line 6190 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 2178 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-6]);
          statement((yyval), ID_ifthenelse);
          stack((yyval)).operands().reserve(3);
          mto((yyval), (yyvsp[-4]));
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6203 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 2187 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-4]);
          statement((yyval), ID_switch);
          stack((yyval)).operands().reserve(2);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6215 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 2203 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-4]);
          statement((yyval), ID_while);
          stack((yyval)).operands().reserve(2);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6227 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 2211 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-6]);
          statement((yyval), ID_dowhile);
          stack((yyval)).operands().reserve(2);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[-5]));
        }
#line 6239 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 2219 "parser.y" /* yacc.c:1646  */
    {
            // In C99 and upwards, for(;;) has a scope
            if(PARSER.for_has_scope)
            {
              unsigned prefix=++PARSER.current_scope().compound_counter;
              PARSER.new_scope(i2string(prefix)+"::");
            }
          }
#line 6252 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 2231 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-8]);
          statement((yyval), ID_for);
          stack((yyval)).operands().reserve(4);
          mto((yyval), (yyvsp[-5]));
          mto((yyval), (yyvsp[-4]));
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));

          if(PARSER.for_has_scope)
            PARSER.pop_scope(); // remove the C99 for-scope
        }
#line 6269 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 2247 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          if(stack((yyvsp[-1])).id()==ID_symbol)
          {
            statement((yyval), ID_goto);
            irep_idt identifier=PARSER.lookup_label(stack((yyvsp[-1])).get(ID_C_base_name));
            stack((yyval)).set(ID_destination, identifier);
          }
          else
          {
            // this is a gcc extension.
            // the original grammar uses identifier_or_typedef_name
            statement((yyval), ID_gcc_computed_goto);
            mto((yyval), (yyvsp[-1]));
          }
        }
#line 6290 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 2264 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          statement((yyval), ID_goto);
          irep_idt identifier=PARSER.lookup_label(stack((yyvsp[-1])).get(ID_C_base_name));
          stack((yyval)).set(ID_destination, identifier);
        }
#line 6301 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 2271 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); statement((yyval), ID_continue); }
#line 6307 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 2273 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); statement((yyval), ID_break); }
#line 6313 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 2275 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); statement((yyval), ID_return); }
#line 6319 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 2277 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-2]); statement((yyval), ID_return); mto((yyval), (yyvsp[-1])); }
#line 6325 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 2282 "parser.y" /* yacc.c:1646  */
    { 
          (yyval)=(yyvsp[-2]);
          statement((yyval), ID_gcc_local_label);
          
          // put these into the scope
          forall_operands(it, stack((yyvsp[-1])))
          {
            // labels have a separate name space
            irep_idt base_name=it->get(ID_identifier);
            irep_idt id="label-"+id2string(base_name);
            ansi_c_parsert::identifiert &i=PARSER.current_scope().name_map[id];
            i.id_class=ANSI_C_LOCAL_LABEL;
            i.base_name=base_name;
          }

          stack((yyval)).add(ID_label).get_sub().swap((irept::subt&)stack((yyvsp[-1])).operands());
        }
#line 6347 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 2303 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          mto((yyval), (yyvsp[0]));
        }
#line 6356 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 2308 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 6365 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 2319 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-5]);
          statement((yyval), ID_asm);
          stack((yyval)).set(ID_flavor, ID_gcc);
          stack((yyval)).operands().swap(stack((yyvsp[-2])).operands());
        }
#line 6375 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 2325 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-4]);
          statement((yyval), ID_asm);
          stack((yyval)).set(ID_flavor, ID_gcc);
          stack((yyval)).operands().resize(5);
          stack((yyval)).op0()=stack((yyvsp[-1]));
        }
#line 6387 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 2336 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-3]);
          statement((yyval), ID_asm);
          stack((yyval)).set(ID_flavor, ID_msc);
          mto((yyval), (yyvsp[-1]));
        }
#line 6397 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 2342 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]);
          statement((yyval), ID_asm);
          stack((yyval)).set(ID_flavor, ID_msc);
          mto((yyval), (yyvsp[0]));
        }
#line 6407 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 2352 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-6]);
          statement((yyval), ID_msc_try_except);
          mto((yyval), (yyvsp[-5]));
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6419 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 2361 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          statement((yyval), ID_msc_try_finally);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6430 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 2368 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          statement((yyval), ID_msc_leave);
        }
#line 6439 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 2376 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          statement((yyval), ID_CPROVER_throw);
        }
#line 6448 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 2382 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          statement((yyval), ID_CPROVER_try_catch);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6459 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 2390 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          statement((yyval), ID_CPROVER_try_finally);
          mto((yyval), (yyvsp[-2]));
          mto((yyval), (yyvsp[0]));
        }
#line 6470 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 2416 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          stack((yyval)).operands().resize(5);
          stack((yyval)).operands()[0]=stack((yyvsp[0]));
        }
#line 6480 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 2422 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          stack((yyval)).operands().resize(5);
          stack((yyval)).operands()[0]=stack((yyvsp[-1]));
          stack((yyval)).operands()[1]=stack((yyvsp[0]));
        }
#line 6491 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 2429 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          stack((yyval)).operands().resize(5);
          stack((yyval)).operands()[0]=stack((yyvsp[-2]));
          stack((yyval)).operands()[1]=stack((yyvsp[-1]));
          stack((yyval)).operands()[2]=stack((yyvsp[0]));
        }
#line 6503 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 2437 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          stack((yyval)).operands().resize(5);
          stack((yyval)).operands()[0]=stack((yyvsp[-3]));
          stack((yyval)).operands()[1]=stack((yyvsp[-2]));
          stack((yyval)).operands()[2]=stack((yyvsp[-1]));
          stack((yyval)).operands()[3]=stack((yyvsp[0]));
        }
#line 6516 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 2446 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          stack((yyval)).operands().resize(5);
          stack((yyval)).operands()[0]=stack((yyvsp[-4]));
          stack((yyval)).operands()[1]=stack((yyvsp[-3]));
          stack((yyval)).operands()[2]=stack((yyvsp[-2]));
          stack((yyval)).operands()[3]=stack((yyvsp[-1]));
          stack((yyval)).operands()[4]=stack((yyvsp[0]));
        }
#line 6530 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 2462 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
        }
#line 6538 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 2470 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          stack((yyval)).id(ID_gcc_asm_output);
          stack((yyval)).move_to_operands(stack((yyvsp[-3])), stack((yyvsp[-1]))); 
        }
#line 6548 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 2477 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          stack((yyval)).id(ID_gcc_asm_output);
          stack((yyval)).move_to_operands(stack((yyvsp[-3])), stack((yyvsp[-1]))); 
        }
#line 6558 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 2486 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), irep_idt());
          mto((yyval), (yyvsp[0]));
        }
#line 6567 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 2491 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 6576 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 2499 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
        }
#line 6584 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 2507 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          stack((yyval)).id(ID_gcc_asm_input);
          stack((yyval)).move_to_operands(stack((yyvsp[-3])), stack((yyvsp[-1]))); 
        }
#line 6594 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 2514 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          stack((yyval)).id(ID_gcc_asm_input);
          stack((yyval)).move_to_operands(stack((yyvsp[-3])), stack((yyvsp[-1]))); 
        }
#line 6604 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 2523 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), irep_idt());
          mto((yyval), (yyvsp[0]));
        }
#line 6613 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 2528 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 6622 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 2536 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
        }
#line 6630 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 2544 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_gcc_asm_clobbered_register);
          mto((yyval), (yyvsp[0]));
        }
#line 6639 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 2552 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), irep_idt());
          mto((yyval), (yyvsp[0]));
        }
#line 6648 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 2557 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 6657 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 2565 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
        }
#line 6665 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 2573 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
          mto((yyval), (yyvsp[0]));
        }
#line 6674 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 2578 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          mto((yyval), (yyvsp[0]));
        }
#line 6683 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 2586 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          irep_idt identifier=PARSER.lookup_label(stack((yyval)).get(ID_C_base_name));
          stack((yyval)).id(ID_label);
          stack((yyval)).set(ID_identifier, identifier);
        }
#line 6694 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 2605 "parser.y" /* yacc.c:1646  */
    {
          // put into global list of items
          PARSER.copy_item(to_ansi_c_declaration(stack((yyvsp[0]))));
        }
#line 6703 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 2610 "parser.y" /* yacc.c:1646  */
    {
          PARSER.copy_item(to_ansi_c_declaration(stack((yyvsp[0]))));
        }
#line 6711 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 2619 "parser.y" /* yacc.c:1646  */
    {
          // Not obvious what to do with this.
        }
#line 6719 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 2627 "parser.y" /* yacc.c:1646  */
    {
          // The head is a declaration with one declarator,
          // and the body becomes the 'value'.
          (yyval)=(yyvsp[-1]);
          ansi_c_declarationt &ansi_c_declaration=
            to_ansi_c_declaration(stack((yyval)));
            
          assert(ansi_c_declaration.declarators().size()==1);
          ansi_c_declaration.add_initializer(stack((yyvsp[0])));
          
          // Kill the scope that 'function_head' creates.
          PARSER.pop_scope();
          
          // We are no longer in any function.
          PARSER.set_function(irep_idt());
        }
#line 6740 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 2651 "parser.y" /* yacc.c:1646  */
    {
          init((yyval));
        }
#line 6748 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 2659 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_decl_block);
          mto((yyval), (yyvsp[0]));
        }
#line 6757 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 2664 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          mto((yyval), (yyvsp[0]));
        }
#line 6766 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 2678 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[0]), (yyvsp[-1]));
        }
#line 6774 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 2682 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[0]), (yyvsp[-1]));
        }
#line 6782 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 2689 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 6790 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 2693 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 6798 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 2697 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 6806 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 2701 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 6814 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 2709 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 6822 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 2713 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 6830 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 2717 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-2]), merge((yyvsp[-1]), (yyvsp[0])));
        }
#line 6838 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 2725 "parser.y" /* yacc.c:1646  */
    {
          stack((yyvsp[-2])).set(ID_tag, stack((yyvsp[-1])));
          (yyval)=merge((yyvsp[-3]), merge((yyvsp[-2]), (yyvsp[0])));
        }
#line 6847 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 2730 "parser.y" /* yacc.c:1646  */
    {
          stack((yyvsp[-2])).id(ID_c_enum_tag);
          stack((yyvsp[-2])).set(ID_tag, stack((yyvsp[-1])));
          (yyval)=merge((yyvsp[-3]), merge((yyvsp[-2]), (yyvsp[0])));
        }
#line 6857 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 2746 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 6867 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 2752 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 6877 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 2758 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
        }
#line 6886 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 2766 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          irept return_type(ID_int);
          stack((yyval)).type().swap(return_type);
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
          create_function_scope((yyval));
        }
#line 6898 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 2774 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
          create_function_scope((yyval));
        }
#line 6909 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 2781 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
          create_function_scope((yyval));
        }
#line 6920 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 2788 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
          create_function_scope((yyval));
        }
#line 6931 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 2795 "parser.y" /* yacc.c:1646  */
    {
          init((yyval), ID_declaration);
          stack((yyval)).type().swap(stack((yyvsp[-1])));
          PARSER.add_declarator(stack((yyval)), stack((yyvsp[0])));
          create_function_scope((yyval));
        }
#line 6942 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 2816 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 6951 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 2826 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          do_pointer((yyvsp[-1]), (yyvsp[0]));
        }
#line 6960 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 2831 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
          do_pointer((yyvsp[-2]), (yyvsp[-1]));
        }
#line 6969 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 2839 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 6975 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 2841 "parser.y" /* yacc.c:1646  */
    {
          /* note: this is a pointer ($2) to a function ($4) */
          /* or an array ($4)! */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 6986 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 2852 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          do_pointer((yyvsp[-3]), (yyvsp[-1]));
        }
#line 6995 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 2857 "parser.y" /* yacc.c:1646  */
    {
          // not sure where the type qualifiers belong
          (yyval)=merge((yyvsp[-3]), (yyvsp[-1]));
          do_pointer((yyvsp[-4]), (yyvsp[-3]));
        }
#line 7005 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 2863 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          do_pointer((yyvsp[-1]), (yyvsp[0]));
        }
#line 7014 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 2868 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=merge((yyvsp[-1]), (yyvsp[0]));
          do_pointer((yyvsp[-2]), (yyvsp[-1]));
        }
#line 7023 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 2876 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 7029 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 2878 "parser.y" /* yacc.c:1646  */
    {        /* note: this is a function ($3) with a typedef name ($2) */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[-1]));
        }
#line 7038 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 2883 "parser.y" /* yacc.c:1646  */
    {
          /* note: this is a pointer ($2) to a function ($4) */
          /* or an array ($4)! */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 7049 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 2894 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); }
#line 7055 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 2905 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          do_pointer((yyvsp[-1]), (yyvsp[0]));
        }
#line 7064 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 537:
#line 2910 "parser.y" /* yacc.c:1646  */
    {
          // the type_qualifier_list is for the pointer,
          // and not the identifier_declarator
          stack_type((yyvsp[-2])).id(ID_pointer);
          stack_type((yyvsp[-2])).subtype()=typet(ID_abstract);
          (yyvsp[-1])=merge((yyvsp[-1]), (yyvsp[-2])); // dest=$2
          make_subtype((yyvsp[0]), (yyvsp[-1])); // dest=$3
          (yyval)=(yyvsp[0]);
        }
#line 7078 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 2923 "parser.y" /* yacc.c:1646  */
    {
          /* note: this is a function or array ($2) with name ($1) */
          (yyval)=(yyvsp[-1]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 7088 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 2929 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 7094 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 2931 "parser.y" /* yacc.c:1646  */
    {
          /* note: this is a pointer ($2) to a function ($4) */
          /* or an array ($4)! */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 7105 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 2941 "parser.y" /* yacc.c:1646  */
    {
          // We remember the last declarator for the benefit
          // of function argument scoping.
          PARSER.current_scope().last_declarator=
            stack((yyvsp[0])).get(ID_identifier);
        }
#line 7116 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 2948 "parser.y" /* yacc.c:1646  */
    { (yyval)=(yyvsp[-1]); }
#line 7122 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 2968 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          set((yyval), ID_code);
          stack_type((yyval)).subtype()=typet(ID_abstract);
          stack_type((yyval)).add(ID_parameters);
          stack_type((yyval)).set(ID_C_KnR, true);
        }
#line 7134 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 2976 "parser.y" /* yacc.c:1646  */
    {
            // Use last declarator (i.e., function name) to name
            // the scope.
            PARSER.new_scope(
              id2string(PARSER.current_scope().last_declarator)+"::");
          }
#line 7145 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 2985 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-4]);
          set((yyval), ID_code);
          stack_type((yyval)).subtype()=typet(ID_abstract);
          stack_type((yyval)).add(ID_parameters).get_sub().
            swap((irept::subt &)(stack_type((yyvsp[-2])).subtypes()));
          PARSER.pop_scope();
          adjust_KnR_parameters(stack((yyval)).add(ID_parameters), stack((yyvsp[0])));
          stack((yyval)).set(ID_C_KnR, true);
        }
#line 7160 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 553:
#line 3000 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          set((yyval), ID_code);
          stack_type((yyval)).add(ID_parameters);
          stack_type((yyval)).subtype()=typet(ID_abstract);
        }
#line 7171 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 554:
#line 3007 "parser.y" /* yacc.c:1646  */
    {
            // Use last declarator (i.e., function name) to name
            // the scope.
            PARSER.new_scope(
              id2string(PARSER.current_scope().last_declarator)+"::");
          }
#line 7182 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 555:
#line 3015 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-3]);
          set((yyval), ID_code);
          stack_type((yyval)).subtype()=typet(ID_abstract);
          stack_type((yyval)).add(ID_parameters).get_sub().
            swap((irept::subt &)(stack_type((yyvsp[-1])).subtypes()));
          PARSER.pop_scope();
        }
#line 7195 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 556:
#line 3027 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-1]);
          set((yyval), ID_array);
          stack_type((yyval)).subtype()=typet(ID_abstract);
          stack_type((yyval)).add(ID_size).make_nil();
        }
#line 7206 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 557:
#line 3034 "parser.y" /* yacc.c:1646  */
    {
          // this is C99: e.g., restrict, const, etc
          // The type qualifier belongs to the array, not the
          // contents of the array, nor the size.
          set((yyvsp[-2]), ID_array);
          stack_type((yyvsp[-2])).subtype()=typet(ID_abstract);
          stack_type((yyvsp[-2])).add(ID_size).make_nil();
          (yyval)=merge((yyvsp[-1]), (yyvsp[-2]));
        }
#line 7220 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 558:
#line 3044 "parser.y" /* yacc.c:1646  */
    {
          // these should be allowed in prototypes only
          (yyval)=(yyvsp[-2]);
          set((yyval), ID_array);
          stack_type((yyval)).subtype()=typet(ID_abstract);
          stack_type((yyval)).add(ID_size).make_nil();
        }
#line 7232 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 559:
#line 3052 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[-2]);
          set((yyval), ID_array);
          stack_type((yyval)).add(ID_size).swap(stack((yyvsp[-1])));
          stack_type((yyval)).subtype()=typet(ID_abstract);
        }
#line 7243 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 560:
#line 3059 "parser.y" /* yacc.c:1646  */
    {
          // The type qualifier belongs to the array, not the
          // contents of the array, nor the size.
          set((yyvsp[-3]), ID_array);
          stack_type((yyvsp[-3])).add(ID_size).swap(stack((yyvsp[-1])));
          stack_type((yyvsp[-3])).subtype()=typet(ID_abstract);
          (yyval)=merge((yyvsp[-2]), (yyvsp[-3])); // dest=$2
        }
#line 7256 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 561:
#line 3068 "parser.y" /* yacc.c:1646  */
    {
          // we need to push this down
          (yyval)=(yyvsp[-3]);
          set((yyvsp[-2]), ID_array);
          stack_type((yyvsp[-2])).add(ID_size).swap(stack((yyvsp[-1])));
          stack_type((yyvsp[-2])).subtype()=typet(ID_abstract);
          make_subtype((yyvsp[-3]), (yyvsp[-2]));
        }
#line 7269 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 562:
#line 3077 "parser.y" /* yacc.c:1646  */
    {
          // these should be allowed in prototypes only
          // we need to push this down
          (yyval)=(yyvsp[-3]);
          set((yyvsp[-2]), ID_array);
          stack_type((yyvsp[-2])).add(ID_size).make_nil();
          stack_type((yyvsp[-2])).subtype()=typet(ID_abstract);
          make_subtype((yyvsp[-3]), (yyvsp[-2]));
        }
#line 7283 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 563:
#line 3090 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          set((yyval), ID_pointer);
          stack_type((yyval)).subtype()=typet(ID_abstract);
        }
#line 7293 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 564:
#line 3096 "parser.y" /* yacc.c:1646  */
    {
          // The type_qualifier_list belongs to the pointer,
          // not to the (missing) abstract declarator.
          set((yyvsp[-1]), ID_pointer);
          stack_type((yyvsp[-1])).subtype()=typet(ID_abstract);
          (yyval)=merge((yyvsp[0]), (yyvsp[-1]));
        }
#line 7305 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 565:
#line 3104 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          do_pointer((yyvsp[-1]), (yyvsp[0]));
        }
#line 7314 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 566:
#line 3109 "parser.y" /* yacc.c:1646  */
    {
          // The type_qualifier_list belongs to the pointer,
          // not to the abstract declarator.
          stack_type((yyvsp[-2])).id(ID_pointer);
          stack_type((yyvsp[-2])).subtype()=typet(ID_abstract);
          (yyvsp[-1])=merge((yyvsp[-1]), (yyvsp[-2])); // dest=$2
          make_subtype((yyvsp[0]), (yyvsp[-1])); // dest=$3
          (yyval)=(yyvsp[0]);
        }
#line 7328 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 567:
#line 3119 "parser.y" /* yacc.c:1646  */
    {
          // This is an Apple extension to C/C++/Objective C.
          // http://en.wikipedia.org/wiki/Blocks_(C_language_extension)
          (yyval)=(yyvsp[0]);
          set((yyval), ID_block_pointer);
          stack_type((yyval)).subtype()=typet(ID_abstract);
        }
#line 7340 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 568:
#line 3130 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          set((yyval), ID_pointer);
          stack_type((yyval)).subtype()=typet(ID_abstract);
        }
#line 7350 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 569:
#line 3136 "parser.y" /* yacc.c:1646  */
    {
          // The type_qualifier_list belongs to the pointer,
          // not to the (missing) abstract declarator.
          set((yyvsp[-1]), ID_pointer);
          stack_type((yyvsp[-1])).subtype()=typet(ID_abstract);
          (yyval)=merge((yyvsp[0]), (yyvsp[-1]));
        }
#line 7362 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 570:
#line 3144 "parser.y" /* yacc.c:1646  */
    {
          (yyval)=(yyvsp[0]);
          do_pointer((yyvsp[-1]), (yyvsp[0]));
        }
#line 7371 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 571:
#line 3149 "parser.y" /* yacc.c:1646  */
    {
          // The type_qualifier_list belongs to the pointer,
          // not to the (missing) abstract declarator.
          stack((yyvsp[-2])).id(ID_pointer);
          stack_type((yyvsp[-2])).subtype()=typet(ID_abstract);
          (yyvsp[-1])=merge((yyvsp[-1]), (yyvsp[-2])); // dest=$2
          make_subtype((yyvsp[0]), (yyvsp[-1])); // dest=$3
          (yyval)=(yyvsp[0]);
        }
#line 7385 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 572:
#line 3159 "parser.y" /* yacc.c:1646  */
    {
          // This is an Apple extension to C/C++/Objective C.
          // http://en.wikipedia.org/wiki/Blocks_(C_language_extension)
          (yyval)=(yyvsp[0]);
          set((yyval), ID_block_pointer);
          stack_type((yyval)).subtype()=typet(ID_abstract);
        }
#line 7397 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 573:
#line 3170 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 7403 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 574:
#line 3172 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 7409 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 575:
#line 3174 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 7415 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 576:
#line 3176 "parser.y" /* yacc.c:1646  */
    {
          /* note: this is a pointer ($2) to a function or array ($4) */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 7425 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 577:
#line 3182 "parser.y" /* yacc.c:1646  */
    {
          /* note: this is a pointer ($2) to a function or array ($4) */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 7435 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 578:
#line 3191 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 7441 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 579:
#line 3193 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 7447 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;

  case 581:
#line 3196 "parser.y" /* yacc.c:1646  */
    {
          /* note: this is a pointer ($2) to a function ($4) */
          (yyval)=(yyvsp[-2]);
          make_subtype((yyval), (yyvsp[0]));
        }
#line 7457 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
    break;


#line 7461 "ansi_c_y.tab.cpp" /* yacc.c:1646  */
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
#line 3203 "parser.y" /* yacc.c:1906  */

