#include <iostream>
#include "header.h"
using namespace std;


//Create Grid



int main(){


	cout << "How big do you want the grid to be? (Note, the grid is a square. Only one value accepted.)" << endl;
	int x;
	cin >> x;

	Grid grid(x);

	cout << "Grid created" << endl;
	//displayGrid(grid, x);
	grid.displayGrid(x);

	//Create Destinations
	cout << "How many destinations do you want to create?" << endl;
	int size;
	cin >> size;
	for (int i = 0; i < size; i++) {
		cout << "Enter the name of the destination" << endl;
		string name;
		cin >> name;

		cout << "Enter the priority of the destination (1 = Low, 2 = Medium, 3 = High)" << endl;
		int intPriority;
		cin >> intPriority;
		Priority Priority;
		switch (intPriority)
		{
		case 1:
			Priority = LOW;
			break;
		case 2:
			Priority = MEDIUM;
			break;
		case 3:
			Priority = HIGH;
			break;        
		default:
			break;
		}

		cout << "Enter the x coordinate of the destination" << endl;
		int xCoord;
		cin >> xCoord;

		cout << "Enter the y coordinate of the destination" << endl;
		int yCoord;
		cin >> yCoord;
		Destination destination(name, Priority, xCoord, yCoord);
	}

	
	
	return 0;
}