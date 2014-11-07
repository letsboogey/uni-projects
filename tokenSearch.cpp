/*
 *author: Letsibogo Ramadi
 *date: 05-11-14
 *Description: header file to define the TokenSearch class.
 *				This class traverses a 30 x 30 size grid and 
 *				searches for any tokens specified by a user.  
 *				A token in this context would be a given character
 *				sorrounded by 0's in the grid.
 *
 */

 #include "tokenSearch.h"

 using namespace std;

 tokenSearch::tokenSearch(char tok){
 	token = tok;
 	dimension = 30;
 };

 void tokenSearch::search(char** the_grid){

 	for(row = 0 ; row < dimension ; row++){

		for(col = 0 ; col < dimension ; col++){

			cout << "Char - " << the_grid[row][col] << " : Pos - " << "(" << row << "," << col << ")" << endl;
		}
		cout << "\n";
	}
 };
