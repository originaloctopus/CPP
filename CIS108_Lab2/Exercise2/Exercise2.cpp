#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{

	string book_title, name_author;
	unsigned short year_publish, book_age; //how could i get a negative char?
	short pg_count = 0;

	cout << "title \n";
	getline(cin, book_title);
	cout << "author \n";
	getline(cin, name_author);
	cout << "publish year \n";
	cin >> year_publish;
	cout << "book pages \n";
	cin >> pg_count;

	constexpr int current_year = 2019;

	book_age = current_year - year_publish;
		
	if (book_age < 10)
		cout << "This book is younger than ten years old. \n";
	else
		cout << "This book is at least ten years old. \n";
	cout << "This book is " << book_age <<" years old. \n";

	if (pg_count < 100)
		cout << "This book is short in length. \n";
	else if (pg_count >= 100 && pg_count <= 300)
		cout << "This book is medium in length. \n";
	else
		cout << "This book is loooooong in length. \n";

}

