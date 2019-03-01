#include<iostream>
#include<string>
#include"VLCVideoPlayer.h"
using namespace std;
void VLCVideoPlayer::BackWard()
{
	if (VideoPlayer::supportedFormatCount == 2)
		cout << "VLCVideoPlayer : Backward the music " << Player::mediaName << endl;
}
void VLCVideoPlayer::Forward()
{
	if (VideoPlayer::supportedFormatCount == 2)
		cout << "VLCVideoPlayer : Forward the music " << Player::mediaName << endl;
}
VLCVideoPlayer::VLCVideoPlayer(int maxVolumeLevel1, string *supportedFormats1, int supportedFormatCount1) :VideoPlayer(maxVolumeLevel1, supportedFormats1, supportedFormatCount1) {
}
VLCVideoPlayer::~VLCVideoPlayer() {}
void VLCVideoPlayer::VolumeDown(int amount)
{
	Player::volumeLevel = Player::volumeLevel - amount;
	cout << "Player : Volume Level : " << Player::volumeLevel << endl;
	cout << "VLCVideoPlayer : Adjusting Equaliser " << endl;
}
void VLCVideoPlayer::VolumeUp(int amount)
{
	Player::maxVolumeLevel = Player::volumeLevel + amount;
	if (Player::maxVolumeLevel > Player::volumeLevel)
		Player::volumeLevel /= 2;
	Player::volumeLevel = Player::volumeLevel + amount;
	cout << "Player : Volume Level : " << Player::volumeLevel << endl;
	cout << "VLCVideoPlayer : Adjusting Equaliser " << endl;
}