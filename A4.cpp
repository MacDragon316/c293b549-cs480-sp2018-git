// File Name:assignment1.cpp
// Author:Lane McGuire
// Student ID:C293B549
// Assignment Number:1

#include <iostream>
using namespace std;
int main()
{
	int weight, height, age, bmr;										//Initialize variables
	char sex;															//Initialize sex as a character
	cout << "What is your weight in pounds?\n";
	cin >> weight;														//Ask user for their weight
	cout << "What is your height in inches?\n";
	cin >> height;														//Ask user for their height
	cout << "What is your age?\n";
	cin >> age;															//Ask user for their age
	cout << "Are you (m)ale or (f)emale?\n";
	cin >> sex;															//Ask user for their gender
	
	if (sex == 'm' || sex == 'M') {										//Preform a check for gender
		bmr = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);		//and run corresponding equation
	}
	else if (sex == 'f' || sex == 'F') {
		bmr = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
	}
	else {
		cout << "Incorrect gender entered.\nPlease try again.\n";
		return 0;
	}
	
	cout << "Your BMR is ";
	cout << bmr;														//Calculate user's BMR
	cout << ". You can eat ";
	cout << bmr / 230;													//Calculate number of bars.
	cout << " chocolate bars.\n";										//Number of chocolate bars is rounded down because it does not																		
	cout << "But that is not healthy.\n";								//make sense to me to open another bar and only eat 10% of the bar.
	
	return 0;
}
