#include"FootballPlayer.h"
/**
* \brief A derivated class for creating Middlefielder player
*/
class MiddleFielderPlayer :public FootballPlayer {
private:
	int assistCount;
	double paymentPerAssist;
public:
	/**
	* \brief Middlefielder constructor
	*/
	MiddleFielderPlayer(const string&, int, double, double);
	/**
	* \brief Calculate middlefielder player payment for this year
	*/
	double CalculatePaymentForThisYear();
	/**
	* \brief Return assist number of middlefielder player
	*/
	int getAssistCount();
	/**
	* \brief If player press,call the function
	*/
	void Press();
	/**
	* \brief Sets number of middlefielder player assist
	*/
	void setAssistCount(int);
	/**
	* \brief If middlefielder player try through ball to another plaeyer,call the function
	*/
	void TryThroughBall(const Player*);
	/**
	* \brief Middlefielder player destructor
	*/
	~MiddleFielderPlayer();
};
#pragma once
