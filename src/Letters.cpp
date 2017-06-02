#include"vis.h"

int correctLetters(char *slovo, char inputChar, char outchar[], unsigned int *pravilno) // Checks which entered characters match the word
{
	for (unsigned int i = 0; i < strlen(slovo); i++)
	{
		if (inputChar == slovo[i])
		{
			outchar[i] = slovo[i];
		}
	}
	for (unsigned int i = 0; i < strlen(slovo); i++)           // We count how many letters are correct
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
	for (unsigned int i = 0; i < strlen(slovo); i++)
	{
		printf("%c ", outchar[i]);
	}
	printf("\n");
}



void printInputLetters(char inputletters[])
{
	for (int i = 0; i < 20; i++) // You can enter a total of 20 letters
	{
		if (inputletters[i] != inputletters[i - 1])   // Display the entered letters
		{
			printf(" %c", inputletters[i]);
		}
	}
}



int errorsInLetters(char *slovo, char inputChar) // Checks whether the letter entered is part of a word
{
	int nesovpal = 0;
	for (unsigned int i = 0; i < strlen(slovo); i++)
	{
		if (inputChar != slovo[i] && inputChar != '7') // on 7 the prompt is called
		{
			nesovpal++;
		}
	}
	return nesovpal;
}