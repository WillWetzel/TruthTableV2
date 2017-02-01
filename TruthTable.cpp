#include <string>
#include <iomanip>
#include "TruthTable.h"
using namespace std;

TruthTable::TruthTable(const int x) {
	colCount = x;
	rowCount = pow(2, x - 1);

	//Create table - Array of Pointers
	table = new int*[rowCount];
	for (int i = 0; i < rowCount; i++) {
		table[i] = new int[colCount];			//Each pointer points to another array.
	}
	//Initialize all elements to 0.
	for (int i = 0; i < rowCount; i++) {
		for (int j = 0; j < colCount; j++) {
			table[i][j] = 0;
		}
	}

	cout << "Making TruthTable" << endl;
}

TruthTable::TruthTable(const TruthTable& table) {
	if (this != &table)
		*this = table;
}

TruthTable::~TruthTable() {
	for (int i = 0; i < rowCount; i++) {
		delete[] table[i];
	}
	delete[] table;
	cout << "Table deleted" << endl;
}

void TruthTable::printTable() {
	for (int i = 0; i < rowCount; i++) {
		for (int j = 0; j < colCount; j++) {
			cout << "(" << i << "," << j << ") : " << table[i][j] << " ";
		}
		cout << endl;
	}

}