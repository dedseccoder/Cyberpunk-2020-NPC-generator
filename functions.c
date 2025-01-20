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

void clear_screen()
{
#ifdef WINDOWS
    system("cls");
#else
    // Assume POSIX
    system ("clear");
#endif
}
