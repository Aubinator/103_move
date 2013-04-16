CC = cc
SRC = *.c
Name = 103move

all:
	$(CC) -o $(Name)  $(SRC) -lm -W -Wall

clean:
	rm -f $(Name) *~ 