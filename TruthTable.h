#pragma once
#include <iostream>
#include <math.h>

using namespace std;


class TruthTable {
public:
	TruthTable(const int x = 0);						//Constructor
	TruthTable(const TruthTable& t);					//Copy Constructor
	~TruthTable();										//Destructor

	//Getters
	inline int getCols() { return colCount; }
	inline int getRows() { return rowCount; }

	void printTable();




protected:
	int colCount;
	int rowCount;
	int** table;
};

//std::ostream&  operator<< (std::ostream& outStream, std::vector output)
