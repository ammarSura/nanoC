test:
	flex --debug lexer.l
	yacc -dtv parser.y
	g++ -c lex.yy.c
	g++ -c y.tab.c
	g++ -v lex.yy.o y.tab.o -ll
	./a.out < test.nc
