/* 
    File: Artist.h
    Description: 4.23.1: LAB: Artwork label (classes/constructors)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 03-24-2024
*/

#ifndef ARTISTH
#define ARTISTH

#include <string>
using namespace std;

class Artist{
   public:
      Artist();

      Artist(string artistName, int birthYear, int deathYear);

      string GetName() const;

      int GetBirthYear() const;

      int GetDeathYear() const;

      void PrintInfo() const;
   
   private:
      // TODO: Declare private data members - artistName, birthYear, deathYear
      string artistName;
      int birthYear;
      int deathYear;


};

#endif