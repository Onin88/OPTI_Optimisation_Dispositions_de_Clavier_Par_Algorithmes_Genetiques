prog: main.c structure.o
	gcc main.c structure.o -o main

structure.o: structure.c 
	gcc -c structure.c -o structure.o
clean:
	rm -f main
	rm -f structure.o