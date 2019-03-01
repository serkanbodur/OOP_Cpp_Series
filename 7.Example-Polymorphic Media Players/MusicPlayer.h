#pragma once
#ifndef MUSIC_PLAYER
#include<iostream>
#include<string>
#include"Player.h"
using namespace std;
/**
* \@File MusicPlayer.h
* \@Author Serkan Bodur
* \brief This class is derivated from Player class
* \brief This class for general function of MusicPlayer
*/
class MusicPlayer :public Player {
protected:
	/**
	* \brief supported format count attribute
	*/
	int supportedFormatCount;
	/**
	* \brief supported formats attribute
	*/
	string *supportedFormats;
public:
	/**
	* \brief Virtual function Backward operation
	* \brief If supportedformatcount is 1,this function print warning message
	*/
	virtual void BackWard();
	/**
	* \brief If supportedformatcount is 2, this function print warning message
	*/
	void EjectMedia();
	/**
	* \brief Virtual function Forward operation
	* \brief If supportedformatcount is 1,this function print forward operation
	*/
	virtual void Forward();
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
	MusicPlayer(int, string*, int);
	/**
	* \brief Music Player destructor
	*/
	~MusicPlayer();
};
#endif
