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

//reads data as a string
string CharacterGrid::getData(){
	char ch;

	string data = "" ;	
	ifstream datafile;
	datafile.open("data.txt", ios::in);

	if (datafile.is_open()){
		while(datafile){
			ch = datafile.get();
			if ( ch != ',' && !datafile.eof()){
				data += ch;				
			}			
		}
		datafile.close();
	}else{
		cerr << "\nERROR: File could not be opened!\n";
	}
	cout << data << "\n\n" << data.size() <<  endl;
	return data;
};

//method to fill grid with characters from user specified file
void CharacterGrid::populateGrid(){	

	string data = getData();
	int count = 0;

	for(row = 0 ; row < dimension ; row++){

		for(col = 0 ; col < dimension ; col++){

			if(count <= data.size()){
				grid[row][col] = data[count];
				count++;
			}

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
	//my_grid.displayGrid();
	
	return 0;
}