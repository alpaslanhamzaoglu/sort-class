#include "Sort.h"
#include <vector>
#include <string>

using namespace std;

// Constructure Implementations
Sort::Sort(vector<int> vector)
{
	int_vector = vector;
}

Sort::Sort(vector<string> vector)
{
	string_vector = vector;
}

Sort::Sort(vector<vector<int> > vector)
{
	matrix_vector = vector;
}

// Function Implementations

// Sorting a integer vector to ascending
vector<int> Sort::Sort_int_vector()
{
	int j, k, min, size = int_vector.size() - 1, temp;
	
	for (k = 0; k < size; k++)
	{		
		min = k;

		for (j = k + 1; j <= size; j++)
		{
			if (int_vector[j] < int_vector[min])
			{
				min = j;
			}
		}

		temp = int_vector[k];
		int_vector[k] = int_vector[min];
		int_vector[min] = temp;
	}

	return int_vector;
}

// Sorting a string vector by first letter to ascending
vector<string> Sort::Sort_string_vector()
{
	int j, k, min, size = string_vector.size() - 1;
	string temp;

	for (k = 0; k < size; k++)
	{
		min = k;

		for (j = k + 1; j <= size; j++)
		{
			toupper(string_vector[j][0]);
			toupper(string_vector[min][0]);

			if (string_vector[j][0] < string_vector[min][0])
			{
				min = j;
			}
		}

		temp = string_vector[k];
		string_vector[k] = string_vector[min];
		string_vector[min] = temp;
	}

	return string_vector;
}

// Sorting one row items to ascending
vector<vector<int> > Sort::Sort_matrix_vector()
{
	int j, k, min, size, temp;

	for (int m = 0; m < matrix_vector.size(); m++)
	{
		size = matrix_vector[m].size();

		for (k = 0; k < size; k++)
		{
			min = k;

			for (j = k + 1; j < size; j++)
			{
				if (matrix_vector[m][j] < matrix_vector[m][min])
				{
					min = j;
				}
			}

			temp = matrix_vector[m][k];
			matrix_vector[m][k] = matrix_vector[m][min];
			matrix_vector[m][min] = temp;
		}
	}

	return matrix_vector;
}

// Sorting a whole matrix to ascending
vector<vector<int> > Sort::Sort_all_matrix()
{
	vector<int> new_vec;

	int j, k, min, temp, count = 0, final = 0;

	for (int i = 0; i < matrix_vector.size(); i++)
	{
		int size = matrix_vector[i].size();

		for (int h = 0; h < size; h++)
		{
			new_vec.push_back(matrix_vector[i][h]);
			count++;
		}
	}

	for (k = 0; k < new_vec.size(); k++)
	{
		min = k;

		for (j = k + 1; j < new_vec.size(); j++)
		{
			if (new_vec[j] < new_vec[min])
			{
				min = j;
			}
		}

		temp = new_vec[k];
		new_vec[k] = new_vec[min];
		new_vec[min] = temp;
	}

	for (int i = 0; i < matrix_vector.size(); i++)
	{
		for (int g = 0; g < matrix_vector[i].size(); g++)
		{
			matrix_vector[i][g] = new_vec[final];

			final++;
		}
	}

	return matrix_vector;
}

// Print an integer vectors
void Sort::Print_int_vector(vector<int>& vector) const
{
	for (int i = 0; i < vector.size(); i++)
	{
		cout << vector[i] << " ";
	}

	cout << endl;
}

// Print a string vectors
void Sort::Print_string_vector(vector<string>& vector) const
{
	for (int i = 0; i < vector.size(); i++)
	{
		cout << vector[i] << " ";
	}

	cout << endl;
}

// Print a matrix vectors which rows by columns
void Sort::Print_matrix(vector<vector<int> >& vector) const
{
	for (int i = 0; i < matrix_vector.size(); i++)
	{
		for (int j = 0; j < matrix_vector[i].size(); j++)
		{
			cout << matrix_vector[i][j] << " ";
		}

		cout << endl;
	}
}