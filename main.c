#include"stdio.h"
#include"stdlib.h"
#include"time.h"

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

void stats(int*);
void skills(char*, int);
void implants();
void weapon();
void armor();

int main()
{
	struct character NPC;
	int role, sex, boss;
	char roles[10][40] = {"Rockerboy", "Solo", "Netrunner", "Techie", "Medtech", "Media", "Corporate", "Cop", "Fixer", "Nomad"};
	for(int i = 0; i < 10; i++)
	{
		printf("%d.%s\n", i+1, roles[i]);
	}
	printf("11.Random\n");
	printf("Choose your NPC role: "); 
	scanf("%d", &role);
	if(role == 11) 
	{
		srand(time(0));
		role = rand() % (10 + 1 - 1) + 1;
	}
	printf("\n");
	printf("1.Male\n2.Female\n3.Diffrent\n4.Random (male or female)\n");
	printf("Set your NPC sex: ");
	scanf("%d", &sex);
	if(sex == 4) 
	{
		srand(time(0));
		sex = rand() % (2 + 1 - 1) + 1;
	}
	printf("\n");
	printf("Is your NPC advanced booster?\n");
	printf("1.Yes\n2.No\n3.Random\n");
	printf("Set: ");
	scanf("%d", &boss);
	if(boss == 3) 
	{
		srand(time(0));
		boss = rand() % (2 + 1 - 1) + 1;
	}
	printf("\n");

	stats(NPC.stats);
	
	return 0;
}

void stats(int* statsArr)
{
	srand(time(0));
	for(int i = 0; i < 9; i++)
	{
		statsArr[i] = rand() % (10 + 1 - 2) + 2;
	}
}
