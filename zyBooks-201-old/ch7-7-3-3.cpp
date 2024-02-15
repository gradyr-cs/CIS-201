#include <iostream>
#include <vector>
using namespace std;

// Class representing a Member
class Member {
public:
    // Function to set the name and age of a Member
    void SetNameAndAge(string newName, int newAge);

    // Function to get the age of a Member
    int GetAge() const;

    // Function to print the details of a Member
    void Print() const;

private:
    string name;
    int age;
};

// Implementation of the Member class functions
void Member::SetNameAndAge(string newName, int newAge) {
    name = newName;
    age = newAge;
}

int Member::GetAge() const {
    return age;
}

void Member::Print() const {
    cout << "Member: " << name << ", Age: " << age << endl;
}

// Class representing Appointments and a list of Members
class Appointments {
public:
    // Function to input Member details and populate the memberList
    void InputMembers();

    // Function to print Members in the age range 50-65
    void PrintMembersInRange();

private:
    vector<Member> memberList; // List to store Member objects
};

// Implementation of the Appointments class functions
void Appointments::InputMembers() {
    Member currMember;
    string currName;
    int currAge;
    int memberCount;
    unsigned int i;

    // Input the number of members
    cin >> memberCount;

    // Loop to input details for each member
    for (i = 0; i < memberCount; ++i) {
        cin >> currName;
        cin >> currAge;

        currMember.SetNameAndAge(currName, currAge);
        memberList.push_back(currMember);
    }
}

void Appointments::PrintMembersInRange() {
    // Loop through the memberList to find and print Members in the age range 50-65
    for (int i = 0; i < memberList.size(); ++i) {
        int temp = memberList.at(i).GetAge();

        if (temp >= 50 && temp <= 65) {
            memberList.at(i).Print();
        }
    }
}

// Main function to create an Appointments object, input Members, and print Members in the specified range
int main() {
    Appointments appointments;

    // Input Members
    appointments.InputMembers();

    // Print Members in the age range 50-65
    appointments.PrintMembersInRange();

    return 0;
}