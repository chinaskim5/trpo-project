
#include <stdio.h>
#include <stdlib.h>s
#include "ctest.h"
#include "viss.h"

//Check the function "Tips"
CTEST (tips, test1)
{
    char inputChar = '7';
    int quantityPodzOnLetters = 1, podzkazki = 2, flag=0;

    int const result = Tips( inputChar, quantityPodzOnLetters, podzkazki, flag);	
    
    ASSERT_EQUAL(1,result);
}

CTEST (tips,test2)
{
	char inputChar = '6';

	int quantityPodzOnLetters = 2, podzkazki = 3, flag=0;

	int const result = Tips( inputChar, quantityPodzOnLetters, podzkazki, flag);	
   
	ASSERT_EQUAL(0,result);	
}

CTEST (tips,test3)
{
	char inputChar = '5';

	int quantityPodzOnLetters = 3, podzkazki = 4, flag=0;

	int const result = Tips( inputChar, quantityPodzOnLetters, podzkazki, flag);	
   
	ASSERT_EQUAL(0,result);	
}

CTEST (tips,test4)
{
	char inputChar = '8';

	int quantityPodzOnLetters = 5, podzkazki = 6, flag=0;

	int const result = Tips( inputChar, quantityPodzOnLetters, podzkazki, flag);	
   
	ASSERT_EQUAL(0,result);	
}

CTEST (tips,test5)
{
	char inputChar = '7';

	int quantityPodzOnLetters = 1, podzkazki = -1, flag=0;

	int const result = Tips( inputChar, quantityPodzOnLetters, podzkazki, flag);	
   
	ASSERT_EQUAL(0,result);	
}

//Check the function "checkErrors"

CTEST (checkErrors,test1)
{
	char *slovo = "яблоко";
	
	int errors = 12, step = 5;

	int const result = checkErros( errors, slovo, step);	
   
	ASSERT_EQUAL(6,result);	
}

CTEST (checkErrors,test2)
{
	char *slovo = "яд";
	
	int errors = 4, step = 1;

	int const result = checkErros( errors, slovo, step);	
   
	ASSERT_EQUAL(2,result);	
}

CTEST (checkErrors,test3)
{
	char *slovo = "блок";
	
	int errors = 8, step = 3;

	int const result = checkErros( errors, slovo, step);	
   
	ASSERT_EQUAL(4,result);	
}

CTEST (checkErrors,test4)
{
	char *slovo = "код";
	
	int errors = 6, step = 2;

	int const result = checkErros( errors, slovo, step);	
   
	ASSERT_EQUAL(3,result);	
}

CTEST (checkErrors,test5)
{
	char *slovo = "студент";
	
	int errors = 14, step = 6;

	int const result = checkErros( errors, slovo, step);	
   
	ASSERT_EQUAL(7,result);	
}

CTEST (correctLetters,test1)
{
	char *slovo = "яблоко", inputChar = 'я', outchar[6];
	
	int pravilno = 6;

	int const result = correctLetters( slovo, inputChar, outchar, pravilno);	
   
	ASSERT_EQUAL(7,result);	
}

CTEST (correctLetters,test2)
{
	char *slovo = "блок", inputChar = 'б', outchar[4];
	
	int pravilno = 4;

	int const result = correctLetters( slovo, inputChar, outchar, pravilno);	
   
	ASSERT_EQUAL(5,result);	
}

CTEST (correctLetters,test3)
{
	char *slovo = "кол", inputChar = 'к', outchar[3];
	
	int pravilno = 3;

	int const result = correctLetters( slovo, inputChar, outchar, pravilno);	
   
	ASSERT_EQUAL(4,result);	
}

CTEST (correctLetters,test4)
{
	char *slovo = "студент", inputChar = 'я', outchar[7];
	
	int pravilno = 7;

	int const result = correctLetters( slovo, inputChar, outchar, pravilno);	
   
	ASSERT_EQUAL(7,result);	
}

CTEST (correctLetters,test5)
{
	char *slovo = "яблоко", inputChar = 'п', outchar[6];
	
	int pravilno = 6;

	int const result = correctLetters( slovo, inputChar, outchar, pravilno);	
   
	ASSERT_EQUAL(6,result);	
}

CTEST (errorsInLetters,test1)
{
	char *slovo = "яблоко", inputChar = 'б';
	

	int const result = errorsInLetters( slovo, inputChar);	
   
	ASSERT_EQUAL(11,result);	
}

CTEST (errorsInLetters,test2)
{
	char *slovo = "яблоко", inputChar = 'м';
	

	int const result = errorsInLetters( slovo, inputChar);	
   
	ASSERT_EQUAL(12,result);	
}

CTEST (errorsInLetters,test3)
{
	char *slovo = "блок", inputChar = 'м';
	

	int const result = errorsInLetters( slovo, inputChar);	
   
	ASSERT_EQUAL(8,result);	
}

CTEST (errorsInLetters,test4)
{
	char *slovo = "студент", inputChar = 'я';
	

	int const result = errorsInLetters( slovo, inputChar);	
   
	ASSERT_EQUAL(14,result);	
}

CTEST (errorsInLetters,test5)
{
	char *slovo = "мод", inputChar = 'в';
	

	int const result = errorsInLetters( slovo, inputChar);	
   
	ASSERT_EQUAL(6,result);	
}






