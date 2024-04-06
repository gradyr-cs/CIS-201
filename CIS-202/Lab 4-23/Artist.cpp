/* 
    File: Artist.cpp
    Description: 4.23.1: LAB: Artwork label (classes/constructors)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 03-24-2024
*/

#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

// TODO: Define default constructor
Artist::Artist()
{
    artistName = "";
    birthYear = 0;
    deathYear = 0;
}

// TODO: Define second constructor to initialize
//       private fields (artistName, birthYear, deathYear)
Artist::Artist(string artistName, int birthYear, int deathYear)
{
    this->artistName = artistName;
    this->birthYear = birthYear;
    this->deathYear = deathYear;
}

// TODO: Define get functions: GetName(), GetBirthYear(), GetDeathYear()
string Artist::GetName() const
{
    return artistName;
}

// TODO: Define PrintInfo() function
//      If deathYear is entered as -1, only print birthYear
// formatting adjusted per whitespace requirements
void Artist::PrintInfo() const
{
    if((birthYear > 0) && (deathYear > 0)) {
        cout << "Artist: " << artistName << " (" << birthYear << " to " << deathYear << ")" << endl;
    }
    else if((birthYear > 0) && (deathYear == -1)) {
        cout << "Artist: " << artistName << " (" << birthYear << " to present)" << endl;
    }
    else {
        cout << "Artist: " << artistName << " (unknown)" << endl;
    }
}