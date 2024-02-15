/* 
    File: SongNode.h 
    Description: 8.14.1: LAB: Playlist (output linked list)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis201
    Section#: 70107
    Date: 12-13-2023
*/

#include "iostream"
#include <string>

using namespace std;

class SongNode {
private:
	string songTitle;
	string songLength;
	string songArtist;
	SongNode* nextNodeRef; // Reference to the next node                                   

public:
	SongNode() {
		songTitle = "";
		songLength = "";
		songArtist = "";
		nextNodeRef = NULL;
	}

	// Constructor                                                                                     
	SongNode(string songTitleInit, string songLengthInit, string songArtistInit);

	// Constructor                                                                                     
	SongNode(string songTitleInit, string songLengthInit, string songArtistInit, SongNode* nextLoc);

	// insertAfter
	void InsertAfter(SongNode* nodeLoc);

	// Get location pointed by nextNodeRef                                                            
	SongNode* GetNext();
   
   // Prints song information   
	void PrintSongInfo();
};