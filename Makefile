CC=gcc

all: objects
	$(CC) *.o -o bin/NPCGenerator2020

debug: main.c functions.c functions.h
	$(CC) $^ -g -o bin/NPCGenerator2020-debug

objects: main.c functions.c functions.h 
	$(CC) $^ -c

clean:
	$(RM) -v bin/NPCGenerator2020
	$(RM) -v bin/NPCGenerator2020-debug
	$(RM) -v *.o
	$(RM) -v *.gch
