#include"FootballPlayer.h"
/**
* \brief A derivated class for creating Forward player
*/
class ForwardPlayer :public FootballPlayer
{
private:
	int goalCount;
	double paymentPerGoal;
public:
	/**
	* \brief Forward player constructor
	*/
	ForwardPlayer(const string&, int, double, double);
	/**
	* \brief This function calculate forward player payment for this year
	*/
	double CalculatePaymentForThisYear();
	/**
	* \brief This function return forward player goal number
	*/
	int getGoalCount();
	/**
	* \brief This function set forward player goal number
	*/
	void setGoalCount(int);
	/**
	* \brief If forward player throw yourself,call the function
	*/
	void ThrowYourSelf();
	/**
	* \brief If forward player try dribble past,call the function
	*/
	void TryDribblePast(const Player*);
	/**
	* \brief Forward player destructor
	*/
	~ForwardPlayer();
};

#pragma once
