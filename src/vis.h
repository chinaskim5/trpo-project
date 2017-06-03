#ifndef VIS_H
#define VIS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <Windows.h>
//#include <conio.h>
#include <ctype.h>
#include<string.h>



int randomGenerator(int digit);
void ris(int step);
int randomGenerator(int digit);
int Tips(char inputChar, int quantityPodzOnLetters, int podzkazki, int flag);
int correctLetters(char *slovo, char inputChar, char outchar[], unsigned int *pravilno);
void printLetters(char *slovo, char outchar[]);
void printInputLetters(char inputletters[]);
int errorsInLetters(char *slovo, char inputChar);
int checkErros(unsigned int errors, char *slovo, int step);




#endif
