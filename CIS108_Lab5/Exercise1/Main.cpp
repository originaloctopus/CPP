
#include "Song.h"
#include "MusicDB.h"
//#include converter.h & make converter.cpp
#include <string>
#include <iostream>

#include <fstream>

//focus on the layout
//create support for abde, don't worry about file i/o or saving

#include <stdio.h>
using namespace std;
using namespace songStruc;

/* 
	input = (read) = load
	output = (write) = save
*/



Genre convertStringtoGenre(string genre)
{
	Genre return_value;

	/*transform(genre.begin(), genre.end(), genre.begin(),
		[](unsigned char c) {return tolower(c); });
		*/

	if (genre == "blues") {
		return_value = Blues;
	} else if (genre == "country"){
		return_value = Country;
	}
	else if (genre == "electronic") {
		return_value = Electronic;
	}
	else if (genre == "hiphop") {
		return_value = Hiphop;
	}
	else if (genre == "jazz") {
		return_value = Jazz;
	}
	else if (genre == "latin") {
		return_value = Latin;
	}
	else if (genre == "pop") {
		return_value = Pop;
	}
	else if (genre == "rock") {
		return_value = Rock;
	}
	return return_value;
}

string convertGenretoString(Genre genre) {
	string return_value;

	switch (genre) {
		case Blues: 
			return_value = "Blues";
			break;
		case Country:
			return_value = "Country";
			break;
		case Electronic:
			return_value = "Electronic";
			break;
		case Hiphop:
			return_value = "Hiphop";
			break;
		case Jazz:
			return_value = "Jazz";
			break;
		case Latin:
			return_value = "Latin";
			break;
		case Pop:
			return_value = "Pop";
			break;
		case Rock:
			return_value = "Rock";
			break;

	
	}
	return return_value;
}

int main() {

	string input;

	do {
		
		help();

		getline(cin, input);

		if (input == "add") {
			cout << "Add a song to the music database:\n";
			add();

		}
		/*
		string u_Track_Num;
		puts("Enter song's track number: \n");
		getline(cin, u_Track_Num);
		int int_Track_Num = stoi(u_Track_Num);
		int_Track_Num = a_Song.track_Num;
		cout << "Added: " + u_Album << endl;


		string release_Year;
		puts("Enter song's release year: \n");
		getline(cin, release_Year);
		cout << cin.rdbuf();

		string genre;
		puts("Enter song's genre: \n");
		getline(cin, genre);
		cout << cin.rdbuf();
		
		}
		*/
	
	else if (input == "load") {
		load();
		cout << "load. \n";
	}

	else if (input == "save") {
		save();
		cout << "save. \n";
	}

	else if (input == "help") {
		help();
		cout << "help. \n";
	}
	else if (input == "exit") {
		cout << "exit. \n";
		return 0;
	}


} while (input != "exit");



/*
	int input;
		puts("To add songs type add and press enter. \nTo list songs type list and press enter. \nTo save songs type save and press enter. \nTo exit type x and press enter. \nTo see this menu again type help and press enter. \n");
		do {
			input = getchar();
			putchar(input);


			if (input == 'add') {
				add();
				cout << "add. \n";
			}
			else if (input == 'load') {
				load();
				cout << "load. \n";
			}

			else if (input == 'save') {
				save();
				cout << "save. \n";
			}

			else if (input == 'help') {
				help();
				cout << "help. \n";
			}

		} while (input != 'x');
	}
	


	} while (input != "Exit");

	*/

}