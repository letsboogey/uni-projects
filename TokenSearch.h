/*
 *author: Letsibogo Ramadi
 *date: 03-11-14
 *Description: header file to define the TokenSearch class.
 *				This class traverses a 30 x 30 size grid and 
 *				searches for any tokens specified by a user.  
 *				A token in this context would be a given character
 *				sorrounded by 0's in the grid.
 *
 */

 #include <iostream>
 #include <string>
 #include "CharacterGrid.h"

 using namespace std;

 class TokenSearch
 {
 	private:
 		char the_token;
 		char** the_grid;

	public:
		TokenSearch();
		search(string);
 	
 };