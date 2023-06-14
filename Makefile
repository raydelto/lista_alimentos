SRC = Elemento.cpp\
	  Lista.cpp

OBJ = Elemento.o\
	  Lista.o

VER = c++11
all:
	clang++ -c ${SRC} -std=${VER}
	clang++ main.cpp ${OBJ} -o main