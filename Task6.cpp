#include<iostream>
using namespace std;

int main() {
    int n = 3;
    int* values = new int[n];

    //reading three integers
    for (int i = 0; i < n; i++)
    {
        cin >> values[i];
    }

    //displaying all three integers
    for (int i = 0; i < n; i++)
    {
        cout << values[i] << " ";
    }

    cout << endl;

    //releasing the dynamically allocated memory
    delete[] values;

    //reseting the pointer
    values = nullptr;

    return 0;
}

