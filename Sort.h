#ifndef _SORT_H
#define _SORT_H

#include <iostream>
#include <vector>

using namespace std;

class Sort
{
	public: 

		Sort(vector<int> vector);						// Integer vector
		Sort(vector<string> vector);						// String Vector
		Sort(vector<vector<int> > vector);					// Matrix Vector

		vector<int> Sort_int_vector();						// Sort an integer vector
		vector<string> Sort_string_vector();					// Sort a string vector
		vector<vector<int> > Sort_matrix_vector();				// Sort rows in matrix vector
		vector<vector<int> > Sort_all_matrix();					// Sort whole matrix elements

		void Print_int_vector(vector<int>& vector) const;		 	// Print an integer vectors
		void Print_string_vector(vector<string>& vector) const;  		// Print a string vectors
		void Print_matrix(vector<vector<int> >& vector) const;	 		// Print a maxtrix vectors

	private:

		vector<int> int_vector;
		vector<string> string_vector;
		vector<vector<int> > matrix_vector; 

};

#endif
