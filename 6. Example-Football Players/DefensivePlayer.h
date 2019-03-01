#include"FootballPlayer.h"
/**
* \brief A derivated class for creating defensive player
*/
class DefensivePlayer :public FootballPlayer {
private:
	double paymentPerMatch;
	int playedMatchCount;
public:
	/**
	* \brief The function calculate payment of defensive player
	*/
	double CalculatePaymentForThisYear();
	/**
	* \brief If player make defence,call the function
	*/
	void Defense();
	/**
	* \brief Defensive playe constructor
	*/
	DefensivePlayer(const string&, int, double, double);
	/**
	* \brief Return defensive player played match number
	*/
	int getPlayedMatchCount();
	/**
	* \brief Update defensive player played match number
	*/
	void setPlayerMatchCount(int);
	/**
	* \brief If defensive player trip up,call the function
	*/
	void TripUp(const Player*);
	/**
	* \brief Defensive player destructor
	*/
	~DefensivePlayer();
};
#pragma once
