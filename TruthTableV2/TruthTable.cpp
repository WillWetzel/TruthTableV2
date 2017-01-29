/*
 *		Taken from: http://codereview.stackexchange.com/questions/121483/generating-a-2-variable-truth-table-and-performing-boolean-arithmetic
 */

#include <string>
#include <iomanip>
#include "TruthTable.h"
using namespace std;

TruthTable::TruthTable() {
	/*Vectors of vectors, outer length n, inner is 2^n (number of truth results for n inputs)*/
	std::vector<std::vector<int>> output(n, std::vector<int>(1 << n));
	/* Have a 3x8 vector for column based pattern in output data. Using vector means each vector is 0, so only
	* have to worry about setting the values we want to 1. */

	unsigned num_to_fill = 1U << (n - 1);	//Fill half the rows at once.

}

TruthTable::~TruthTable() {
	//Nothing to deallocate
}


TruthTable ANDTable::TablePopulate() {

	TruthTable table;
	unsigned nums_to_fill = table.getNum_To_Fill();

	for (unsigned col = 0; col < table.getRows(); ++col, num_to_fill >>= 1U)		//Loop over each column.
	{
		for (unsigned row = num_to_fill; row < (1U << table.getRows()); row += (num_to_fill * 2))		//Update each row.
		{
			std::fill_n(&output[col][row], num_to_fill, 1);
		}
	}


}


/*
void OutputAndTable(bool *p, bool *q)
{
	cout << "p | q" << " | " << "p A q" << endl;
	for (int i = 0; i < LOGICARRAYSIZE; i++) {
		cout << setw(1) << p[i] << " | ";
		for (int j = 0; j < 1; j++) {
			cout << setw(1) << q[i] << " | " << setw(3) << (p[i] && q[i]);
		}
		cout << endl;
	}
}

void GetAnInput(const char *question, string &answer)
{
	cout << question << endl;
	cin >> answer;
	MyIgnoreCase(answer);
}

void GetAllInput(string &andor, string &ansp, string &ansq)
{
	GetAnInput("Do you want to AND or OR the two propositional variables?", andor);
	if ((andor != "AND") && (andor != "OR")) {
		cerr << "ERROR: Please enter a valid values - (AND or OR)." << endl;
	}
	GetAnInput("Do you want to NOT p? Y/N", ansp);
	GetAnInput("Do you want to NOT q? Y/N", ansq);
}
*/