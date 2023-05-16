CC = gcc
CFLAG = -Wall -Werror -Wextra


build : main.o core.o
	$(CC) $(CFLAG) main.o core.o -o file
main.o: main.c core.h
	$(CC) $(CFLAG) -c main.c	
core.o: core.c core.h
	$(CC) $(CFLAG) -c core.c
clean:
	rm -rf *.o
	rm -rf file			
	