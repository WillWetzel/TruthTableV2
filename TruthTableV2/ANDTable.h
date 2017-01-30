#pragma once
#include "TruthTable.h"

class ANDTable : public TruthTable {
public:

	ANDTable(const unsigned n) : TruthTable(n) {
		std::cout << "Making AND Table" << std::endl;
	}

	void TablePopulate();

private:

};
