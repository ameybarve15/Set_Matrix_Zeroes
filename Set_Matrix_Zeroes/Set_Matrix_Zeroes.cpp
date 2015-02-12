/* Given a m x n matrix, if an element is 0, set its entire row and column to 0. Do it in place.*/

#include <vector>
using namespace std;

void setZeroes(vector<vector<int> > &matrix) {

	if (matrix.size() == 0) return;
	vector<int> rows(matrix.size());
	vector<int> columns(matrix.at(0).size());

	for(int i=0; i<matrix.size(); i++)
	{
		for(int j=0; j<matrix.at(0).size(); j++)
		{
			if (matrix[i][j] == 0)
			{
				rows[i] = 1;
				columns[j] = 1;
			}
		}
	}

	for(int i=0; i<matrix.size(); i++)
	{
		for(int j=0; j<matrix.at(0).size(); j++)
		{
			if (rows[i] == 1 || columns[j] == 1)
			{
				matrix[i][j] = 0;
			}
		}
	}
}