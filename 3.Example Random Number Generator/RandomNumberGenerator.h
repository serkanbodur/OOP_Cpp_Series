/// RandomNumberGenerator.h
#pragma once 
class RandomNumberGenerator
{
public:

	enum Precision
	{
		ONE, TWO, THREE, FOUR
	};
	enum CharacterType
	{
		UPPER_LETTER, LOWER_LETTER, DIGIT
	};

	RandomNumberGenerator();
	virtual ~RandomNumberGenerator();
	int getRandomInteger(int lowerBound, int upperBound);
	float getRandomFloat(float lowerBound, float upperBound, Precision precision);
	double getRandomDouble(double lowerBound, double upperBound, Precision precision);
	char getRandomCharacter(CharacterType characterType);

};


