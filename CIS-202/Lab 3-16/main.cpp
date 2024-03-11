/* 
    File: main.cpp
    Description: 3.16.1: LAB: Playlist (output linked list)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 03-03-2024
*/

#include <iostream>
#include "SongNode.h"

// TODO: Write PrintPlaylist() function
void PrintPlaylist(SongNode* headNode) { // define the function
    SongNode* currNode = headNode->GetNext(); // Initialize the pointer to the first node (after the head)
    // iterate through list nodes
	// Note: The whitespace doesn't require ENDL below the banner, but requires it after each sorted artist.
	currNode->PrintSongInfo(); // output first node - after- the headNode.

	/*
	See zyBooks Required Whitespace styling guide below:

	LIST OF SONGS // start of header
	------------- 
	Title: Stomp! // start of processed data output. one cluster of 3 data elements per function call.
	Length: 380
	Artist: The Brothers Johnson
								// Note this space here. The first space at iteration loop's top.
	Title: The Dude
	Length: 337
	Artist: Quincy Jones
								// Additional space requirement, based on input list size.
	Title: You Don't Own Me
	Length: 151
	Artist: Lesley Gore
	*/

    currNode = currNode->GetNext(); // Advance to next node, then formatting is preserved.
    while (currNode != nullptr) {
		cout << endl; //
        currNode->PrintSongInfo(); // current node - send song info to console.
        currNode = currNode->GetNext(); // Advance to next node
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