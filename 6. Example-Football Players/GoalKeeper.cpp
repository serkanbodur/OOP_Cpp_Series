#include"GoalKeeper.h"
/**
* \brief Calculate and return Goalkeeper payment 
* \return paymentPerYear
*/
double GoalKeeper::CalculatePaymentForThisYear() {
	return paymentPerYear;
}
/**
* \brief Goalkeeper constructor take inheritence from Footballplayer class
* \ and create a goalkeeper
* \param name1
* \param age1
* *param pay
*/
GoalKeeper::GoalKeeper(const string& name1, int age1, double pay) :FootballPlayer(name1, age1, pay) {}
/**
* \brief If Goalkeeper fly and catch ball,call the function
*/
void GoalKeeper::FlyAndTryCatch() {
	cout << "'" << GoalKeeper::getName() << "'" << " is flying an trying to catch..." << endl;
}
/**
* \brief Goalkeeper destructor
*/
GoalKeeper::~GoalKeeper() {}