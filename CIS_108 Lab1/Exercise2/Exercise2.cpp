// 

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string user_Last_Name, user_First_Name;
	int user_Age, confidence, dog_Age;

    cout << "What is your name?\n" << endl ; 

		cout << "Enter your first name (followed by pressing 'enter'): \n";
		cin >> user_First_Name;

		cout << "Enter your last name: \n";
		cin >> user_Last_Name;

		cout << "Enter your age: \n";
		cin >> user_Age;

		cout << "What is your confidence in programmers between 0-100%? \n";
		cin >> confidence;

		dog_Age = user_Age * 7;
		cout << "Hi, " << user_First_Name << " " << user_Last_Name << " your age in dog years is " << dog_Age << ". \n";

		if (confidence < 50)
			cout << "I agree programmers can't be trusted! \n";
		else
			cout << "Writing good code takes hard work! \n";

		
}
