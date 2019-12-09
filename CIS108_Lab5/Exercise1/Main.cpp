#include <iostream>
#include <string>
#include "MusicDB.h"

using namespace std;

string getCommandFromUser();

void handleAddCommand();
void handleListCommand();
void handleSaveCommand();
void handleHelpCommand();

Genre convertStringToGenre(string genre_string);
string convertGenreToString(Genre genre_enum);



int main()
{
	try {
		MusicDatabase::loadDatabase();
	}
	catch (...)
	{
		//these aren't the droids your'e looking for
	}
	
	handleHelpCommand();

	bool should_exit = false;

	while (!should_exit)
	{
		string command = getCommandFromUser();
		if (command == "add")
		{
			handleAddCommand();
		}
		else if (command == "list")
		{
			handleListCommand();
		}
		else if (command == "save")
		{
			handleSaveCommand();
		}
		else if (command == "help")
		{
			handleHelpCommand();
		}
		else if (command == "exit")
		{
			should_exit = true;
		}
		else
		{
			cout << "Invalid command. Type 'help' for command list." << endl;
		}
	}
}

string getCommandFromUser()
{
	string command;

	cout << "> ";
	getline(cin, command);

	return command;
}

void handleAddCommand()
{
	Song new_song;

	cout << "Enter song title: ";
	cin.getline(new_song.title, MAX_CHARS_PER_TITLE);

	cout << "Enter song artist: ";
	cin.getline(new_song.artist, MAX_CHARS_PER_ARTIST);

	cout << "Enter song album: ";
	cin.getline(new_song.album, MAX_CHARS_PER_ALBUM);

	cout << "Enter the track number: ";
	cin >> new_song.track;

	cout << "Enter the release year: ";
	cin >> new_song.year;

	string genre;
	cout << "Enter the genre: ";
	cin.ignore();
	getline(cin, genre);

	new_song.genre = convertStringToGenre(genre);

	MusicDatabase::addSongToDatabase(new_song);
}

void handleListCommand()
{
	int total_songs = MusicDatabase::getTotalSongsInDatabase();

	cout << "There are " << total_songs << " songs in the database." << endl;

	for (int idx = 0; idx < total_songs; idx++)
	{
		Song song = MusicDatabase::getSongAtIndex(idx);

		cout << "Title:        " << song.title << endl;
		cout << "Artist:       " << song.artist << endl;
		cout << "Album:        " << song.album << endl;
		cout << "Track #:      " << song.track << endl;
		cout << "Release Year: " << song.year << endl;
		cout << "Genre:        " << convertGenreToString(song.genre) << endl;
		cout << endl;
	}
}

void handleSaveCommand()
{
	MusicDatabase::saveDatabase();

}

void handleHelpCommand()
{
	cout << "Music Database Command Options:" << endl;
	cout << "  add  - Add a new song to the database" << endl;
	cout << "  list - List the songs in the database" << endl;
	cout << "  save - Save the songs to the database" << endl;
	cout << "  help - Display this menu" << endl;
	cout << "  exit - Exit the program" << endl;
}

Genre convertStringToGenre(string genre_string)
{
	Genre genre;

	if (genre_string == "blues")
	{
		genre = Genre::Blues;
	}
	else if (genre_string == "country")
	{
		genre = Genre::Country;
	}
	else if (genre_string == "electronic")
	{
		genre = Genre::Electronic;
	}
	else if (genre_string == "folk")
	{
		genre = Genre::Folk;
	}
	else if (genre_string == "hip hop")
	{
		genre = Genre::HipHop;
	}
	else if (genre_string == "jazz")
	{
		genre = Genre::Jazz;
	}
	else if (genre_string == "latin")
	{
		genre = Genre::Latin;
	}
	else if (genre_string == "pop")
	{
		genre = Genre::Pop;
	}
	else if (genre_string == "rock")
	{
		genre = Genre::Rock;
	}

	return genre;
}

string convertGenreToString(Genre genre_enum)
{
	string genre;

	switch (genre_enum)
	{
	case Blues: genre = "Blues"; break;
	case Country: genre = "Country"; break;
	case Electronic: genre = "Electronic"; break;
	case Folk: genre = "Folk"; break;
	case HipHop: genre = "Hip Hop"; break;
	case Jazz: genre = "Jazz"; break;
	case Latin: genre = "Latin"; break;
	case Pop: genre = "Pop"; break;
	case Rock: genre = "Rock"; break;
	}

	return genre;
}

