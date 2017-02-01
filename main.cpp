#include <iostream>
#include "TruthTable.h"
#include "ANDTable.h"
#include "ORTable.h"
#include "XORTable.h"
#include "NORTable.h"
#include "NANDTable.h"

using namespace std;

int main() {
	const unsigned COL = 3;

	TruthTable table(COL);
	table.printTable();

	ANDTable andTable(COL);
	andTable.printTable();

	ORTable orTable(COL);
	orTable.printTable();

	XORTable xorTable(COL);
	xorTable.printTable();

	NORTable norTable(COL);
	norTable.printTable();

	NANDTable nandTable(COL);
	nandTable.printTable();

	getchar();
	getchar();

	return 0;
}