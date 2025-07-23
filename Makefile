## Name : Gopal Ji (22CS10026)
##        : Aditya Jhajria (22CS30006)
##
## make : To compile the files and generate output files
## make clean : Clean all the compiler-generated files
## make clean_all : Clean all compiler-generated files along with the generated output.
#####################################-----Compiler Assignment 5------#########################################


all: a.out
	
	./a.out < testFiles/tinyC_22CS10026_22CS30006_test1.c > outputFiles/tinyC_22CS10026_22CS30006_quads1.out
	@echo "Test File 1 Successfully Translated !\n"
	./a.out < testFiles/tinyC_22CS10026_22CS30006_test2.c > outputFiles/tinyC_22CS10026_22CS30006_quads2.out
	@echo "Test File 2 Successfully Translated !\n"
	./a.out < testFiles/tinyC_22CS10026_22CS30006_test3.c > outputFiles/tinyC_22CS10026_22CS30006_quads3.out
	@echo "Test File 3 Successfully Translated !\n"
	./a.out < testFiles/tinyC_22CS10026_22CS30006_test4.c > outputFiles/tinyC_22CS10026_22CS30006_quads4.out
	@echo "Test File 4 Successfully Translated !\n"
	./a.out < testFiles/tinyC_22CS10026_22CS30006_test5.c > outputFiles/tinyC_22CS10026_22CS30006_quads5.out
	@echo "Test File 5 Successfully Translated !\n"

	@echo "\nALL TEST FILES SUCCESSFULLY TRANSLATED !!\n"

a.out: lex.yy.o y.tab.o tinyC_22CS10026_22CS30006_translator.o
	g++ -std=c++11 lex.yy.o y.tab.o tinyC_22CS10026_22CS30006_translator.o -lfl 2>> Warnings.txt

tinyC_22CS10026_22CS30006_translator.o: tinyC_22CS10026_22CS30006_translator.cxx tinyC_22CS10026_22CS30006_translator.h
	g++ -std=c++11 -c tinyC_22CS10026_22CS30006_translator.h 2>> Warnings.txt
	g++ -std=c++11 -c tinyC_22CS10026_22CS30006_translator.cxx 2>> Warnings.txt

lex.yy.o: lex.yy.c
	g++ -std=c++11 -c lex.yy.c

y.tab.o: y.tab.c
	g++ -std=c++11 -c y.tab.c

lex.yy.c: tinyC_22CS10026_22CS30006.l y.tab.h tinyC_22CS10026_22CS30006_translator.h
	flex tinyC_22CS10026_22CS30006.l

y.tab.c: tinyC_22CS10026_22CS30006.y
	yacc -dtv tinyC_22CS10026_22CS30006.y 2>> Warnings.txt

y.tab.h: tinyC_22CS10026_22CS30006.y
	yacc -dtv tinyC_22CS10026_22CS30006.y 2>> Warnings.txt

clean_all:
	rm lex.yy.c y.tab.c y.tab.h lex.yy.o y.tab.o tinyC_22CS10026_22CS30006_translator.o y.output a.out tinyC_22CS10026_22CS30006_translator.h.gch ./outputFiles/* Warnings.txt

clean:
	rm lex.yy.c y.tab.c y.tab.h lex.yy.o y.tab.o tinyC_22CS10026_22CS30006_translator.o y.output a.out tinyC_22CS10026_22CS30006_translator.h.gch Warnings.txt
