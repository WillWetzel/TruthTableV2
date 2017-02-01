#pragma once
#include "TruthTable.h"

class XORTable : public TruthTable {
public:

	XORTable(const int colCount) : TruthTable(colCount) {
		table[1][1] = 1;
		table[1][2] = 1;
		table[2][0] = 1;
		table[2][2] = 1;
		table[3][0] = 1;
		table[3][1] = 1;
		std::cout << "Making XOR Table" << std::endl;
	}

private:

};