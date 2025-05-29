#include"functions.h"
#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"time.h"

void stats(int* statsArr)
{
	srand(time(0));
	for(int i = 0; i < 9; i++)
	{
		statsArr[i] = rand() % (10 + 1 - 2) + 2;
	}
}

void skills(int role, int boss, struct skillSet* setup)
{
	int score = 40;
	if(role == 1) //Rockerboy
	{
		setup->names[0] = "Харизматическое Лидерство (спец)";
		setup->names[1] = "Осведомлённость/Наблюдательность";
		setup->names[2] = "Выступление"; 
		setup->names[3] = "Гардероб и Стиль";
		setup->names[4] = "Сочинение";
		setup->names[5] = "Драка";
		setup->names[6] = "Игра на инструментах";
		setup->names[7] = "Знание улиц";
		setup->names[8] = "Убеждение и забалтывание";
		ssetup->name[9] = "Соблазнение";
	}

	srand(time(0));
	for(int i = 0; i < 10; i++)
	{
		int randScore;
		do
		{
			randScore = rand() % (10 + 1 - 2) + 2;
		}
		while(randScore <= score);

		setup->stats[i] = randScore;
		score -= randScore;
	}

	if(boss == 1)
	{
		int extraScore = rand() % (20 + 1 - 2) + 2;

		int randScore;
		for(int i = 0; i < 5; i++)
		{
			int skillId = rand() % (8 + 1 - 0) + 0;
			do
			{
				randScore = rand() % (10 + 1 - 2) + 2;
			}
			while(randScore <= extraScore);
			setup->stats[skillId] += randScore;
			extraScore -= randScore;
		}
	}
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
