#include <iostream>
#include "GoalKeeper.h"
#include "DefensivePlayer.h"
#include "MiddleFielderPlayer.h"
#include "ForwardPlayer.h"
using namespace std;
/**
* \brief Create a goalkeeper and then call the required function
*/
void TEST_GoalKeeper()
{
	cout << "+------------------+" << endl
		<< "| GOAL KEEPER TEST |" << endl
		<< "+------------------+" << endl;
	GoalKeeper* keeper = new GoalKeeper("Iker Casillas", 34, 7.5);
	keeper->Move(Player::Direction::EAST);
	keeper->Move(Player::Direction::NORTH_EAST);
	keeper->Shot();
	DefensivePlayer* player = new DefensivePlayer("Raphael Varane", 22, 1.2, 0.1);
	keeper->Pas(player);
	keeper->FlyAndTryCatch();
	cout << "Payment for this year : " << keeper->CalculatePaymentForThisYear()
		<< " million EUR" << endl;
}
/**
* \brief Create a Defensive player and then call the required function
*/
void TEST_DefensivePlayer()
{
	cout << "+-----------------------+" << endl
		<< "| DEFENSIVE PLAYER TEST |" << endl
		<< "+-----------------------+" << endl;
	DefensivePlayer* defense = new DefensivePlayer("Raphael Varane", 22, 1.2,
		0.1);
	defense->Move(Player::Direction::EAST);
	defense->Move(Player::Direction::NORTH_EAST);
	defense->Shot();
	MiddleFielderPlayer* player = new MiddleFielderPlayer("Gareth Bale", 25, 15, 0.2);
	defense->Pas(player);
	defense->Defense();
	ForwardPlayer* opponent = new ForwardPlayer("Lionel Messi", 28, 20, 0.3);
	defense->TripUp(opponent);
	defense->setPlayerMatchCount(11);
	cout << "Payment for this year : " << defense->CalculatePaymentForThisYear()
		<< " million EUR" << endl;
}
/**
* \brief Create a middlefielder player and then call the required function
*/
void TEST_MiddleFielderPlayer()
{
	cout << "+----------------------------+" << endl
		<< "| MIDDLE FIELDER PLAYER TEST |" << endl
		<< "+----------------------------+" << endl;
	MiddleFielderPlayer* middleFielder = new MiddleFielderPlayer("Gareth Bale", 25, 15,
		0.2);
	middleFielder->Move(Player::Direction::EAST);
	middleFielder->Move(Player::Direction::NORTH_EAST);
	middleFielder->Shot();
	ForwardPlayer* player = new ForwardPlayer("Cristiano Ronaldo", 30, 17, 0.3);
	middleFielder->Pas(player);
	middleFielder->Press();
	middleFielder->TryThroughBall(player);
	middleFielder->setAssistCount(22);
	cout << "Payment for this year : " << middleFielder->CalculatePaymentForThisYear() << " million EUR" << endl;
}
/**
* \brief Create a forward player and then call the required function
*/
void TEST_ForwardPlayer()
{
	cout << "+---------------------+" << endl
		<< "| FORWARD PLAYER TEST |" << endl
		<< "+---------------------+" << endl;
	ForwardPlayer* forward = new ForwardPlayer("Cristiano Ronaldo", 30, 17, 0.3);
	forward->Move(Player::Direction::EAST);
	forward->Move(Player::Direction::NORTH_EAST);
	forward->Shot();
	ForwardPlayer* player = new ForwardPlayer("Karim Benzema", 27, 8, 0.3);
	forward->Pas(player);
	forward->ThrowYourSelf();
	DefensivePlayer* opponent = new DefensivePlayer("Gerard Pique", 28, 5.8, 0.1);
	forward->TryDribblePast(opponent);
	forward->setGoalCount(42);
	cout << "Payment for this year : " << forward->CalculatePaymentForThisYear()
		<< " million EUR" << endl;
}
int main()
{
	/**
	* \brief Call all of test functions
	*/
	TEST_GoalKeeper();
	TEST_DefensivePlayer();
	TEST_MiddleFielderPlayer();
	TEST_ForwardPlayer();
	system("pause");
	return 0;
}
