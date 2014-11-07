/*
 *author: Letsibogo Ramadi
 *date: 03-11-14
 *Description: header file to define the CharacterGrid class.
 *				This class creates a 30 x 30 size grid using a 2D
 *				array that will be filled with characters from a 
 *				given input file
 *
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class characterGrid{

	//data members
	private:
		char** grid;
		int row, col, dimension;
				
	
	//member functions
	public:
		characterGrid();
		~characterGrid();
		char** populateGrid(string);
		void displayGrid();
};