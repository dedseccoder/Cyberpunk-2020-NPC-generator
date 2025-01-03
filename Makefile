CC=gcc

all: objects
	$(CC) *.o -o bin/NPCGenerator2020

debug: main.c
	$(CC) $^ -o bin/NPCGenerator2020-debug

objects: main.c
	$(CC) $^ -c

clean:
	$(RM) -v bin/NPCGenerator2020
	$(RM) -v bin/NPCGenerator2020-debug
	$(RM) -v *.o