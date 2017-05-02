#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include <ctype.h>
#include <iostream>
#include <cstdio>
#define SIZE 10

void ris(int step)
{
	switch (step)
	{
	case 0:
	{
		printf("\n\t**********************");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t**********************");
		break;
	}
	case 1:
	{

		printf("\n\t**********************");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t  -----------------   ");
		printf("\n\t  |               |   ");
		printf("\n\t                      ");
		printf("\n\t**********************");
		break;
	}
	case 2:
	{
		printf("\n\t**********************");
		printf("\n\t                      ");
		printf("\n\t                      ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  -----------------   ");
		printf("\n\t  |               |   ");
		printf("\n\t                      ");
		printf("\n\t**********************");
		break;
	}
	case 3:
	{
		printf("\n\t**********************");
		printf("\n\t                      ");
		printf("\n\t  -----------         ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  -----------------   ");
		printf("\n\t  |               |   ");
		printf("\n\t                      ");
		printf("\n\t**********************");
		break;
	}
	case 4:
	{
		printf("\n\t**********************");
		printf("\n\t                      ");
		printf("\n\t  -----------         ");
		printf("\n\t  |         |         ");
		printf("\n\t  |         |         ");
		printf("\n\t  |         -         ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  |       _____       ");
		printf("\n\t  |       |   |       ");
		printf("\n\t  -----------------   ");
		printf("\n\t  |               |   ");
		printf("\n\t                      ");
		printf("\n\t**********************");
		break;
	}
	case 5:
	{
		printf("\n\t**********************");
		printf("\n\t                      ");
		printf("\n\t  -----------         ");
		printf("\n\t  |         |         ");
		printf("\n\t  |         |         ");
		printf("\n\t  |         -         ");
		printf("\n\t  |        (o)        ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  |       _____       ");
		printf("\n\t  |       |   |       ");
		printf("\n\t  -----------------   ");
		printf("\n\t  |               |   ");
		printf("\n\t                      ");
		printf("\n\t**********************");
		break;
	}
	case 6:
	{
		printf("\n\t**********************");
		printf("\n\t                      ");
		printf("\n\t  -----------         ");
		printf("\n\t  |         |         ");
		printf("\n\t  |         |         ");
		printf("\n\t  |         -         ");
		printf("\n\t  |        (o)        ");
		printf("\n\t  |         0         ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  |       _____       ");
		printf("\n\t  |       |   |       ");
		printf("\n\t  -----------------   ");
		printf("\n\t  |               |   ");
		printf("\n\t                      ");
		printf("\n\t**********************");
		break;
	}
	case 7:
	{
		printf("\n\t**********************");
		printf("\n\t                      ");
		printf("\n\t  -----------         ");
		printf("\n\t  |         |         ");
		printf("\n\t  |         |         ");
		printf("\n\t  |         -         ");
		printf("\n\t  |        (o)        ");
		printf("\n\t  |        /0\\       ");
		printf("\n\t  |                   ");
		printf("\n\t  |                   ");
		printf("\n\t  |       _____       ");
		printf("\n\t  |       |   |       ");
		printf("\n\t  -----------------   ");
		printf("\n\t  |               |   ");
		printf("\n\t                      ");
		printf("\n\t**********************");
		break;
	}
	case 8:
	{
		printf("\n\t**********************");
		printf("\n\t                      ");
		printf("\n\t  -----------         ");
		printf("\n\t  |         |         ");
		printf("\n\t  |         |         ");
		printf("\n\t  |         -         ");
		printf("\n\t  |        (o)        ");
		printf("\n\t  |        /0\\       ");
		printf("\n\t  |        / \\       ");
		printf("\n\t  |                   ");
		printf("\n\t  |       _____       ");
		printf("\n\t  |       |   |       ");
		printf("\n\t  -----------------   ");
		printf("\n\t  |               |   ");
		printf("\n\t                      ");
		printf("\n\t**********************");
		break;
	}
	case 9:
	{
		printf("\n\t**********************");
		printf("\n\t                      ");
		printf("\n\t  -----------         ");
		printf("\n\t  |         |         ");
		printf("\n\t  |         |         ");
		printf("\n\t  |         -         ");
		printf("\n\t  |        (X)        ");
		printf("\n\t  |        /0\\       ");
		printf("\n\t  |        / \\       ");
		printf("\n\t  |                   ");
		printf("\n\t  |       _____       ");
		printf("\n\t  |       |   |       ");
		printf("\n\t  -----------------   ");
		printf("\n\t  |               |   ");
		printf("\n\t                      ");
		printf("\n\t**********************");
		break;
	}
	}
}

struct slova{
	char key[9][20];
	char podz[50][50];
};

int main()
{
	setlocale(LC_CTYPE, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	time_t currentTime;
	time(&currentTime);

	srand(currentTime);

	const int maxLetters = 10;
	const int numberStep = 10;


	//char letters[] = "�������";
	slova letters[20];

	FILE *WORDS = fopen("words.txt", "r");
	

	if (WORDS)
		for (int i = 0; i < SIZE; i++) {
			fscanf(WORDS, "%s", letters[i].key);
		}
	else {
		printf("Error: file doesn't exists!\n");
		return -1;
	}

	FILE *TIPS = fopen("tips.txt", "r");
	if (TIPS)
		for (int i = 0; i < SIZE; i++){
			fscanf(TIPS, "%s", letters[i].podz);
		}
	else {
		printf("Error: file doesn't exists\n");
		return -1;
	}

	char inputChar = 0;



	char *slovo;
	do
	{
		int random = 0 + rand() % (SIZE + 1);
		slovo = letters[random].key[0];
		slovo = letters[random].podz[0];

		int sizeLetters = strlen(slovo);
		char outchar[maxLetters];
		for (int i = 0; i < sizeLetters; i++)
		{
			outchar[i] = '_';
		}



		int pravilno = 0;
		int step = 0;
		int errors = 1;
		int number = 0;
		//	ris(step);
		//printf("\n\n\t\t");
		//for (int i = 0; i < strlen(letters); i++)
		//{
		//	printf("_ ");
		//}
		do
		{
			pravilno = 0;
			if (errors == strlen(slovo))
			{
				step++;
			}
			system("cls");
			ris(step);
			printf("\n\n\t\t");

			for (int i = 0; i < strlen(slovo); i++)
			{
				if (inputChar == slovo[i])
				{
					outchar[i] = slovo[i];
				}
			}
			for (int i = 0; i < strlen(slovo); i++)
			{
				if (outchar[i] == slovo[i])
				{
					pravilno++;
				}
			}

			for (int i = 0; i < strlen(slovo); i++)
			{
				printf("%c ", outchar[i]);
			}
			inputChar = _getch();
			errors = 0;
			for (int i = 0; i < strlen(slovo); i++)
			{
				if (inputChar != slovo[i])
				{
					errors++;
				}
			}
		} while ((step < numberStep - 1) && (pravilno < strlen(slovo)));
		if (pravilno == strlen(slovo))
		{
			printf("\n\tПоздравляю, вы выиграли!\n");
		}
		else
		{
			printf("\nВы проиграли\n");
		}
		printf("Нажмите 1, чтобы закончить игру\n");
		inputChar = _getch();
	} while (inputChar != '1');
	return 0;
}