# bin2dec Makefile
# by Muhammed Husaam
# to make binary:
# $ make
# to remove binary
# $ make clean

# the C compiler
CC=cc

bin2dec:
	$(CC) bin2dec.c -o bin2dec
clean:
	rm bin2dec
