#include "ForwardPlayer.h"
/**
* \brief Forward player is created using inheritence from FootballPlayer constructor
* \param name1
* \param age1
* \param pay
* \param goal
*/
ForwardPlayer::ForwardPlayer(const string& name1, int age1, double pay, double goal) :FootballPlayer(name1, age1, pay), paymentPerGoal(goal)
{
}
/**
* \brief This function calculate forward player payment for this year
* \return paymentPerYear + (paymentPerGoal*ForwardPlayer::getGoalCount())
*/
double ForwardPlayer::CalculatePaymentForThisYear()
{
	return ForwardPlayer::paymentPerYear + (paymentPerGoal*ForwardPlayer::getGoalCount());
}
/**
* \brief This function return forward player goal number
* \return goalCOunt
*/
int ForwardPlayer::getGoalCount() {
	return goalCount;
}
/**
* \brief This function set forward player goal number
* \param goal
*/
void ForwardPlayer::setGoalCount(int goal) {
	goalCount = goal;
}
/**
* \brief If forward player throw yourself,show this action
*/
void ForwardPlayer::ThrowYourSelf()
{
	cout << "'" << ForwardPlayer::getName() << " 'is throwing himself..." << endl;
}
/**
* \brief If forward player try and dribble past on another player,show this action
*/
void ForwardPlayer::TryDribblePast(const Player*player) {
	cout << "'" << ForwardPlayer::getName() << "' is trying  a dribble past on '" << player->getName() << "' ..." << endl;
}
/**
* \brief Forward player destructor
*/
ForwardPlayer::~ForwardPlayer()
{
}
