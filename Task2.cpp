#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    //validating n
    if (n <= 0)
    {
        cout << "Error: Invalid number of students." << endl;
        return 0;
    }
    //dynamic allocating memory for array
    int* marks = new int[n];
    //reading marks from the user
    cout << "Enter " << n << " marks: ";

    for (int i = 0; i < n; i++)
    {
        cin >> *(marks + i);
    }
    int total = 0;
    int counter = 0;//keeps tracks of marks greater than or equal to 50

    cout << "\nMarks: ";
    //displaying marks and calculating total marks and the pass_count
    for (int i = 0; i < n; i++)
    {
        cout << *(marks + i) << " ";

        total += *(marks + i);

        if (*(marks + i) >= 50)
        {
            counter++;
        }
    }
    //calculating average as a double
    double average = (double)total / n;
    cout << "\nTotal: " << total;
    cout << "\nAverage: " << average;
    cout << "\nPass Count: " << counter << endl;

    //releasing memory
    delete[] marks;
    marks = nullptr;

    return 0;
}
