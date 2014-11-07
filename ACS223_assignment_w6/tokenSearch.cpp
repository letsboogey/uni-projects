/*
 *author: Letsibogo Ramadi
 *date: 05-11-14
 *Description: implementation of the tokenSearch class.
 *
 */

 #include "tokenSearch.h"

 using namespace std;
 
 //constructor implementation
 tokenSearch::tokenSearch(unsigned char tok){
 	token = tok;
 	dimension = 30;
 	hits = 0;//number of tokens identified
 };


//method to search for valid tokens inside grid
void tokenSearch::search(unsigned char** the_grid){

 	unsigned char temp;//holds character being matched to token

 	for(row = 0 ; row < dimension ; row++){

		for(col = 0 ; col < dimension ; col++){

			temp = the_grid[row][col];

			if ( temp == token ){

				//get positions of characters sorrounding token 
				next_row = row + 1;
				next_col = col + 1;
				prev_row = row - 1;
				prev_col = col - 1;

				//check if positions are within the grid i.e: in range 0-29
				bool check_prev = prev_row < 0 || prev_col < 0;
				bool check_next = next_row > 29 || next_col > 29;				

				if (check_next || check_prev){
					continue;	
				}else{

					//get characters in sorrounding positions
					unsigned char top = the_grid[prev_row][col];
					unsigned char bot = the_grid[next_row][col];
					unsigned char left = the_grid[row][prev_col];
					unsigned char right = the_grid[row][next_col];

					//condition for character to be a valid token
					bool hit = ( top=='0' && bot=='0' && left=='0' && right=='0' );

					//print position of token if it's a hit
					if (hit){
						hits++;
						cout << "Token found at position : " << "(" << row << "," << col << ")" << endl; 
					}

				}
			}
		}
	}
	
	if (hits == 0){
		cout << "No valid tokens identified" << endl;
	}
 };
