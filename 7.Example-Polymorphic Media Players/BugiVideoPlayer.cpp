#include<iostream>
#include<string>
#include"BugiVideoPlayer.h"
using namespace std;
void BugiVideoPlayer::EjectMedia() {
	if (VideoPlayer::supportedFormatCount == 1)
		cout << "MusicPlayer :  Ejecting the media : " << Player::mediaName << endl;
	cout << "BugiVideoPlayer : Media Player crushed!" << endl;
}
BugiVideoPlayer::BugiVideoPlayer(int maxVolumeLevel1, string *supportedFormats1, int supportedFormatCount1) :VideoPlayer(maxVolumeLevel1, supportedFormats1, supportedFormatCount1) {
}
BugiVideoPlayer::~BugiVideoPlayer() {}