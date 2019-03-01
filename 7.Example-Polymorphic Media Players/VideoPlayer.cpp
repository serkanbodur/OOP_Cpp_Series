#include<iostream>
#include<string>
#include"VideoPlayer.h"
using namespace std;
void VideoPlayer::BackWard() {
	if (supportedFormatCount == 1)
		cout << "VideoPlayer : Does not support the backward operation" << endl;
}
void VideoPlayer::Forward() {
	if (supportedFormatCount == 1)
		cout << " VideoPlayer : Does not support the forward operation" << endl;
}
void VideoPlayer::EjectMedia() {
	if (supportedFormatCount == 2)
		cout << "VideoPlayer : Ejecting the media : " << Player::mediaName << endl;
}
void VideoPlayer::MounthMedia(const string&mediaName1) {
	Player::mediaName = mediaName1;
	cout << "VideoPlayer : " << "Trying to mount the media... " << endl;
	cout << "VideoPlayer : " << "Media is supported and playable" << endl;
}
VideoPlayer::VideoPlayer(int maxVolumeLevel1, string *supportedFormats1, int supportedFormatCount1) :Player(maxVolumeLevel1), supportedFormats(supportedFormats1), supportedFormatCount(supportedFormatCount1) {
}
VideoPlayer::~VideoPlayer() {}