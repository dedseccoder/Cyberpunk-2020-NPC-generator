#include"stdio.h"

struct character
{
    char sex [100];
    char name [100];
    char role [100];
    
    int intelligence;
    int reflex;
    int tech;
    int cool;
    int sexuality;
    int luck;
    int move;
    int body;
    int empathy;

};


void stats();
void skills();
void implants();
void weapon();
void armor();

int main()
{
    int role, sex, boss;
    printf("1.Rockerboy\n2.Solo\n3.Netrunner\n4.Techie\n5.Medtech\n6.Media\n7.Corporate\n8.Cop\n9.Fizer\n10.Nomad\n11.Random\n");   
    printf("Choose your NPC role: "); 
    scanf("%d", &role);
    printf("\n");
    printf("1.Male\n2.Female\n3.Diffrent\n4.Random (male or female)\n");
    printf("Set your NPC sex: ");
    scanf("%d", &sex);
    printf("\n");
    printf("Is your NPC advanced booster?\n");
    printf("1.Yes\n2.No\n3.Random\n");
    printf("Set: ");
    scanf("%d", &boss);
    printf("\n");

    role == 1 && sex == 2 ? printf("works fine\n") : printf("not working fine\n");

    return 0;
}

