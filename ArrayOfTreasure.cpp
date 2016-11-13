/*
Grace Tay
IT-312 Software Development with C++.Net
9/6/2016
3-2 Programming Assignment: An Array of Treasure

Summary: I created a boolean array with five elements all initialized to false. This is our map. I then tell the user to pick a number 1-5, which 
represents each treasure chest. I store the input into the foundTreasureChest variable, initialized at the beginning of the program. I use the input and
add it to the array (which value is 0). Because the index starts at 0, I offset the equation by subtracting foundTreasureChest by 1. (Because of PEMDAS, 
(parentheses first!), the foundTreasureChest is just treated as the value inputted by the user subtracted by 1.) Instead of an array operator '[]' to 
specify an index, I use a pointer dereference operator to update the array to true for the chest just found. Then, using a while loop, I print out to the 
player if he or she levels up based on the Boolean of the fifth chest.

*/

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[]) {

	int foundTreasureChest;
	bool treasureChestArray[5] = { false, false, false, false, false };

	//Ask for input then stores the inputted value
	cout << "Welcome to Array of Treasure. This is a map with five treasure chests. " << endl;
	cout << "Guess which chest has the token, input a number between 1 and 5." << endl;
	cin >> foundTreasureChest;

	//Uses pointers to update array to true each time a chest is found.
	*(treasureChestArray + (foundTreasureChest - 1)) = true; //Dereference operator '*' will fetch value of variable being pointed to

	while (*(treasureChestArray + 4) == false) { //Checks to see if the fifth chest has been opened.

		cout << "No token! Try again. Input the number (1-5) of the chest you have found." << endl;
		cin >> foundTreasureChest;

		*(treasureChestArray + (foundTreasureChest - 1)) = true;
	}

	cout << "Congrats, you found the token! You level up!" << endl;

	return 0;
}

