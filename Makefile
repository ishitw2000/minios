CC = gcc
CFLAGS = -Wall
OBJ = main.o shell.o commands/ls.o commands/cd.o commands/mkdir.o

all: miniOS

miniOS: $(OBJ)
	$(CC) $(CFLAGS) -o miniOS $(OBJ)

clean:
	rm -f miniOS $(OBJ)