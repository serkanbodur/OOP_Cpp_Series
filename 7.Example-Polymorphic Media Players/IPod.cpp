#include<iostream>
#include<string>
#include"IPod.h"
using namespace std;
void IPod::BackWard()
{
	if (MusicPlayer::supportedFormatCount == 2)
		cout << "IPod : Backward the music " << Player::mediaName << endl;
}
void IPod::Forward()
{
	if (MusicPlayer::supportedFormatCount == 2)
		cout << "IPod : Forward the music " << Player::mediaName << endl;
}
IPod::IPod(int maxVolumeLevel1, string *supportedFormats1, int supportedFormatCount1) :MusicPlayer(maxVolumeLevel1, supportedFormats1, supportedFormatCount1) {
}
IPod::~IPod() {}
void IPod::VolumeDown(int amount)

{
	Player::volumeLevel = Player::volumeLevel - amount;
	cout << "Player : Volume Level : " << Player::volumeLevel << endl;
	cout << "IPod : Adjusting Equaliser " << endl;

}
void IPod::VolumeUp(int amount)
{
	Player::maxVolumeLevel = Player::volumeLevel + amount;
	if (Player::maxVolumeLevel > Player::volumeLevel)
		Player::volumeLevel /= 2;
	Player::volumeLevel = Player::volumeLevel + amount;
	cout << "Player : Volume Level : " << Player::volumeLevel << endl;
	cout << "IPod : Adjusting Equaliser " << endl;
}