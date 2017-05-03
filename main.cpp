#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include <ctype.h>
#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#define SIZE 10

using namespace std;

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
	string podz;
};

int randomGenerator(int digit) // Returns a random number
{
	digit = 0 + rand() % (SIZE + 1);
	return digit;
}

int errorsInLetters(char *slovo, char inputChar) // Checks whether the letter entered is part of a word
{
	int nesovpal = 0;
	for (int i = 0; i < strlen(slovo); i++)
	{
		if (inputChar != slovo[i] && inputChar != '7') // on 7 the prompt is called
		{
			nesovpal++;
		}
	}
	return nesovpal;
}
int checkErros(int errors, char *slovo, int step)  // Check how many mismatches
{
	if (errors == strlen(slovo))
	{
		step++;
	}
	return step;
}

int correctLetters(char *slovo, char inputChar, char outchar[], int *pravilno) // Checks which entered characters match the word
{
	for (int i = 0; i < strlen(slovo); i++)
	{
		if (inputChar == slovo[i])
		{
			outchar[i] = slovo[i];
		}
	}
	for (int i = 0; i < strlen(slovo); i++)           // We count how many letters are correct
	{
		if (outchar[i] == slovo[i])
		{
			*pravilno = *pravilno + 1;
		}
	}
	return 0;
}

void printLetters(char *slovo, char outchar[]) // Displays the correct words on the screen
{
	for (int i = 0; i < strlen(slovo); i++)
	{
		printf("%c ", outchar[i]);
	}
	printf("\n");
}

int Tips(char inputChar, int quantityPodzOnLetters, int podzkazki, int flag) // Flag for tooltip
{
	if (inputChar == '7' && quantityPodzOnLetters == 1 && podzkazki > 0)
	{
		flag = 1;
	}
	return flag;

}



int main()
{
	setlocale(LC_CTYPE, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	time_t currentTime;
	time(&currentTime);

	srand(currentTime);

	const int maxLetters = 20;
	const int numberStep = 10;


	//char letters[] = "???";
	slova letters[SIZE];

	FILE *WORDS = fopen("words.txt", "r");


	if (WORDS)
	for (int i = 0; i < SIZE; i++) {
		fscanf(WORDS, "%s", letters[i].key);
	}
	else {
		printf("Error: file doesn't exists!\n");
		return -1;
	}

	ifstream myfile("tips.txt");
	for (int i = 0; i < SIZE; i++){
		getline(myfile, letters[i].podz);
	}


	char inputChar = 0;



	char *slovo;
	string podz;

	int random = 0; // Random number from 0 to size

	int podzkazki = 3;
	do
	{
		random = randomGenerator(random); // Random number for structure
		slovo = letters[random].key[0];
		podz = letters[random].podz;

		int sizeLetters = strlen(slovo); // How many letters in a word
		char outchar[maxLetters];  // The data to be displayed on the screen
		char inputletters[maxLetters]; // For input characters
		memset(inputletters, NULL, maxLetters); // Clean the array

		for (int i = 0; i < sizeLetters; i++) // We put all the letters not guessing
		{
			outchar[i] = '_';
		}


		//Game settings
		int pravilno = 0;
		int step = 0;
		int errors = 1;
		int number = 0;
		int counter = 0;
		int quantityPodzOnLetters = 1;

		do
		{
			int flag = 0;

			errors = errorsInLetters(slovo, inputChar);
			pravilno = 0;
			step = checkErros(errors, slovo, step);

			system("cls");
			ris(step);
			printf("\n\n\t\t");

			correctLetters(slovo, inputChar, outchar, &pravilno);

			printLetters(slovo, outchar);
			flag = Tips(inputChar, quantityPodzOnLetters, podzkazki, flag);
			if (flag == 1)
			{
				printf("\n\t");
				cout << podz << endl;
				quantityPodzOnLetters--;
				podzkazki--;
			}
			if (quantityPodzOnLetters == 0 && podzkazki > 0)
			{
				printf("\n\tBolshe nety podzkazok dla etogo slova");
			}
			if (quantityPodzOnLetters == 0 && podzkazki > 0)
			{
				printf("\n\t K etomy slovy bolshe net podzkazok");
			}
			printf("\n\t Y vas ostalos %d podzkazki", podzkazki);
			printf("\n\t Chto bi podsmotret naberite <?>");
			printf("\n\t");
			printf("Vvedenii bykvi:");
			for (int i = 0; i < 20; i++)
			{
				if (inputletters[i] != inputletters[i - 1])   // ??????? ?? ????? , ??????? ??? ???? ???????.
				{
					printf(" %c", inputletters[i]);
				}
			}

			inputChar = _getch();

			inputletters[counter] = inputChar;
			if (inputletters[counter] != inputletters[counter - 1])
			{
				counter++;    // ??????? ??? ????????? ?????
			}


		} while ((step < numberStep - 1) && (pravilno < strlen(slovo)));
		if (pravilno == strlen(slovo))
		{
			printf("\n\tYou won!\n");
		}
		else
		{
			printf("\nYou lose\n");
		}
		printf("input 1");
			inputChar = _getch();
	} while (inputChar != '1');
	return 0;
}