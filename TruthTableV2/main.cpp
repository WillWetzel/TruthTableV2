/*
*		Taken from: http://codereview.stackexchange.com/questions/121483/generating-a-2-variable-truth-table-and-performing-boolean-arithmetic
*/

#include <iostream>
#include <string>
#include <iomanip>
#include "TruthTable.h"
#include "ANDTable.h"

using namespace std;

int main() {
	const unsigned ROWS = 3;

	ANDTable andGate(ROWS);

	andGate.TablePopulate();
	andGate.printTable();

	getchar();
	getchar();

	return 0;
}
