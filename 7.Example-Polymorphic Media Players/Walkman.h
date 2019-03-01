#pragma once
#include<iostream>
#include<string>
#include"MusicPlayer.h"
using namespace std;
/**
* \@File Walkman.h
* \@Author Serkan Bodur
* \brief This class is derivated from MusicPlayer class
* \brief This class for general function of Walkman
*/
class Walkman :public MusicPlayer {

public:
	/**
	* \brief If supportedformatcount is 1, this function print warning message
	*/
	void EjectMedia();
	/**
	* \brief Walkman constructor
	* \param max volume level
	* \param supported formats pointer
	* \param supported format count
	*/
	Walkman(int, string*, int);
	/**
	* \brief Walkman destructor
	*/
	~Walkman();
};

