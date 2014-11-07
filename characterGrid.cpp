#include "characterGrid.h"

using namespace std;


//constructor
characterGrid::characterGrid(){
	dimension = 30;

	grid = new char*[dimension];
	for(int i = 0 ; i < dimension ; i++ ){
		grid[i] = new char[dimension];
	}
};

//destructor
characterGrid::~characterGrid(){
	for(int i = 0 ; i < dimension ; i++ ){
		delete[] grid[i];
	}
};

//method to fill grid with characters from user specified file
char** characterGrid::populateGrid(string filename){	

	ifstream datafile;
	datafile.open(filename.c_str());
	if (datafile.is_open()){

		string raw_line;
		char ch;
		for(row = 0 ; row < dimension ; row++){
			//read a single line from data file
			getline(datafile, raw_line);
			string delim_line = "";

			//remove all commas from line
			for (int i = 0; i < raw_line.size() ; i++){
				ch = raw_line[i];
				if (ch != ','){
					delim_line += ch;
				}
			}
								
			for(col = 0 ; col < dimension ; col++){
				//fill columns with characters from line 
				grid[row][col] = delim_line[col];														
			}
		}		
	}else{
		cerr << "\nERROR: File could not be opened!\n";
	}	
	datafile.close();
	return grid;	
};


//method to print the grid of characters to screen
void characterGrid::displayGrid(){

 	for(row = 0 ; row < dimension ; row++){

		for(col = 0 ; col < dimension ; col++){

			cout << grid[row][col] << "  " ;
		}
		cout << "\n";
	}
};


