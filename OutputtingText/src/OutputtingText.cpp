//============================================================================
// Name        : OutputtingText.cpp
// Author      : chanbro
// Version     :
// Copyright   : Your copyright notice
// Description : Learning how to do text output in C++
//============================================================================

// iostream - input-output stream
// command shift f - auto format
#include <iostream>

using namespace std;

int main() {

	// flush - output text without creating new line
	cout << "Starting program... " << flush;

	cout << "This is some text" << endl;

	cout << "Banana. " << "Apple." << " " << "Orange." << endl;

	cout << "This is some more text" << endl;

	return 0;
}
