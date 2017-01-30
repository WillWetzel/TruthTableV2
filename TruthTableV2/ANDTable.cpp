#include <string>
#include <iomanip>
#include "ANDTable.h"
using namespace std;

void ANDTable::TablePopulate() {

	unsigned nums_to_fill = num_to_fill;

	for (unsigned col = 0; col < n; ++col, num_to_fill >>= 1U)		//Loop over each column.
	{
		for (unsigned row = num_to_fill; row < (1U << n); row += (num_to_fill * 2))		//Update each row.
		{
			std::fill_n(&output[col][row], num_to_fill, 1);
		}
	}
}