#pragma once
#include <iostream>
#include <vector>

using namespace std;


class TruthTable {
public:
	TruthTable();
	//TruthTable(std::vector<int>*);
	~TruthTable();

	inline unsigned getRows() {
		return n;
	}
	inline unsigned getNum_To_Fill() {
		return num_to_fill;
	}
	inline std::vector<std::vector<int>> getOutput() {
		return output(n, std::vector<int>(1 << n);
	}

protected:
	const unsigned n = 2;
	unsigned num_to_fill = 1U << (n - 1);	//Fill half the rows at once.
	std::vector<std::vector<int>>* output;
};

class ANDTable : public TruthTable {
public:
	TruthTable TablePopulate();

private: 

};