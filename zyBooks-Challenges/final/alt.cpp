#include <iostream>
#include <string>
using namespace std;

/* Define your functions here. */
void PrintMenu(){
    cout << "MENU" << endl;
    cout << "c - Number of non-whitespace characters" << endl;
    cout << "w - Number of words" << endl;    
    cout << "f - Find text" << endl;
    cout << "r - Replace all !'s" << endl;
    cout << "s - Shorten spaces" << endl;
    cout << "q - Quit" << endl;
}

int GetNumOfNonWSCharacters(const string usrString){
    int i = 0;
    int sum = 0;
    for (i = 0; i<usrString.size(); ++i) {
        if (usrString[i] != ' ') {
            ++sum;
        }
    }
    return(sum); 
}
int GetNumOfWords(string usrString) {
    int sum = 1;
    int i = 0;
    for (i = 1; i < usrString.size(); ++i) {
        if (usrString[i-1] == ' ' && isalpha(usrString[i])) {
        ++sum;
        }
    }
    return(sum);
}
int FindText(const string toFind, string usrStr) {
    int sum = 0;
    while (usrStr.find(toFind) != string::npos) {
        ++sum;
        usrStr.replace(usrStr.find(toFind), toFind.size(), " ");
   }
   return(sum);
}
void ReplaceExclamation(string& usrStr) {
    int i = 0;
    for (i = 0; i < usrStr.size(); ++i) {
        if (usrStr.at(i) == '!') {
            usrStr.at(i) = '.';
        }
    }
}
void ShortenSpace(string& usrStr) {
    unsigned i;
    string tmp;
    for (i = 1; i < usrStr.size(); ++i) {
        if (!(isspace(usrStr.at(i)) && isspace(usrStr.at(i - 1)))) {
            tmp = tmp + usrStr.at(i - 1);
        }

        if (i == usrStr.size() - 1) {
            tmp = tmp + usrStr.at(i);
        }
    }

    usrStr = tmp;
    return;

}

void ExecuteMenu(char usrChoice, string usrString) {
    if (usrChoice == 'c') {
        cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(usrString) << endl << endl;
    }
    else if (usrChoice == 'w') {
        cout << "Number of words: " << GetNumOfWords(usrString) << "\n\n";
        }
    else if (usrChoice == 'f') {
        string find;
        cout << "Enter a word or phrase to be found:\n";
        cin.ignore();
        getline(cin, find);
        cout << "\"" << find << "\"" << " instances: " << FindText(find, usrString) << endl << endl;
    }
    else if (usrChoice == 'r') {
        ReplaceExclamation(usrString);
        cout << "Edited text: " << usrString << "\n\n";
    }
    else if (usrChoice == 's') {
        ShortenSpace(usrString);
        cout << "Edited text: " << usrString << "\n\n";
    }
}


int main() {
    string usrString;
    char menuChar = '\0';
    
    cout << "Enter a sample text:";
    getline(cin, usrString);

    cout << "\n\nYou entered: " << usrString << "\n\n";

    PrintMenu();


    while (menuChar != 'q'){
        cout << "\nChoose an option:\n";
        cin >> menuChar;
        menuChar = tolower(menuChar);
        if (menuChar != 'c' && menuChar != 'w' && menuChar != 'f' && menuChar != 'r' && menuChar != 's' && menuChar != 'q') {
            menuChar = '\0';
            PrintMenu();
            cout << "Invalid selection, try again: ";
        }
        if (menuChar == 'q') {
            break;
        }
        ExecuteMenu(menuChar, usrString);
        PrintMenu();


    }

    return 0;
}