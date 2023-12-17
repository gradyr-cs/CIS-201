#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Point {
    int m_x;
    int m_y;
public:
    Point(int x,int y);
    Point() {m_x=0;m_y=0;};
    Point(const Point& p);
    void print();
    double distance(const Point& p);
    string toString();
};

Point::Point(int x,int y) {
    m_x = x;
    m_y = y;
}

Point::Point(const Point& p) {
    m_x = p.m_x;
    m_y = p.m_y;
}

void Point::print() {
    cout << toString();
}

string Point::toString() {
    return string("") + "(" + to_string(m_x) +  "," + to_string(m_y) + ")";
}

double Point::distance(const Point& p) {
    return sqrt(pow(m_x - p.m_x,2) + pow(m_y - p.m_y,2));
}

class Player {
    string m_name;
    Point m_position;
    void set_position(const Point& pos);
public:
    Player(const string& s,const Point& pos);
    void move(const Point& pos);
    void print();
};

Player::Player(const string& name,const Point& pos) {
    m_name = name;
    m_position = pos;
}

void Player::set_position(const Point& pos) {
    m_position = pos;
}

void Player::move(const Point& pos) {
    set_position(pos);
}

void Player::print() {
    cout << "Player: " 
         << m_name 
         << " is at position " 
         << m_position.toString() << endl;
}


int main() {
    Player player1(string("Beevis"),Point(2,3)); 
    Player player2(string("Bob"),Point(3,5)); 
    player1.print();
    player2.print();
    player1.move(Point(4,4));
    player2.move(Point(4,5));
    player1.print();
    player2.print();

    return 0;
}