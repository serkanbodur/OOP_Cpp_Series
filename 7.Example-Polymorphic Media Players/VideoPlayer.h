#pragma once
#ifndef VIDEO_PLAYER
#include<iostream>
#include<string>
#include"Player.h"
using namespace std;
/**
* \@File VideoPlayer.h
* \@Author Serkan Bodur
* \brief This class is derivated from Player class
* \brief This class for general function of VideoPlayer
*/
class VideoPlayer :public Player {
protected:
	/**
	* \brief supported formats attribute
	*/
	string*supportedFormats;
	/**
	* \brief supported format count attribute
	*/
	int supportedFormatCount;
public:
	/**
	* \brief Virtual function Backward operation
	* \brief If supportedformatcount is 1,this function print warning message
	*/
	void BackWard();
	/**
	* \brief If supportedformatcount is 2, this function print warning message
	*/
	void EjectMedia();
	/**
	* \brief Virtual function Forward operation
	* \brief If supportedformatcount is 1,this function print forward operation
	*/
	void Forward();
	/**
	* \brief This function set Player medianame attribute and print message about media informations
	* \param Media name
	*/
	void MounthMedia(const string&);
	/**
	* \brief Music Player constructor
	* \param max volume level
	* \param supported formats pointer
	* \param supported format count
	*/
	VideoPlayer(int, string*, int);
	/**
	* \brief Music Player destructor
	*/
	~VideoPlayer();

};

#endif
