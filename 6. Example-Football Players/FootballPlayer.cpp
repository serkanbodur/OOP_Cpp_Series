#include"FootballPlayer.h"
/**
* \brief Constructor footballplayer using inheritence from Player constructor
* \param name1
* \param age1
* \param pay
*/
FootballPlayer::FootballPlayer(const string& name1, int age1, double pay) :Player(name1, age1), paymentPerYear(pay) {
}
/**
* \brief Return if payment per year to soccer
* \return paymentPerYear
*/
double FootballPlayer::getPaymentPerYear() {
	return paymentPerYear;
}
/**
* \brief The function pass from created football player to required footballplayer 
*/
void FootballPlayer::Pas(const Player* player)
{
	cout << "'" << FootballPlayer::name << "'" << " is passing to " << "'" << player->getName() << "'" << endl;
}
/**
* \brief Given value of payment per year appoint payment per year value of player
* \param paymentperyear1
*/
void FootballPlayer::setPaymentPerYear(double paymentperyear1) {
	paymentPerYear = paymentperyear1;
}
/**
* \brief If player shot,the function is actived 
*/
void FootballPlayer::Shot() {
	cout << "'" << FootballPlayer::name << "'" << " is shooting! " << endl;
}
/**
* \brief Destructor footbal player
*/
FootballPlayer::~FootballPlayer() {}