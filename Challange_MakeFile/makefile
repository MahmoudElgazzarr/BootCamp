sum.exe: main.o func1.o func2.o main.o
	gcc -o sum.exe main.o func1.o func2.o
	
main.o: func1.h func2.h main.c
	gcc -c main.c
	
func2.o: func2.h func2.c
	gcc -c func2.c
	
func1.o: func1.h func1.c
	gcc -c func1.c