#include <stdio.h>
#include <stdlib.h>
#include <ctest.h>
#include "vis.h"

//Check the function "Tips"
CTEST (tips, test1)
{
	char inputChar = '7';
	int quantityPodzOnLetters = 1, podzkazki = 2, flag=1;

	int const result = Tips( inputChar, quantityPodzOnLetters, podzkazki, flag);	
	
	ASSERT_EQUAL(1,result);
}

