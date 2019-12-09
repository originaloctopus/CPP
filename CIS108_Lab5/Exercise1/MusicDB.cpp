#include <stdexcept>
#include <fstream>
#include "MusicDB.h"
#include <vector>
#include ""

using namespace std;

const string DatabaseFileName = "Music.db";

namespace MusicDatabase
{
	vector<Song> songDatabase;

	// Function to add a song to the MusicDatabase
	void addSongToDatabase(Song song)
	{
		songDatabase.push_back(song);
	}

	// Function to ask how many songs are in the MusicDatabase
	int getTotalSongsInDatabase()
	{
		return songDatabase.size();
	}

	// Function to get a song at a specific location in the MusicDatabase
	Song getSongAtIndex(int index)
	{
		if (index < getTotalSongsInDatabase())
		{
			return songDatabase[index];
		}
		else
		{
			throw new out_of_range("Invalid index into MusicDatabase");
		}
	}

	//Function to load the database from file
	void loadDatabase()
	{
		ifstream file(DatabaseFileName, ios_base::binary);

		int count = 0;
		file >> count;

		for (int x = 0; x < count; x++)
		{
			Song song;
			file.read((char*)&song, sizeof(Song));
			songDatabase.push_back(song);
		}

		file.close ();
	}

	//Function to save the database to file
	void saveDatabase()
	{
		ofstream file(DatabaseFileName, ios_base::trunc | ios_base::binary);
		file << getTotalSongsInDatabase();
		
		auto itr = songDatabase.begin();
		while (itr != songDatabase.end())
		{
			Song song = *itr;

			/*
			file << song.title;
			file << song.artist;
			file << song.album;
			file << song.track;
			file << song.year;
			file << song.genre;
			*/

			file.write((const char*)&song, sizeof(Song));
			itr++;
		}
		file.close();
	}

	
}
