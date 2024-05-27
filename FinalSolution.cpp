/** \file FinalSolution.cpp
* \brief A program for a final exam 
* \author Oleg Rubenchik
* \data 27/05/2024
*/
#include <iostream>
#include <cassert>
using namespace std;

//GLOBAL VARIABLES
const int MAX_COL = 5;
//FUNCTION PROTOTYPES


//MAIN
int main() {
	double matrix[3][5];
	int choice = -1;
	while (choice != 0) {
		cout << "\n0) Exit\n";
		cout << "1) Enter data in matrix (range -3.5 to 1.5)\n";
		cout << "2) Show data in matrix\n";
		cout << "3) Sum of all negative numbers (i.e. < 0)\n";
		cout << "Please enter chice: ";
		cin >> choice;

		switch (choice) {
		case 0:
			cout << "\nHave a great day! :)\n";
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		}
	}

	return 0;
}

//FUNCTIONS