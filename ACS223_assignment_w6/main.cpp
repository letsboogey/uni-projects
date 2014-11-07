/*
 *author: Letsibogo Ramadi
 *date: 06-11-14
 *Description: implementation of the controller class to run the program.
 *
 */

#include <string>
#include <iostream>
#include "tokenSearch.h"
#include "characterGrid.h"

using namespace std;

int main(){		

	//initialise variables
	unsigned char my_token;
	characterGrid my_grid;
	string input_file;

	//program title
	string title = "\n\t\tWELCOME TO THE TOKEN SEARCH PROGRAM\n\n";
	
	//prompt user for filename input
	cout << title << "\n\nEnter filename to load data from (example: 'data.txt' ): " ;
	cin >> input_file;

	//fill grid with data from given file 	
	unsigned char** g = my_grid.populateGrid(input_file);

	if (!(g == NULL)){//exits program prematurely if given filename is not found/invalid

		my_grid.displayGrid();

		//prompt user for token input
		cout << "\n\nEnter token to search for : " ;
		cin >> my_token;

		//search for and display positions of given tokens in the grid
		cout << "\n\t\tSearching for '" << my_token << "' ...........\n\n" << endl;
		tokenSearch ts(my_token);	
		ts.search(g);
		my_grid.~characterGrid();
	}
	
	return 0;
};