// penzvalto.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

	string mit = "";
	string mire = "";
	float ertek = 0;
	float veg_osszeg = 0;

	cout << "What currency would you like to change from the following?: USD, HUF, EUR?" << endl;
	cin >> mit;

	transform(mit.begin(), mit.end(), mit.begin(), toupper);
	
	if (mit != "USD" && mit != "HUF" && mit != "EUR") {
		do
		{

			cout << "You've written it wrong, please try again!" << endl;
			cin >> mit;

			transform(mit.begin(), mit.end(), mit.begin(), toupper);

		} while (mit != "USD" && mit != "HUF" && mit != "EUR");
	}
	cout << "What currency would you like to change to from the following?: USD, HUF, EUR?" << endl;
	cin >> mire;

	transform(mire.begin(), mire.end(), mire.begin(), toupper);

	if (mire != "USD" && mire != "HUF" && mire != "EUR")
	{
		do {

			cout << "You've written it wrong, please try again!" << endl;
			cin >> mire;

			transform(mire.begin(), mire.end(), mire.begin(), toupper);

		} while (mire != "USD" && mire != "HUF" && mire != "EUR");
	}
	cout << "Please enter how muchy " << mit << " would you like to change (only 0 or positive numbers):" << endl;
	cin >> ertek;
	if (ertek <= 0)
	{
		do {
			cout << "You've written it wrong, please try again!" << endl;
			cin >> ertek;

		} while (ertek <= 0);
	}

	if (mit == "USD" && mire == "HUF")
	{
		veg_osszeg = ertek * 280;

	} 
	else if (mit == "USD" && mire == "EUR") {
		
		veg_osszeg = ertek * 0.8;

	} 
	else if (mit == "USD" && mire == "USD") {

		veg_osszeg = ertek;

	}
	else if (mit == "EUR" && mire == "EUR") {

		veg_osszeg = ertek;

	}
	else if (mit == "HUF" && mire == "HUF") {

		veg_osszeg = ertek;

	}
	else if (mit == "EUR" && mire == "USD") {

		veg_osszeg = ertek * 1.1;

	}
	else if (mit == "EUR" && mire == "HUF") {

		veg_osszeg = ertek * 318;

	}
	else if (mit == "HUF" && mire == "EUR") {

		veg_osszeg = ertek * 0.0031;

	}
	else if (mit == "HUF" && mire == "USD") {

		veg_osszeg = ertek * 0.0035;

	}
	

	cout << "Result of the change: " << veg_osszeg << " " << mire << endl;

	 		

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
