#pragma once
#include<iostream>
#include<string>
#include"VideoPlayer.h"
using namespace std;
/**
* \@File BugiVideoPlayer.h
* \@Author Serkan Bodur
* \brief This class is derivated from VideoPlayer class
* \brief This class for general function of BugiVideoPlayer
*/
class BugiVideoPlayer :public VideoPlayer {
public:
	/**
	* \brief BugiVideoPlayer constructor
	* \param max volume level
	* \param supported formats pointer
	* \param supported format count
	*/
	BugiVideoPlayer(int, string*, int);
	/**
	* \brief If supportedformatcount is 1, this function print warning message
	*/
	void EjectMedia();
	/**
	* \brief BugiVideoPlayer destructor
	*/
	~BugiVideoPlayer();
};
