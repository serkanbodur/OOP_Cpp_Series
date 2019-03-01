#include<iostream>
#include<string>
#include"MusicPlayer.h"
using namespace std;
void MusicPlayer::BackWard() {
	if (supportedFormatCount == 1)
		cout << "MusicPlayer : Does not support the backward operation" << endl;
}
void MusicPlayer::Forward() {
	if (supportedFormatCount == 1)
		cout << "MusicPlayer : Does not support the forward operation" << endl;
}
void MusicPlayer::EjectMedia() {
	if (supportedFormatCount == 2)
		cout << "MusicPlayer :  Ejecting the media : " << Player::mediaName << endl;
}
void MusicPlayer::MounthMedia(const string&mediaName1) {
	Player::mediaName = mediaName1;
	cout << "MusicPlayer : " << "Trying to mount the media... " << endl;
	cout << "MusicPlayer : " << "Media is supported and playable" << endl;
}
MusicPlayer::MusicPlayer(int maxVolumeLevel1, string *supportedFormats1, int supportedFormatCount1) :Player(maxVolumeLevel1), supportedFormats(supportedFormats1), supportedFormatCount(supportedFormatCount1) {
}
MusicPlayer::~MusicPlayer() {}