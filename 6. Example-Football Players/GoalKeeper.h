#pragma once
#include"FootballPlayer.h"
/**
* \brief A derivated class for create Goalkeeper
*/
class GoalKeeper :public FootballPlayer {
public:
	/**
	* \brief Calculate the payment for this year of goalkeeper 
	*/
	double CalculatePaymentForThisYear();
	/**
	* \brief If goalkeeper fly and catch
	*/
	void FlyAndTryCatch();
	/**
	* \brief Goalkeeper constructor
	*/
	GoalKeeper(const string&, int, double);
	/**
	* \brief Goalkeeper destructor
	*/
	~GoalKeeper();
};
