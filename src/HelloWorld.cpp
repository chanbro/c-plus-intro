//============================================================================
// Name        : HelloWorld.cpp
// Author      : Chanbro
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// Build project before running
// IDE may set up file differently (void instead of int, different #include, etc.)
// CaSe SeNsItIvE
// End ALL statements with semicolon;

/* FILES AND FOLDERS
 * Binary
 * Includes
 * src - contains .cpp source code
 * Debug - dev build
 * Release - production build
 * */

/* TERMINAL INSTRUCTIONS
 *
 * */

// Takes file called iostream and inputs it into program before compiling (NOT a statement)
#include <iostream>

// std - standard
using namespace std;

// int - type declaration; main(){} - function
int main() {

	// cout (c-out) object -
	// << - insertion/put-to operator; insert statement into object
	// endl - end line/new line for next text
	cout << "Hello World!" << endl; // prints Hello World!

	// 0 - all good (lack of error code)
	return 0;
}
