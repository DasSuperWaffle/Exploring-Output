/*
	Ethan Davis
	C++ Fall 2021
	Due: September 15, 2021
	Lab 2: Exploring Output
	Get you familiar output to the command prompt using C++.
 */

#include <iostream>

using namespace std;

int main()
{
	const string M = "Mon.";
	const string T = "Tue.";
	const string W = "Wed.";
	const string TH = "Thu.";
	const string F = "Fri.";
	const string MA = "Calculus 210";
	const string CS = "C++ 162";
	const string PS = "Public Speaking 112";
	const string PH = "Classical Physics 212";
	const string E = "\t8:00\t";
	const string Q = "\t10:00\t";
	const string TW = "\t12:15\t";
	const string TO = "\t2:00\t";

	cout << M << E << MA << endl;
	cout << M << Q << CS << endl;
	cout << M << TW << PS << endl;
	cout << M << TO << PH << "\n" << endl;
	cout << T << E << MA << endl;
	cout << T << Q << CS << endl;
	cout << T << TO << PH << "\n" << endl;
	cout << W << E << MA << endl;
	cout << W << Q << CS << endl;
	cout << W << TW << PS << endl;
	cout << W << TO << PH << "\n" << endl;
	cout << TH << E << MA << endl;
	cout << TH << Q << CS << endl;
	cout << TH << TO << PH << "\n" << endl;
	cout << F << Q << CS << "\n" << endl;
	cout << "\n" << endl;
	cout << "\n" << endl;

	/* I went with abbreviations for each day as opposed to the full
	spellings since it made the spacing between words prettier to look
	at.
	*/

	/* I also added a new line at the end of every day to put each
	 separate day into its own little block to make it look more
	 organized (and prettier to look at).
	 */

	const string N = "  *   *   *   *";
	const string O = "*   *   *   *";
	/* A simple 8x8 grid with a single space in between each star doesn't
	 look that appealing, so for the case of this lab a single white
	 space in the grid is equivalent to three normal spaces so that
	 each star is centered in between the blank spaces in alternating
	 lines and looks prettier. The only exception to this is the beginning
	 of every "A" line where there is only 2 spaces so as to center the
	 first star in the "B" line.
	 */

	cout << N << endl;
	cout << O << endl;
	cout << N << endl;
	cout << O << endl;
	cout << N << endl;
	cout << O << endl;
	cout << N << endl;
	cout << O << endl;

	/*I wasn't really sure how to add both parts of the lab to a single repository so I just put them both in the same source file and spaced them out on the terminal instead.
	*/

	return 0;
}