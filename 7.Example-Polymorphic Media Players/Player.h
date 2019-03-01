#pragma once
#ifndef PLAYER_H
#include<iostream>
#include<string>
using namespace std;
/**
* \@File Player.h
* \@Author Serkan Bodur
* \brief This class is abstract class
* \brief This class for general function of Players
*/
class Player {
protected:
	/**
	* \brief max volume level attribute
	*/
	int maxVolumeLevel;
	/**
	* \brief media name attribute
	*/
	string mediaName;
	/**
	* \brief volume level attribute
	*/
	int volumeLevel;
public:
	/**
	* \brief Pure virtual function Backward
	* \brief This function definite must derivated class from this class.
	*/
	virtual void BackWard() = 0;
	/**
	* \brief This function is used when the player is wanted to be closed
	* \brief Then print the operation the screen
	*/
	void Close();
	/**
	* \brief Pure virtual function EjectMedia
	* \brief This function definite must derivated class from this class.
	*/
	virtual void EjectMedia() = 0;
	/**
	* \brief Pure virtual function Forward
	* \brief This function definite must derivated class from this class.
	*/
	virtual	void Forward() = 0;
	/**
	* \brief Pure virtual MounthMedia
	* \brief This function definite must derivated class from this class.
	*/
	virtual void MounthMedia(const string&) = 0;
	/**
	* \brief This function is used when the player is wanted to be opened
	* \brief Then print the operation the screen
	*/
	void Open();
	/**
	* \brief This function is used when the player is wanted to be paused
	* \brief Then print the operation the screen
	*/
	void Pause();
	/**
	* \brief This function is used when the player is wanted to be played
	* \brief Then print the operation the screen
	*/
	void Play();
	/**
	* \brief Player constructor contain volumelevel info
	*/
	Player(int);
	/**
	* \brief This function is used when the player is wanted to be Stopped
	* \brief Then print the operation the screen
	*/
	void Stop();
	/**
	* \brief Virtual function VolumeDown if you add any operation on derivated classes, can be extensibled
	* \brief This function contain integer amount.This function is used when the player is wanted to be volume down  
	* \param decreasing amount
	*/
	virtual void VolumeDown(int);
	/**
	* \brief Virtual function VolumeUp if you add any operation on derivated classes, can be extensibled
	* \brief This function contain integer amount.This function is used when the player is wanted to be volume up
	* \brief If Volume reach max volume level.Volume level decrease to half
	* \param increasing amount
	*/
	virtual void VolumeUp(int);
	/**
	* \brief Player destructor
	*/
	~Player();
};
#endif 
