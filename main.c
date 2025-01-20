#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"time.h"
#include"functions.h"

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

