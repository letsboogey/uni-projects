#include "CharacterGrid.h"


//constructor
CharacterGrid::CharacterGrid(){
	dimension = 30;

	grid = new char*[dimension];
	for(int i = 0 ; i < dimension ; i++ ){
		grid[i] = new char[dimension];
	}
};

//destructor
CharacterGrid::~CharacterGrid(){
	for(int i = 0 ; i < dimension ; i++ ){
		delete[] grid[i];
	}
};

//reads data file character by character
char CharacterGrid::nextChar(string filename){
	
	char next_char;
	datafile.open(filename, ios::in);

	while(!datafile.eof()){

		if(!(next_char == ',' || next_char == '\n')){
			/* code */
		}
	}
datafile.get(next_char);
};

//method to fill grid with characters from user specified file
void CharacterGrid::populateGrid(){		

	for(row = 0 ; row < dimension ; row++){

		for(col = 0 ; col < dimension ; col++){

			grid[row][col] = nextChar(); ;
		}
	}
	
};

//method to print the grid of characters to screen
void CharacterGrid::displayGrid(){

 	for(row = 0 ; row < dimension ; row++){

		for(col = 0 ; col < dimension ; col++){

			cout << grid[row][col] << "  " ;
		}
		cout << "\n";
	}
};



int main()
{
	CharacterGrid my_grid;
	my_grid.populateGrid();
	my_grid.displayGrid();
		
	return 0;
}