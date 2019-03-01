#include<iostream>
#include"Player.h"
using namespace std;
/**
* \brief A constructor set name and age values
* \param name1
* \param age1
*/
Player::Player(const string&name1, int age1)
{
	name = name1;
	age = age1;

}
/**
* \brief Player destructor
*/
Player::~Player() {

}
/**
* \brief The function if the age of that time required
* \return age
*/
int Player::getAge() {
	return age;
}/**
* \brief The function if the name of that time required
* \return name
*/
const string& Player::getName()const {
	return name;
}
/**
* \brief The function move to required direction
* \ All of directions define with switch-case 
* \param direction
*/
void Player::Move(Direction direction) {
	{

		switch (direction)
		{

		case 0:
		{
			MoveEast();
		}
		break;
		case 1:
		{
			MoveNorth();
		}
		break;
		case 2:
		{
			MoveNorthEast();
		}
		break;
		case 3:
		{
			MoveNorthWest();
		}
		break;
		case 4:
		{
			MoveSouth();
		}
		break;
		case 5:
		{
			MoveSouthEast();
		}
		break;
		case 6:
		{
			MoveSouthWest();
		}
		break;
		case 7:
		{
			MoveWest();
		}
		break;
		}

	}
}
/**
* \brief If player move to east,call the function
*/
void Player::MoveEast() {
	cout << "'" << Player::getName() << "'" << "is moving East." << endl;
}
/**
* \brief If player move to north,call the function
*/
void Player::MoveNorth() {
	cout << "'" << Player::getName() << "'" << "is moving North." << endl;
}
/**
* \brief If player move to northeast,call the function
*/
void Player::MoveNorthEast() {
	cout << "'" << Player::getName() << "'" << "is moving North-East." << endl;
}
/**
* \brief If player move to northwest,call the function
*/
void Player::MoveNorthWest() {
	cout << "'" << Player::getName() << "'" << "is moving North-West." << endl;
}
/**
* \brief If player move to south,call the function
*/
void Player::MoveSouth() {
	cout << "'" << Player::getName() << "'" << "is moving South." << endl;
}
/**
* \brief If player move to southeast,call the function
*/
void Player::MoveSouthEast() {
	cout << "'" << Player::getName() << "'" << "is moving South-East." << endl;
}
/**
* \brief If player move to southwest,call the function
*/
void Player::MoveSouthWest() {
	cout << "'" << Player::getName() << "'" << "is moving South-West." << endl;
}
/**
* \brief If player move to west,call the function
*/
void Player::MoveWest() {
	cout << "'" << Player::getName() << "'" << "is moving West." << endl;
}