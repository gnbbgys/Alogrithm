HEADERS = util.h movesubarray.h

default: main

util : util.c util.h
    gcc -c util.c -o util.o

movesubarray : movesubarray.c movesubarray.h
    gcc -c movesubarray.c -o movesubarray.o

main.o: main.c util.o movesubarray.o $(HEADERS)
    gcc -c main.c -o main.o

main.o: main.o 
    gcc main.c -o main

clean:
    -rm -f *.o
    -rm -f main
