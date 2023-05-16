CC = gcc
CFLAG = -Wall -Werror -Wextra

strlen: s21_test.o s21.o
	$(CC) $(CFLAG) -D STRLEN s21_test.o s21.o -o strlen
s21_test.o: s21_test.c s21.h
	$(CC) $(CFLAG) -D STRLEN -c s21_test.c
s21.o: s21.c s21.h
	$(CC) $(CFLAG) -D STRLEN -c s21.c

strcmp:
	$(CC) $(CFLAG) -D STRCMP s21_test.c s21.c -o strcmp

clean:
	rm -rf *.o
	rm -rf string_test		
