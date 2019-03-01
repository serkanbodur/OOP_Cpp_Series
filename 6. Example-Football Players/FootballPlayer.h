#pragma once
#ifndef FUTBOLCU_H
#include "Player.h"
using namespace std;
/**
* \brief A derivated class to create football player
*/
class FootballPlayer :public Player {
protected:
	double paymentPerYear;
public:
	/**
	* \brief Constructor to create football player
	*/
	FootballPlayer(const string&, int, double);
	/**
	* \brief Return payment per year to soccer required time 
	*/
	double getPaymentPerYear();
	/**
	* \brief If player pas to another player
	*/
	void Pas(const Player*);
	/**
	* \brief Set payment per year 
	*/
	void setPaymentPerYear(double);
	/**
	* \brief If player shot,call the function
	*/
	void Shot();
	/**
	* \brief Destructor Footballplayer
	*/
	~FootballPlayer();
};

#endif 

