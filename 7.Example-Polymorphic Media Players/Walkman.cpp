#include<iostream>
#include<string>
#include"Walkman.h"
using namespace std;
void Walkman::EjectMedia() {
	if (MusicPlayer::supportedFormatCount == 1)
		cout << "MusicPlayer :  Ejecting the media : " << Player::mediaName << endl;
	cout << "Walkman : Closing the carriage" << endl;
}
Walkman::Walkman(int maxVolumeLevel1, string *supportedFormats1, int supportedFormatCount1) :MusicPlayer(maxVolumeLevel1, supportedFormats1, supportedFormatCount1) {
}
Walkman::~Walkman() {}