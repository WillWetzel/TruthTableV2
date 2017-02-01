#pragma once
#include "TruthTable.h"

class ANDTable : public TruthTable {
public:

	ANDTable(const int colCount) : TruthTable(colCount) {
		table[1][1] = 1;
		table[2][0] = 1;
		table[3][0] = 1;
		table[3][1] = 1;
		table[3][2] = 1;
		std::cout << "Making AND Table" << std::endl;
	}

private:

};