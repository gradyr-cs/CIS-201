/* 
    File: Artwork.cpp
    Description: 4.23.1: LAB: Artwork label (classes/constructors)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 03-24-2024
*/

#include "Artwork.h"
#include <iostream>

// TODO: Define default constructor
Artwork::Artwork()
{
    title = "";
    yearCreated = 0;
}

// TODO: Define second constructor to initialize
//       private fields (title, yearCreated, artist)
Artwork::Artwork(string title, int yearCreated, Artist artist)
{
    this->title = title;
    this->yearCreated = yearCreated;
    this->artist = artist;
}

// TODO: Define get functions: GetTitle(), GetYearCreated()
string Artwork::GetTitle()
{
    return title;
}

// TODO: Define PrintInfo() function
//       Call the PrintInfo() function in the Artist class to print an artist's information  
void Artwork::PrintInfo()
{
    artist.PrintInfo();
    cout << "Title: " << title << ", " << yearCreated << endl;
}