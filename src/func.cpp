#include "vis.h"
#define SIZE 10

int randomGenerator(int digit) // Returns a random number
{
	digit = 0 + rand()%(SIZE);
	return digit;
}