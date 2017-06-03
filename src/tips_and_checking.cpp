#include "vis.h"

int Tips(char inputChar, int quantityPodzOnLetters, int podzkazki, int flag) // Flag for tooltip
{
	if (inputChar == '7' && quantityPodzOnLetters == 1 && podzkazki > 0)
	{
		flag = 1;
	}
	return flag;

}



int checkErros(unsigned int errors, char *slovo, int step)  // Check how many mismatches
{
	if (errors == strlen(slovo))
	{
		step++;
	}
	return step;
}