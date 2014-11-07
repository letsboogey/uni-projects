#include <string>
#include <iostream>
#include "tokenSearch.h"
#include "characterGrid.h"

using namespace std;

int main(){		

	characterGrid my_grid;
	tokenSearch ts('m');
	char** g = my_grid.populateGrid("data.txt");
	//my_grid.displayGrid();
	ts.search(g);
	
	return 0;
};