#include "RandomNumberGenerator.h"
#include <iostream>
using namespace std; 

void TEST_RandomInteger(RandomNumberGenerator& generator, int lowerBound, int upperBound)
{

	int randomNumber = generator.getRandomInteger(lowerBound, upperBound);
	if (randomNumber >= lowerBound && randomNumber <= upperBound)
	{
		cout << "SUCCESS : " << randomNumber << endl;
	}
	else
	{
		cout << "FAILURE : Obtained number is not between the range [" << lowerBound << "," << upperBound << "]" << endl;
	}
} 
void TEST_RandomFloat(RandomNumberGenerator& generator, float lowerBound, float  upperBound, RandomNumberGenerator::Precision precision)
{ 
	float random_float = generator.getRandomFloat(lowerBound, upperBound,precision);
	if (random_float >= lowerBound && random_float <= upperBound)
	{
		cout << "SUCCESS : " << random_float << endl;
	}
	else
	{
		cout << "FAILURE : Obtained number is not between the range [" << lowerBound << "," << upperBound << "]" << endl;
	}

}
void TEST_RandomDouble(RandomNumberGenerator& generator, double lowerBound, double  upperBound, RandomNumberGenerator::Precision precision)
{
	double random_double = generator.getRandomDouble(lowerBound, upperBound, precision);
	if (random_double >= lowerBound && random_double <= upperBound)
	{
		cout << "SUCCESS : " << random_double << endl;
	}
	else
	{
		cout << "FAILURE : Obtained number is not between the range [" << lowerBound << "," << upperBound << "]" << endl;
	}
	
} 

void TEST_RandomCharacter(RandomNumberGenerator& generator, RandomNumberGenerator::CharacterType type)
{
	char random_character = generator.getRandomCharacter(type);
	if (random_character == type)
	{
		cout << "SUCCESS : " << random_character << endl;
	}
	else
	{
		cout << "FAILURE" << endl;
	}

}
int main() 
{
	RandomNumberGenerator generator; 

	cout << "+---------------------+" << endl
		<< "| Random Integer Test |" << endl
		<< "+---------------------+" << endl;
	TEST_RandomInteger(generator, 5, 20);
	TEST_RandomInteger(generator, 2, 60);
	cout << "+-------------------+" << endl
		<< "| Random Float Test |" << endl
		<< "+-------------------+" << endl;
	TEST_RandomFloat(generator, 5, 20, RandomNumberGenerator::Precision::ONE);
	TEST_RandomFloat(generator, 5, 20, RandomNumberGenerator::Precision::TWO);
	TEST_RandomFloat(generator, 5, 20, RandomNumberGenerator::Precision::THREE);
	TEST_RandomFloat(generator, 5, 20, RandomNumberGenerator::Precision::FOUR);
	cout << "+--------------------+" << endl
		<< "| Random Double Test |" << endl
		<< "+--------------------+" << endl;
	TEST_RandomDouble(generator, 5, 20, RandomNumberGenerator::Precision::ONE);
	TEST_RandomDouble(generator, 5, 20, RandomNumberGenerator::Precision::TWO);
	TEST_RandomDouble(generator, 5, 20, RandomNumberGenerator::Precision::THREE); 
	TEST_RandomDouble(generator, 5, 20, RandomNumberGenerator::Precision::FOUR);
	
	cout << "+-----------------------+" << endl
		<< "| Random Character Test |" << endl
		<< "+-----------------------+" << endl;
	
	TEST_RandomCharacter(generator, RandomNumberGenerator::CharacterType::LOWER_LETTER);
	TEST_RandomCharacter(generator, RandomNumberGenerator::CharacterType::UPPER_LETTER);
	TEST_RandomCharacter(generator, RandomNumberGenerator::CharacterType::DIGIT);
	
	system("pause");
	return 0;

}