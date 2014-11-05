#include "CharacterGrid.h"
#include <fstream>
#include <iostream>
#include <string> 

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

/*//reads data as a string
string CharacterGrid::getData(){
	char ch;

	string data = "" ;	
	ifstream datafile;
	datafile.open("data.txt", ios::in);

	if (datafile.is_open()){
		while(datafile){
			ch = datafile.get();
			data += ch;						
		}
		datafile.close();
	}else{
		cerr << "\nERROR: File could not be opened!\n";
	}
	cout << data << "\n\n" << data.size() <<  endl;
	return data;
};*/

//method to fill grid with characters from user specified file
void CharacterGrid::populateGrid(string filename){	

	ifstream datafile;
	datafile.open(filename.c_str());
	const int pos_array[] = {0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58};
	if (datafile.is_open()){

		string line;
		for(row = 0 ; row < dimension ; row++){
			getline(datafile, line);
						
			for(col = 0 ; col < dimension ; col++){
				grid[row][col] = line[pos_array[col]];														
			}
		}		
	}else{
		cerr << "\nERROR: File could not be opened!\n";
	}	
	datafile.close();	
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
	my_grid.populateGrid("data.txt");
	my_grid.displayGrid();
	
	return 0;
}