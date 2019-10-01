#include "pch.h" 
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int userAge;
	int newAge; //music;
	float currentTemp = 0, tempC = 0;


	cout << "Enter your age. Press enter when done. \n";
	cin >> userAge;

	newAge = userAge + 10;
	cout << "In ten years you'll be " << newAge << ", but where will you have explored? \n";

	cout << "Enter the current temperature in Fahrenheit. Press enter when done. \n";
	cin >> currentTemp;

	/* Doesn't work, not sure why.
	tempC = ((currentTemp-32)*(5/9));
	cout << "The current temperature in Celsius is " << tempC << ". Press enter to close window. \n";
	*/

	tempC = ((currentTemp - 32) * 5 / 9);
	cout << "C = " << tempC << ". \n";

	return 0;
}