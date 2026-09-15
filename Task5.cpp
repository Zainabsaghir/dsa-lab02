#include<iostream>
using namespace std;

int main() {
    int n;

    //prompting the user for number of marks originally
    cout << "Enter number of marks: ";
    cin >> n;

    //validating n
    if (n < 1 || n > 10)
    {
        cout << "Invalid n";
        return 0;
    }

    //allocating original block of memory
    int* marks = new int[n];

    //reading original marks
    cout << "Enter " << n << " marks: ";
    for (int i = 0; i < n; i++)
    {
        cin >> *(marks + i);
    }

    //allocating new block of memory with one extra space
    int* new_marks = new int[n + 1];

    //copying old marks into new block
    for (int i = 0; i < n; i++)
    {
        *(new_marks + i) = *(marks + i);
    }

    //reading the new student's mark
    cout << "Enter new mark: ";
    cin >> *(new_marks + n);

    //releasing old block of memory
    delete[] marks;

    //making marks point to the new block ie new_marks
    marks = new_marks;

    //increasing n
    n++;

    //displaying updated marks
    cout << "Updated marks: ";
    for (int i = 0; i < n; i++)
    {
        cout << *(marks + i) << " ";
    }

    cout << endl;

    //releasing the final block of memory
    delete[] marks;

    //setting the pointer to null
    marks = nullptr;

    return 0;
}
