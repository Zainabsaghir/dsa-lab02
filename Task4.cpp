#include<iostream>
using namespace std;

int main() {
	//rows are students,and cols are subjects
	int rows, cols;
	
	//reading the number of students and subjects
	cout << "Enter the number of Students: ";
	cin >> rows;
	cout << "Enter the number of Subjects: ";
	cin >> cols;

	//validating rows and columns
	if (rows <= 0 || cols <= 0){
		cout << "Error";
		return 0;
	}

	//creating "rows" number of pointers and then for each row, creating "cols" integers
	int** marks = new int* [rows];
	for (int r = 0; r < rows; r++) {
		marks[r] = new int[cols];
	}

	//reading the values for each row and its each column
	for (int r = 0; r < rows; r++){
		cout << "----Student " << r + 1 << " ----;\n";
		for (int c = 0; c < cols; c++){
			cout << "Enter marks for subject " << c + 1 << " :";
			cin >> *(*(marks + r) + c);
			cout << "\n";
		}
	}

	//displaying the matrix
	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < cols; c++) {
			cout << *(*(marks + r) + c) << " ";
		}
		cout << endl;
	}

	int highest_total=0;
	int high_achiever=0;

	//calculating totals for each student
	for (int r = 0; r < rows; r++){
		int total = 0;
		for (int c = 0; c < cols; c++){
			total += *(*(marks + r) + c);
		}
		cout << "Student " << r + 1 << " total: " << total << endl;

		//first student's total becomes the initial highest
		if (r == 0) {
			highest_total = total;
			high_achiever = r + 1;
		}

		//only update when the new total is greater
		else if (total > highest_total){
			highest_total = total;
			high_achiever = r + 1;
		}
	}

	cout << "Top student: " << high_achiever << endl;
	cout << "Highest total: " << highest_total << endl;

	//freeing the memory occupied by the rows "students"
	for (int r = 0; r < rows; r++)
	{
		delete[] marks[r];
	}

	//freeing the memory occupied by the array of row pointers "subjects"
	delete[] marks;

	marks = nullptr;

	return 0;

}