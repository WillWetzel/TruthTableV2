#pragma once
#include <iostream>
#include <vector>

using namespace std;


class TruthTable {
public:
	TruthTable(const unsigned n);
	//TruthTable(std::vector<int>*);
	~TruthTable();

	void printTable();

	inline unsigned getRows() {
		return n;
	}
	inline unsigned getNum_To_Fill() {
		return num_to_fill;
	}

	inline std::vector<std::vector<int>> getOutput() {
		return output;
	}


protected:
	const unsigned n = 2;
	unsigned num_to_fill = 1U << (n - 1);	//Fill half the rows at once.

	std::vector<std::vector<int>> output = std::vector<std::vector<int>>(n, std::vector<int>(1 << n));		
			//Creates a vector of vectors with outer length n, inner length 2^n. All initalized to zero.
};