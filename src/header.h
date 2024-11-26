#ifndef HEADER_H
#include <iostream>
using namespace std;

enum Priority
{
	LOW = 1,
	MEDIUM,
	HIGH
};

class Destination
{
	private:
		// Attributes
		string name;
		Priority priority;
		int xCoord;
		int yCoord;

	public:
		// Constructor
		Destination(string name, Priority priority, int xCoord, int yCoord) : name(name),
			priority(priority),
			xCoord(xCoord),
			yCoord(yCoord) {};

		// Getters and Setters
		string getName()
		{
			return name;
		};
		int getCoordnates()
		{
			return xCoord, yCoord;
		};
		int getPriority()
		{
			return priority;
		};
		void setPriority(Priority priority)
		{
			this->priority = priority;
		};
};

class DestinationManager
{
	private:
		// Attributes
		Destination *destinations;
		int size;

	public:
		DestinationManager(Destination destinations[], int size) : 
			destinations(destinations),
			size(size) {};

		// Getters and Setters
		Destination *getDestinations()
		{
			return destinations;
		};
		int getSize()
		{
			return size;
		};
};

class Grid
{
	private:
		// Attributes
		string **grid;
		int size;

	public:
		// Constructor
		Grid(int size) : 
			size(size) {};

		string** createGrid(int x)
		{
			// create a two dimensional array of size x
			string **arr = new string *[x];
			for (int i = 0; i < x; i++)
			{
				arr[i] = new string[x];
			}

			delete arr;

			return arr;
		}

		void displayGrid(int x)
		{
			for (int i = 0; i < x; i++)
			{
				for (int j = 0; j < x; j++)
				{
					cout << grid[i][j] << " + ";
				}
				cout << endl;
			}
		}
};

#endif