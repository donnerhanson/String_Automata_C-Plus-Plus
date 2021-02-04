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

/* BEGIN MAIN */
int main(int argc, const char * argv[]) {
    
    string preDet = "abccba"; // this is the pattern that the program is designed to detect abc*cba <--- * is a wildcard character
    string givenString = "abccbabcbacba";
    vector<int> endIndexLocations;
    
    /* BEGIN FOR LOOP */
    for (int i = 0; i < givenString.length();) {
        
        // if char == 'a' and only 'a'
    STATE_ZERO:
        if (givenString[i] == preDet[0]) {
            i++;
            goto STATE_ONE;
            
        }
        else {
            i++;
            if (!(i >= givenString.length()))
                goto STATE_ZERO;
            break;
        }
        
        // read in char --> if char == 'b' then go to next state; else if 'a' stay; else jump to beginning
    STATE_ONE:
        if (givenString[i] == preDet[1])  {
            i++;
            goto STATE_TWO;
            
        }
        else if (givenString[i] == preDet[0])  {
            i++;
            goto STATE_ONE;
            
        }
        else {
            i++;
            if (!(i >= givenString.length()))
                goto STATE_ZERO;
            break;
        }
        
        
        // read in char
        // if char == 'c' go to next state
        // if char != 'c' jump to initial state
    STATE_TWO:
        if (givenString[i] == preDet[2]) {
            i++;
            goto STATE_THREE;
            
        }
        else {
            i++;
            if (!(i >= givenString.length()))
                goto STATE_ZERO;
            break;
        }
        
        // if char == 'c' go to 4th state
        // else if any other char go to 3rd state (WILD CARD OR C STATE)
    STATE_THREE:
        if (givenString[i] == preDet[3]) {
            i++;
            goto STATE_FOUR;
            
        }
        else {
            i++;
            if (!(i >= givenString.length()))
                goto STATE_THREE;
            break;
        }
        
        // if char == 'b' go to state 5
        // else if char != 'b' then start from state 3 (wild card state)
    STATE_FOUR:
        if (givenString[i] == preDet[4]) {
            i++;
            goto STATE_FIVE;
        }
        else {
            i++;
            if (!(i >= givenString.length()))
                goto STATE_THREE;
            break;
        }
        
        
        // IF CHAR == a, count + 1 and --> STATE 3;
        // ELSE go to state 3
        STATE_FIVE:
        if (givenString[i] == preDet[5]) {
            i++;
            endIndexLocations.push_back(i); // found the full string save the index
            goto STATE_THREE;
        }
        else {
            i++;
            if (!(i >= givenString.length()))
                goto STATE_THREE;
            break;
        }
        
    } /* END FOR LOOP */
    
    /* OUTPUT RESULTS */
    cout << "Amount of times \"" << preDet << "\" in string: " << endIndexLocations.size() << "\n";
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
