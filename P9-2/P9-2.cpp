#include <iostream>
using namespace std;

bool isSortedDecreasing(int values[6]);
bool isSortedIncreasing(int values[6]);
bool hasAdjacentDuplicates(int values[6]);
bool hasDuplicates(int values[6]);


int main() {

	int a[6];

	cout << "Enter 6 numbers: ";
	for (int i = 0; i < 6; i++) {
		cin >> a[i];
	}

	if (isSortedIncreasing(a)) {
		cout << endl << "The vaules are sorted in increasing value\n";
	}
	else {
		cout << endl << "The values are not sorted in increasing value.\n";
	}

	if (isSortedDecreasing(a)) {
		cout << endl << "The vaules are sorted in decreasing value\n";
	}
	else {
		cout << endl << "The values are not sorted in decreasing value.\n";
	}

	if (hasAdjacentDuplicates(a)) {
		cout << endl << "The vaules have 1 or more adjacent duplicates.\n";
	}
	else {
		cout << endl << "The values do not have 1 or more adjacent duplicates.\n";
	}

	if (hasDuplicates(a)) {
		cout << endl << "The vaules have 1 or more duplicates.\n";
	}
	else {
		cout << endl << "The values do not have 1 or more duplicates.\n";
	}
}

bool isSortedIncreasing(int values[6]) {
	int firstNumber = 0;
	int secondNumber = 1;
	for (int i = 0; i < 6; i++) {
		if (values[firstNumber] < values[secondNumber]) {
			firstNumber++;
			secondNumber++;
		}
	}
	if (secondNumber >= 6) {
		return true;
	}
	else {
		return false;
	}
	
}
bool isSortedDecreasing(int values[6]) {
	int firstNumber = 0;
	int secondNumber = 1;
	for (int i = 0; i < 6; i++) {
		if (values[firstNumber] > values[secondNumber]) {
			firstNumber++;
			secondNumber++;
		}
	}
	if (secondNumber >= 6) {
		return true;
	}
	else {
		return false;
	}
}
bool hasAdjacentDuplicates(int values[6]) {
	int firstNumber = 0;
	int secondNumber = 1;
	int counter = 0;
	for (int i = 0; i < 6; i++) {
		if (values[firstNumber] == values[secondNumber]) {
			counter++;

		}
		firstNumber++;
		secondNumber++;
	}
	if (counter > 0) {
		return true;
	}
	else {
		return false;
	}
}
bool hasDuplicates(int values[6]) {
	int firstNumber = 0;
	int secondNumber = 1;
	int counter = 0;
	for (int i = 0; i < 6; i++) {
		for (int i = 0; i < 6; i++) {
			if (values[firstNumber] == values[secondNumber]) {
				counter++;

			}
			secondNumber++;
		}
		secondNumber = 1;
		firstNumber++;
	}
	if (counter > 0) {
		return true;
	}
	else {
		return false;
	}
} 


