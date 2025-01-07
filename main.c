#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"time.h"

void clear_screen();
void stats(int*);
void skills(char*, int);
void implants();
void weapon();
void armor();

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

int main()
{
	struct character NPC;
	int roleID, sexID, bossID;
	char roles[10][40] = {"Rockerboy", "Solo", "Netrunner", "Techie", "Medtech", "Media", "Corporate", "Cop", "Fixer", "Nomad"};
	for(int i = 0; i < 10; i++)
	{
		printf("%d.%s\n", i+1, roles[i]);
	}
	printf("11.Random\n");
	printf("Choose your NPC role: "); 
	scanf("%d", &roleID);
	if(roleID == 11) 
	{
		srand(time(0));
		roleID = rand() % (10 + 1 - 1) + 1;
	}
	strcpy(NPC.role, roles[roleID - 1]);
	clear_screen();
	printf("You got %s\n", NPC.role);
	printf("\n");
	
	char sex[3][20] = {"Male", "Female", "Diffrent"};
	for(int i = 0; i < 3; i++)
	{
		printf("%d.%s\n", i+1, sex[i]);
	}
	printf("4.Random (male or female)\n");
	printf("Set your NPC sex: ");
	scanf("%d", &sexID);
	if(sexID == 4) 
	{
		srand(time(0));
		sexID = rand() % (2 + 1 - 1) + 1;
	}
	strcpy(NPC.sex, sex[sexID - 1]);
	clear_screen();
	printf("You got %s\n", NPC.sex);

	printf("\n");
	printf("Is your NPC advanced booster?\n");
	printf("1.Yes\n2.No\n3.Random\n");
	printf("Set: ");
	scanf("%d", &bossID);
	if(bossID == 3) 
	{
		srand(time(0));
		bossID = rand() % (2 + 1 - 1) + 1;
	}
	printf("\n");

	stats(NPC.stats);
	
	return 0;
}

void clear_screen()
{
#ifdef WINDOWS
    system("cls");
#else
    // Assume POSIX
    system ("clear");
#endif
}

void stats(int* statsArr)
{
	srand(time(0));
	for(int i = 0; i < 9; i++)
	{
		statsArr[i] = rand() % (10 + 1 - 2) + 2;
	}
}
