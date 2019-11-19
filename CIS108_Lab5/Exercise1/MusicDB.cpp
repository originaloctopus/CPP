#include "MusicDB.h"
#include "Song.h"
#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
using namespace songStruc;

void add() {

	Song a_Song;
	cout << "Enter song's title:\n";
	cin.getline(a_Song.title, 64);

	cout << "Enter song's artist:\n";
	cin.getline(a_Song.artist, 64);

	cout << "Enter song's album:\n";
	cin.getline(a_Song.album, 64);

	/*
	cout << "Enter song's track number:\n";
	cin.getline(a_Song.track_Num, 64);

	cout << "Enter song's release year:\n";
	cin.getline(a_Song.releaseYear, 64);
	
	
	Song a_Song;

	std::fstream file;
	file.open("SongDB.text", ios::in | ios::app | ios::binary);
	file.read((char*)&a_Song, sizeof(a_Song));
	file.close();
	*/
};

void load() {

	Song a_song;

	std::fstream file("SongDB.bin", ios::out | ios::binary);
	file.write((char*)&a_song, sizeof(a_song));
	file.close();

};

void save() {

	Song a_song;

	std::fstream file("SongDB.bin", ios::out | ios::binary);
	file.write((char*)&a_song, sizeof(a_song));
	file.close();

};

void help() {
	cout << "To add songs type add and press enter.\n"
		"To list songs type list and press enter.\n"
		"To save songs type save and press enter.\n"
		"To see this menu again type help and press enter.\n "
		"To exit type exit and press enter.\n";
};

