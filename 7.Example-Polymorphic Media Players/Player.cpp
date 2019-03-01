#include<iostream>
#include<string>
#include"Player.h"
/**
* \@File Player.h
* \@Author Serkan Bodur
* \@Date 17/12/2017
*/
using namespace std;
/** 
* \brief Print the operation the screen
*/
void Player::Close() {
	cout << "Player : Closed... " << endl;
}
/**
* \brief Print the operation the screen
*/
void Player::Open() {
	cout << "Player : Opened... " << endl;
}
/**
* \brief Print the operation the screen
*/
void Player::Pause() {
	cout << "Player : Pausing the media " << Player::mediaName << endl;
}
/**
* \brief Print the operation the screen
*/
void Player::Play() {
	cout << "Player : Playing the media " << Player::mediaName << endl;
}
/**
* \brief Appoint max volume level to volume level
* \param max volume level
*/
Player::Player(int maxVolumeLevel = 100) {
	volumeLevel = maxVolumeLevel;
}
/**
* \brief Print the operation the screen
*/
void	Player::Stop() {
	cout << "Player : Stopping the media " << Player::mediaName << endl;
}
/**
* \brief This function contain integer amount.Then function is used when the player is wanted to be volume down
* \brief This function down volume level and print current volume level value the screen
* \param downing amount
*/
void Player::VolumeDown(int amount) {
	volumeLevel = volumeLevel - amount;
	cout << "Player : Volume Level : " << Player::volumeLevel << endl;
}
void Player::VolumeUp(int amount)
{
	Player::maxVolumeLevel = Player::volumeLevel + amount;
	if (Player::maxVolumeLevel > Player::volumeLevel)
		Player::volumeLevel /= 2;
	Player::volumeLevel = Player::volumeLevel + amount;
	cout << "Player : Volume Level : " << Player::volumeLevel << endl;
}
Player::~Player() {};
