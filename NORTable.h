#pragma once
#include "TruthTable.h"

class NORTable : public TruthTable {
public:

	NORTable(const int colCount) : TruthTable(colCount) {
		table[0][2] = 1;
		table[1][1] = 1;
		table[2][0] = 1;
		table[3][0] = 1;
		table[3][1] = 1;
		std::cout << "Making NOR Table" << std::endl;
	}

private:

};