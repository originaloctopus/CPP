#include <vector>

#include "song.h"

namespace MusicDatabase
{
	// Function to add a song to the MusicDatabase
	void addSongToDatabase(Song song);

	// Function to ask how many songs are in the MusicDatabase
	int getTotalSongsInDatabase();

	// Function to get a song at a specific location in the MusicDatabase
	Song getSongAtIndex(int index);

	//Function to load the database from file
	void loadDatabase();

	//Function to save the database to file
	void saveDatabase();
}
