/* 
    File: SongNode.cpp
    Description: 3.16.1: LAB: Playlist (output linked list)
    Author: Richard Grady
    Email: gradyr@student.vvc.edu
    Course#: cis202
    Section#: 30402
    Date: 03-03-2024
*/

#include "SongNode.h"

// Constructor                                                                                     
SongNode::SongNode(string songTitleInit, string songLengthInit, string songArtistInit) {
	this->songTitle = songTitleInit;
	this->songLength = songLengthInit;
	this->songArtist = songArtistInit;
	this->nextNodeRef = nullptr;
}

// Constructor                                                                                     
SongNode::SongNode(string songTitleInit, string songLengthInit, string songArtistInit, SongNode* nextLoc) {
	this->songTitle = songTitleInit;
	this->songLength = songLengthInit;
	this->songArtist = songArtistInit;
	this->nextNodeRef = nextLoc;
}

// insertAfter
void SongNode::InsertAfter(SongNode* nodeLoc) {
	SongNode* tmpNext;
	tmpNext = this->nextNodeRef;
	this->nextNodeRef = nodeLoc;
	nodeLoc->nextNodeRef = tmpNext;
}

// Get location pointed by nextNodeRef                                                            
SongNode* SongNode::GetNext() {
	return this->nextNodeRef;
}

// TODO: Write PrintSongInfo() function
void SongNode::PrintSongInfo() {
    cout << "Title: " << this->songTitle << endl;
    cout << "Length: " << this->songLength << endl;
    cout << "Artist: " << this->songArtist << endl;
}