/*
 *author: Letsibogo Ramadi
 *date: 03-11-14
 *Description: header file to define the tokenSearch class.
 *				This class traverses a 30 x 30 size grid and 
 *				searches for any tokens specified by a user.  
 *				A token in this context would be a given character
 *				sorrounded by 0's in the grid.
 *
 */

 #include <iostream>
 #include <string>

 using namespace std;

 class tokenSearch{

 	//data members
 	private:
 		unsigned char token;
 		int row, col, dimension, hits;
 		int next_row, prev_row, next_col, prev_col;

 	//member functions
	public:
		tokenSearch(unsigned char);
		void search(unsigned char**);
 	
 };