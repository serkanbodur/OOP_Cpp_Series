#include <iostream>
#include "IPod.h"
#include "Walkman.h"
#include "BugiVideoPlayer.h"
#include "VLCVideoPlayer.h"
using namespace std;
void TEST_ForAll(Player* player, const string& mediaName) {
	player->Open();
	player->MounthMedia(mediaName);
	player->VolumeUp(20);
	player->VolumeDown(10);
	player->Play();
	player->Pause();
	player->Stop();
	player->Play();
	player->Forward();
	player->BackWard();
	player->EjectMedia();
	player->Close();
}
int main() {
	cout << "+---------+" << endl
		<< "| WALKMAN |" << endl
		<< "+---------+" << endl;
	string walkmanFormats[] = { "mp3" };
	Player* walkman = new Walkman(70, walkmanFormats, 1);
	TEST_ForAll(walkman, "test.mp3");
	cout << "+------+" << endl
		<< "| IPOD |" << endl
		<< "+------+" << endl;
	string iPodFormats[] = { "mp3","wav" };
	MusicPlayer* ipod = new IPod(100, iPodFormats, 2);
	TEST_ForAll(ipod, "test.mp3");
	cout << "+-------------------+" << endl
		<< "| BUGI VIDEO PLAYER |" << endl
		<< "+-------------------+" << endl;
	string bugiVideoFormats[] = { "mp4" };
	BugiVideoPlayer* bugiVideoPlayer = new BugiVideoPlayer(100, bugiVideoFormats, 1);
	TEST_ForAll(bugiVideoPlayer, "test.mp4");

	cout << "+------------------+" << endl
		<< "| VLC VIDEO PLAYER |" << endl
		<< "+------------------+" << endl;
	string vlcVideoFormats[] = { "mp4","avi" };
	Player* vlcVideoPlayer = new VLCVideoPlayer(100, vlcVideoFormats, 2);
	TEST_ForAll(vlcVideoPlayer, "test.mp4");
	system("pause");
	return 0;
}