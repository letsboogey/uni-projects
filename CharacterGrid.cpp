#include "CharacterGrid.h"

using namespace std;


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
void CharacterGrid::getData(){
	char ch;
	ifstream datafile;
	datafile.open("data.txt", ios::in);
	while (datafile >> skipws >> ch) {
    	cout << ch << endl;
	}
	datafile.close();	
};

//method to fill grid with characters from user specified file
void CharacterGrid::populateGrid(){	

	for(row = 0 ; row < dimension ; row++){

		for(col = 0 ; col < dimension ; col++){

			grid[row][col] = '@';
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
	//my_grid.populateGrid();
	//my_grid.displayGrid();
	my_grid.getData();
		
	return 0;
}