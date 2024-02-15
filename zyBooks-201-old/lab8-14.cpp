/* 
    File: main.cpp 
    Description: 8.14.1: LAB: Playlist (output linked list)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis201
    Section#: 70107
    Date: 12-13-2023
*/

#include <iostream>
#include "SongNode.h"

// TODO: Write PrintPlaylist() function
void PrintPlaylist(SongNode* headNode) {
	// Kill test units.
	//string FOO1 = "Debug: Playlist function active" << endl;
	//cout << FOO1 << endl;
	SongNode* activeSong = headNode->GetNext(); // advance list target
	
	
	// test variable - disable for zyBooks after...
	// int cycleCount = 0;
	while (activeSong != NULL) { // it should be nullptr? but the old adage...
	   // test units
	   // cycleCount++;
	   // cout << "Debug: Pointer has updated. cycleCount = " << cycleCount << endl;
	   activeSong->PrintSongInfo(); // call the print filler
	   activeSong = activeSong->GetNext();
	   // experimental logic... fix final whitespace issue...
	   if (activeSong != NULL) {
	      cout << endl;
	   }
	}
}

int main() {
	SongNode* headNode;
	SongNode* currNode;
	SongNode* lastNode;

	string songTitle;
	string songLength;
	string songArtist;

	// Front of nodes list                                                                         
	headNode = new SongNode();
	lastNode = headNode;

	// Read user input until -1  entered
	getline(cin, songTitle);
	while (songTitle != "-1") {
		getline(cin, songLength);
		getline(cin, songArtist);

		currNode = new SongNode(songTitle, songLength, songArtist);
		lastNode->InsertAfter(currNode);
		lastNode = currNode;

		getline(cin, songTitle);
	}

	// Print linked list
	cout << "LIST OF SONGS" << endl;
	cout << "-------------" << endl;
	PrintPlaylist(headNode);
	
	return 0;
}