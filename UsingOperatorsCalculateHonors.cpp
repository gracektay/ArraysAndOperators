/*
Grace Tay
IT-312 Software Development with C++.Net
8/31/2016
2-1 Programming Assignment: Using Operators to Calculate GPA and Honors

Summary: I have a separate function (double convertGrade), this way I only have to type it out once. This function checks if a character is equivalent
to A, B, C, D, or F and returns a value based on the letter. In the main function I ask the user for their grades. Each input is stored as a grade 
(grade1, grade 2, grade 3, grade4) and immediately passed into the convertGrade function. It then increments the sumOfGrades. After all four grades
are inputted and converted, the total sum is divided by four. The result is the studentGPA. Then there are boolean variables declared for summaCumLaude,
magnaCumLaude, cumLaude, and withoutHonors. Relational operators are used to compare the honor system with the studentGPA. True will be stored if the 
comparison is indeed true, otherwise it will be false. The user is then told true or false regarding each honor class.
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

//Custom function to convert the character grade (A, B, C, D, F) to respective double value
double convertGrade(char grade) {

	if (grade == 'A') {
		return 4.0;
	}
	else if (grade == 'B') {
		return 3.0;
	}
	else if (grade == 'C') {
		return 2.0;
	}
	else if (grade == 'D') {
		return 1.0;
	}
	else { //if all else fails, the student received 'F' which adds no value
		return 0.0;
	}

}

int _tmain(int argc, _TCHAR* argv[]) {

	//initalize variables. Make sure sumOfGrades is set to 0.0 so it increments correctly.
	double sumOfGrades = 0.0;
	char grade1, grade2, grade3, grade4;
	double studentGPA;

	//Ask for grades and use the inputted grade as the parameter for the called function.
	cout << "Please input your first grade (A, B, C, D, or F):" << endl;
	cin >> grade1;
	sumOfGrades += convertGrade(grade1);

	cout << "Please input your second grade (A, B, C, D, or F):" << endl;
	cin >> grade2;
	sumOfGrades += convertGrade(grade2);

	cout << "Please input your third grade (A, B, C, D, or F):" << endl;
	cin >> grade3;
	sumOfGrades += convertGrade(grade3);

	cout << "Please input your fourth grade (A, B, C, D, or F):" << endl;
	cin >> grade4;
	sumOfGrades += convertGrade(grade4);
	
	//Calculate GPA. Average is the sum of the grades divided by the amount of grades, which is 4 in this case.
	studentGPA = sumOfGrades / 4;

	cout << "Your GPA is: " << studentGPA << endl;

/*At this point, the first test passed, which is an accurate calculation of the GPA. Since the test passed, we can move on to check the honor level.
Boolean values declared for each honor level, relational operators are used to compare honor level ranges with studentGPA.
*/
	bool summaCumLaude = studentGPA >= 3.9;
	bool magnaCumLaude = studentGPA >= 3.8 && studentGPA < 3.9;
	bool cumLaude = studentGPA >= 3.65 && studentGPA < 3.8;
	bool withoutHonors = studentGPA < 3.65;

//Print out each statement and use the boolean value to complete the statement.
	cout << "Graduating summa cum laude is "
		<< boolalpha //This allows true or false to be printed
		<< summaCumLaude << endl;
	
	cout << "Graduating magna cum laude is "
		<< boolalpha
		<< magnaCumLaude << endl;
	
	cout << "Graduating cum laude is "
		<< boolalpha
		<< cumLaude << endl;
	
	cout << "Graduating without honors is "
		<< boolalpha
		<< withoutHonors << endl;

	return 0;

}