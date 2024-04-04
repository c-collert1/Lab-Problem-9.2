#include <iostream>
using namespace std;

bool isSortedDecreasing(int values[6]);
bool isSortedIncreasing(int values[6]);
bool hasAdjacentDupliciates(int values[6]);
bool hasDupliciates(int values[6]);


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
bool hasAdjacentDupliciates(int values[6]) {
	return 0;
}
bool hasDupliciates(int values[6]) {
	return 0;
}


