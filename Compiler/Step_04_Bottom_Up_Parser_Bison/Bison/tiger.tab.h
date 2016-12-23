typedef union
{
	union
	{
		int							row;
		int							ival;
		float						fval;
		string						sval;
		AST_RowOp					RowOp;
		AST_Number					Number;
		AST_RowOpList				RowOpList;
		AST_Ri_Swap_Rj				Ri_Swap_Rj;
		AST_Ri_Equals_cRi			Ri_Equals_cRi;
		AST_Ri_Equals_Ri_Plus_cRj	Ri_Equals_Ri_Plus_cRj;
	}
	gval;
} YYSTYPE;
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
#define	DOUBLE_ARROW	300
#define	ROW	301
#define	TYPE	302


extern YYSTYPE yylval;