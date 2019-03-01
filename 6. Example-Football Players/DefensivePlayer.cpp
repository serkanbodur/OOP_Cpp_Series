#include "DefensivePlayer.h"
/**
* \brief Calculate the payment of defensive player for this year
* \to his payment per year add number of match times every match payment
* \return getPaymentPerYear() + (paymentPerMatch*DefensivePlayer::getPlayedMatchCount())
*/
double DefensivePlayer::CalculatePaymentForThisYear()
{
	return DefensivePlayer::getPaymentPerYear() + (paymentPerMatch*DefensivePlayer::getPlayedMatchCount());
}
/**
* \brief If player make defense,show this action
*/
void DefensivePlayer::Defense() {
	cout << "'" << DefensivePlayer::getName() << "'" << "is defending..." << endl;
}
/**
* \brief The function is defensive player to take inheritence from FootballPlayer constructor
* \param name1
* \param age1
* \param pay
* \param payofmatch
*/
DefensivePlayer::DefensivePlayer(const string&name1, int age1, double pay, double payofmatch) :FootballPlayer(name1, age1, pay), paymentPerMatch(payofmatch) {}
/**
* \brief Return the defensive player  number of matches played
* \return playedMatchCount
*/
int DefensivePlayer::getPlayedMatchCount() {
	return playedMatchCount;
}
/**
* \brief Set the defensive player number of matches played
* \param numberofmatch
*/
void DefensivePlayer::setPlayerMatchCount(int numberofmatch) {
	playedMatchCount = numberofmatch;
}
/**
* \brief If defensive player trip up to given player ,show this action
*/
void DefensivePlayer::TripUp(const Player*player)
{
	cout << "'" << DefensivePlayer::getName() << "'" << "tripped up" << "'" << player->getName() << "'" << "..." << endl;
}
/**
* \brief Defensive player destructor
*/
DefensivePlayer::~DefensivePlayer() {}