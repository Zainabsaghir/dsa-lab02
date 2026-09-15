#include<iostream>
using namespace std;

int main() {
    int sales[2][3];
    int (*rowPtr)[3] = sales;

    //reading six values
    cout << "Enter sales for 2 branches over 3 days:\n";

    for (int r = 0; r < 2; r++){
        cout << "-------Branch " << r+1  << "-------\n";
        for (int c = 0; c < 3; c++)
        {
            cout << "Day " << c+1  << ": ";
            cin >> *(*(rowPtr + r) + c);
            cout << endl;
        }
    }

    //displaying the table
    cout << "\nSales table:\n";

    for (int r = 0; r < 2; r++){
        for (int c = 0; c < 3; c++){
            cout << *(*(rowPtr + r) + c) << " ";
        }
        cout << endl;
    }

    //calculating total for each branch
    cout << "\nBranch totals:\n";

    for (int r = 0; r < 2; r++){
        int total = 0;
        for (int c = 0; c < 3; c++){
            total += *(*(rowPtr + r) + c);
        }
        cout << "Branch " << r + 1 << ": " << total << endl;
    }

    //calculating total for each day
    cout << "\nDay totals:\n";

    for (int c = 0; c < 3; c++){
        int total = 0;
        for (int r = 0; r < 2; r++) {
            total += *(*(rowPtr + r) + c);
        }
        cout << "Day " << c + 1 << ": " << total << endl;
    }

    return 0;
}
