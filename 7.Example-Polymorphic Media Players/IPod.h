#pragma once
#include<iostream>
#include<string>
#include"MusicPlayer.h"
using namespace std;
/**
* \@File IPod.h
* \@Author Serkan Bodur
* \brief This class is derivated from MusicPlayer class
* \brief This class for general function of IPod
*/
class IPod :public MusicPlayer {
public:
	/**
	* \brief Backward operation function
	* \brief If supportedformatcount is 2,this function print warning message
	*/
	void BackWard();
	/**
	* \brief Virtual function Forward operation
	* \brief If supportedformatcount is 2,this function print forward operation
	*/
	void Forward();
	/**
	* \brief IPod constructor
	* \param max volume level
	* \param supported formats pointer
	* \param supported format count
	*/
	IPod(int, string*, int);
	/**
	* \brief This function contain integer amount.This function is used when the player is wanted to be volume down
	* \param decreasing amount
	*/
	void VolumeDown(int);
	/**
	* \brief This function contain integer amount.This function is used when the player is wanted to be volume down
	* \brief If Volume reach max volume level.Volume level decrease to half
	* \param increasing amount
	*/
	void VolumeUp(int);
	/**
	* \brief IPod destructor
	*/
	~IPod();
};
