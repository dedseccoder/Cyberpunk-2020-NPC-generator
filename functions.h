#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"time.h"

void stats(int*);
void skills(int, int, char*);
void implants();
void weapon();
void armor();

void clear_screen();

struct character
{
	char sex [100];
	char name [100];
	char role [100];
	int boss;
   
	int stats[9];
	struct weapon; 
	struct armor;
};

struct skillSet
{
	char names[10][100];
	int stats[10];
};

struct weapon
{
	char name [100];
	char calibr [20];
	char damage [20];
	int ROF;
	int magazin;
};

struct armor
{
	char name [100];
	int SP;
};

struct cybernatic
{
	char name [100];
	int bonus;
};

