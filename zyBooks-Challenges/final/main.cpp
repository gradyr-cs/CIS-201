/* 
    File: main.cpp 
    Description: 9.1.1: LAB*: Program: Authoring assistant
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis201
    Section#: 70107
    Date: 12-14-2023
*/

#include <iostream>
#include <string>
using namespace std;

// Task #5:
int GetNumOfNonWSCharacters(const string usrString){
    int i = 0;
    int sum = 0;
    for (i = 0; i < usrString.size(); ++i) {
        if (usrString[i] != ' ') {
            ++sum;
        }
    }
    return(sum); 
}


// Task #6:
int GetNumOfWords(const string str) {
    int count;
    unsigned i;
    count = 0;
    bool extraSpace = false;

    for (i = 0; i < str.size(); ++i) {
        if (isspace(str.at(i))) { // look in the loop lol, not the size.
            extraSpace = false;
        }
        else {
            if (!extraSpace) {
                count++;
                extraSpace = true;
            }
        }
    }
    // count++;
    // cout << "Number of words: " << count << endl << endl;
    return count;
}


// Task #7:
int FindText(const string toFind, string str) {
    int count = 0;
    while (str.find(toFind) != string::npos) {
        ++count;
        str.replace(str.find(toFind), toFind.size(), " ");
    }  
    return count;
}

// Task #8:
void ReplaceExclamation(string& str) {
    int i = 0;
    for (i = 0; i < str.size(); ++i) {
        if (str.at(i) == '!') {
            str.at(i) = '.';
        }
    }
}
    


// Task #9:
void ShortenSpace(string& str) {
    unsigned i;
    string tmp;

    for (i = 1; i < str.size(); ++i) {
        if (!(isspace(str.at(i)) && isspace(str.at(i - 1)))) {
            tmp = tmp + str.at(i - 1);
        }

        if (i == str.size() - 1) {
            tmp = tmp + str.at(i);
        }
   }
   str = tmp;
   return;
}

// Task #2: implement PrintMenu() function.
void PrintMenu() {
    cout << "MENU" << endl;
    cout << "c - Number of non-whitespace characters" << endl;
    cout << "w - Number of words" << endl;
    cout << "f - Find text" << endl;
    cout << "r - Replace all !'s" << endl;
    cout << "s - Shorten spaces" << endl;
    cout << "q - Quit" << endl;
    
}

// Task #3: implement the ExecuteMenu() function.
void ExecuteMenu(char option, string str) {
    // option will connect to menu choice, str will will transfer to process based on desired function
    //cout << "Debug: ExecuteMenu() function activated!" << endl;
    string toFind;
    //int numFinds;
    
    switch (option) {
        case 'c':
            cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(str) << endl << endl;
            break;
        case 'w':
            cout << "Number of words: " << GetNumOfWords(str) << endl << endl;
            break;
        case 'f':
            cout << "Enter a word or phrase to be found:" << endl;
            cin.ignore();
            getline(cin, toFind);
            FindText(toFind, str);
            cout << "\"" << toFind << "\" instances: " << FindText(toFind, str) << endl << endl;
            break;
        case 'r':
            ReplaceExclamation(str);
            cout << "Edited text: " << str << endl << endl;
            break;
        case 's':
            ShortenSpace(str);
            cout << "Edited text: " << str << endl << endl;
            break;
        case 'q':
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Bad entry!" << endl;
            break;   
      }
}

int main() {
    string userString;
    char menuChoice;

    cout << "Enter a sample text:" << endl;
    getline(cin, userString);
    cout << endl;

    cout << "You entered: " << userString << endl << endl;
   
    PrintMenu();

    menuChoice = ' ';
    while (menuChoice != 'q') {
        cout << endl << "Choose an option:" << endl;
        cin >> menuChoice;
        if (menuChoice == 'c' || menuChoice == 'w' || menuChoice == 'f' ||
            menuChoice == 'r' || menuChoice == 's' || menuChoice == 'o') {
            ExecuteMenu(menuChoice, userString);
            PrintMenu();
        }
    }
   return 0;
}