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
#include "vis.h"
#define SIZE 10

using namespace std;


struct slova{
	char key[9][20];
	string podz;
};

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

	FILE *WORDS = fopen("words.txt", "r");//opening file with the words

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
				printf("\n\t K etomy slovy bolshe net podzkazok");
			}


			printf("\n\t Y vas ostalos %d podzkazki", podzkazki);
			printf("\n\t Chto bi podsmotret naberite <?>");
			printf("\n\t");
			printf("Vvedenii bykvi:");


			inputletters[counter] = inputChar;
			if (inputletters[counter] != inputletters[counter - 1])
			{
				counter++;    // Check for similar symbols
			}
			printf("\n\t");
			printInputLetters(inputletters);// Display the entered letters


			inputChar = _getch();


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