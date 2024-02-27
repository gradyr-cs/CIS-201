#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <fstream>

using namespace std;

string mixname(const vector<string> &adjectives, const vector<string> &nouns) {
    int adj_index = rand() % adjectives.size();
    int noun_index = rand() % nouns.size();


    return string(adjectives.at(adj_index) + "-" + nouns.at(noun_index)); // call the constructor for string and make it blank
}
void read(istream &a, vector<string> &adjectives, istream &b, vector<string> &nouns) {
    
    while (! cin.eof()) {
        string input;
        cin >> input;
        adjectives.push_back(input);
        cin >> input;
        nouns.push_back(input);
        // look up unix shell programming
        

    }

}


int main () {
    srand(time(NULL));
    vector<string> adjectives;
    vector<string> nouns;

    //vector<string> adjectives = {"curly", "hairy", "bald", "long"};
    //vector<string> nouns = {"dog", "cat", "hamster", "river"};
    // Linux comand to paste... "paste adjectives.txt nouns.txt | ./main"
    // Linux command: cat > adjectives.txt   (allows you to paste into the terminal to make a file)
    // Look up VI for better console usage and edits etc. 
    // Word count... "wc -l adjectives.txt"
    //the curl utility... curl https://www.site.com/targetfile.txt
    
    

    cout << mixname(adjectives, nouns) << endl; // cout is a streamobject






    return 0;
}