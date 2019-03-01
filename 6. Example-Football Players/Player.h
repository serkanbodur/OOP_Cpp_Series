#ifndef OYUNCU_H
#include<iostream>
#include<string>
using namespace std;
/**
* \brief A Class for test doxygen documentation
* \author Serkan Bodur
*/
class Player {
public:
	/**
	* \brief A enum for using directions
	*/
	enum Direction {
		EAST,
		NORTH,
		NORTH_EAST,
		NORTH_WEST,
		SOUTH,
		SOUTH_EAST,
		SOUTH_WEST,
		WEST
	};
	/**
	* \brief Constructor to create a player
	*/
	Player(const string&, int);
	/**
	* \brief Destructor to remove a player
	*/
	~Player();
	/**
	* \brief Return age value that time
	*/
	int getAge();
	/**
	* \brief Return name that time
	*/
	const string& getName()const;
	/**
	* \brief A function to moving required to direction
	*/
	void Move(Direction);
private:
	/**
	* \brief The function move to east
	*/
	void MoveEast();
	/**
	* \brief The function move to north
	*/
	void MoveNorth();
	/**
	* \brief The function move to northeast
	*/
	void MoveNorthEast();
	/**
	* \brief The function move to northwest
	*/
	void MoveNorthWest();
	/**
	* \brief The function move to south
	*/
	void MoveSouth();
	/**
	* \brief The function move to southeast
	*/
	void MoveSouthEast();
	/**
	* \brief The function move to southwest
	*/
	void MoveSouthWest();
	/**
	* \brief The function move to west
	*/
	void MoveWest();
protected:
	int age;
	string name;

};
#endif
#pragma once
