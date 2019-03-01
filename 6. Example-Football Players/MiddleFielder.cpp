#include "MiddleFielderPlayer.h"
/**
* \brief Create a Middlefielder constructor using inheritence from Footballplayer constructor
* \param name1
* \param age1
* \param pay
* \param asist
*/
MiddleFielderPlayer::MiddleFielderPlayer(const string& name1, int age1, double pay, double asist) :FootballPlayer(name1, age1, pay), paymentPerAssist(asist) {
}
/**
* \brief Calculate the middlefielder player payment for this year
* \return getPaymentPerYear() + (paymentPerAssist*MiddleFielderPlayer::getAssistCount())
*/
double MiddleFielderPlayer::CalculatePaymentForThisYear() {
	return MiddleFielderPlayer::getPaymentPerYear() + (paymentPerAssist*MiddleFielderPlayer::getAssistCount());
}
/**
* \brief Return assist number of middlefielder player
* \return assistcount
*/
int MiddleFielderPlayer::getAssistCount() {
	return assistCount;
}
/**
* \brief If middlefielder player press
*/
void MiddleFielderPlayer::Press() {
	cout << "'" << MiddleFielderPlayer::getName() << "' is pressing..." << endl;

}
/**
* \brief Middlefielder player set assistcount
* \param assistcount1
*/
void MiddleFielderPlayer::setAssistCount(int assistcount1)
{
	assistCount = assistcount1;
}
/**
* \brief If middlefielder player try and through ball to another player
*/
void MiddleFielderPlayer::TryThroughBall(const Player*player)
{
	cout << "'" << MiddleFielderPlayer::getName() << "' is trying to through ball to" << "'" << player->getName() << "'" << endl;
}
/**
* \brief Middlefielder player destructor
*/
MiddleFielderPlayer::~MiddleFielderPlayer() {}