/// RandomNumberGenerator.cpp
#include "RandomNumberGenerator.h"
#include <time.h>
#include <iostream>
using namespace std;

/***
* \brief Constructure function.
*/
RandomNumberGenerator::RandomNumberGenerator()
{
	srand(time(NULL));
	int i;
	i = rand();
}

/***
* \brief Destructure function.
*/
RandomNumberGenerator::~RandomNumberGenerator(){}

/**
* \brief Generates a random integer number between the given range 
* \param lowerBound
* \param upperBound
* \return random
*/
int RandomNumberGenerator::getRandomInteger(int lowerBound, int upperBound)
{
	int random;
	random = lowerBound + rand() % upperBound;
	return random;
}

/**
* \brief Generates a random float number between the given range and using precision structure.
* \brief Precision value is equal to “ONE”. That is, these will be one digit after decimal point.
* \brief Multiply both lower and upper bound variables by “10” and store them different variables of type integer.
* \brief Obtain a random integer value using multiplied boundaries and store it in a float variable
* \brief Divide obtained float value by “10”.
* \brief Return value.
* \param lowerBound
* \param upperBound
* \param precision
* \return value
*/
float RandomNumberGenerator::getRandomFloat(float lowerBound, float upperBound, Precision precision)
{
	if (precision == ONE)
	{
		int low_value = 10 * lowerBound;
		int up_value = 10 * upperBound;
		float value = low_value + rand() % up_value;
		value = value / 10;
		return value;
	}
	if (precision == TWO)
	{

		int low_value = 100 * lowerBound;
		int up_value = 100 * upperBound;
		float value = low_value + rand() % up_value;
		value = value / 100;
		return value;
	}
	if (precision == THREE)
	{

		int low_value = 1000 * lowerBound;
		int up_value = 1000 * upperBound;
		float value = low_value + rand() % up_value;
		value = value / 1000;
		return value;
	}
	if (precision == FOUR)
	{

		int low_value = 10000 * lowerBound;
		int up_value = 10000 * upperBound;
		float value = low_value + rand() % up_value;
		value = value / 10000;
		return value;
	}
}

/**
* \brief Generates a random double number between the given range and using precision structure.
* \brief Same Algorithm can be applied to double number generation
* \param lowerBound
* \param upperBound
* \param precision
* \return value
*/
double RandomNumberGenerator::getRandomDouble(double lowerBound, double upperBound, Precision precision)
{
	if (precision == ONE)
	{

		int low_value = 10 * lowerBound;
		int up_value = 10 * upperBound;
		double value = low_value + rand() % up_value;
		value = value / 10;
		return value;
	}

	if (precision == TWO)
	{

		int low_value = 100 * lowerBound;
		int up_value = 100 * upperBound;
		double value = low_value + rand() % up_value;
		value = value / 100;
		return value;
	}
	if (precision == THREE)
	{

		int low_value = 1000 * lowerBound;
		int up_value = 1000 * upperBound;
		double value = low_value + rand() % up_value;
		value = value / 1000;
		return value;
	}
	if (precision == FOUR)
	{

		int low_value = 10000 * lowerBound;
		int up_value = 10000 * upperBound;
		double value = low_value + rand() % up_value;
		value = value / 10000;
		return value;
	}
}


char RandomNumberGenerator::getRandomCharacter(CharacterType characterType)
{
	if (characterType == LOWER_LETTER)
	{
		static char X = 'a'+rand()%24;
		return X;
	}
	if (characterType == UPPER_LETTER)
	{
		static const char Upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		int length = sizeof(Upper);
		return Upper[rand() % length];
	}
	if (characterType == DIGIT)
	{
		static const char Digit[] = "0123456789";
		int length = sizeof(Digit);
		return Digit[rand() % length];
	}
}
