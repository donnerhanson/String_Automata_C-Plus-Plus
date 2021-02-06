/*
 Name: Donner Hanson
 Date: 02/03/2021
 Instructor: Dr. Kurz
 Class Name: Compiler Construction
 Class Number: 402-01
 Optional Studying Assignment

 Program Description:
 Compare a pre-determined string of letters to a given string using a state machine using go-to's

 To run the program on the command line, navigate to the src directory
 type the command: make
 type the command: ./run.exe

 note that running the ".exe" file on mac from finder will not work however using the command line executable will work as intended
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;


/*
word1 = "aa"
word2 = "abb"
givenString = "aaabbaabb";

state 0:
	char == "a": state 1
	else: state 0

state 1:
	char "a": location save; state 1
	char "b": state 2
	else: state 0

state 2:
	char "b": location save; state 0

*/



/* BEGIN MAIN */
int main(int argc, const char * argv[]) {
		//word1 is not done
		string word1 = "aa";
    string word2 = "abb"; // this is the pattern that the program is designed to detect
    string givenString = "aaabbaabb";
    vector<int> endIndexLocations;
		int size = givenString.length();

    /* BEGIN FOR LOOP */
    for (int i = 0; i < size;) {

			/*
		  state 0:
				char == "a": state 1
				else: state 0
			*/
			STATE_ZERO:
				if ((givenString[i] == word1[0]) && (givenString[i] == word2[0])) {
					i++;
					goto STATE_ONE;
				}
				else if (i < size) {
					i++;
					goto STATE_ZERO;
				}
				break;
			/*
			state 1:
				char "a": location save; state 1
				char "b": state 2
				else: state 0
			*/
		STATE_ONE:
			if (givenString[i] == word1[1]) {
				i++;
				endIndexLocations.push_back(i);
				goto STATE_ONE;
			}
			else if (givenString[i] == word2[1]) {
				i++;
				goto STATE_TWO;
			}
			else if (i < size) {
				i++;
				goto STATE_ZERO;
			}
			break;

			/*
			state 2:
				char "b": location save; state 0

			*/
		STATE_TWO:
			if (givenString[i] == word2[2]) {
				i++;
				endIndexLocations.push_back(i);
				goto STATE_ZERO;
			}
			else if (i < size) {
				i++;
				goto STATE_ZERO;
			}
			break;

    } /* END FOR LOOP */

    /* OUTPUT RESULTS */
		cout << givenString << "\n";
    cout << "Amount of times \"" << word2 << "\" in string: " << endIndexLocations.size() << "\n";
    if (!endIndexLocations.empty()) {
        cout << "End indices at: [ ";
        for (int i = 0; i < endIndexLocations.size(); i++) {
            cout << endIndexLocations.at(i);
            if (i < (endIndexLocations.size() - 1))
                cout << ", ";
        }
        cout << " ]\n";
    }

    return 0;
}
