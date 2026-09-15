#include<iostream>
using namespace std;

int main() {
	int sales[5];
	int* p = sales;

    cout << "Enter number of items sold over five days: ";

    //reading 5 values from user
    for (int i = 0; i < 5; i++)
    {
        cin >> *(p + i);
    }

    //initial total
    int total = 0;

    //calculating total sales
    cout << "Sales: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *(p + i) << " ";
        total += *(p + i);
    }

    cout << "\nTotal: " << total << endl;

    //adding 2 to the third day’s value through the pointer
    *(p + 2) = *(p + 2) + 2;

    //displaying the updated values and calculating updated total
    cout << "Sales: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *(p + i) << " ";
        total += *(p + i);
    }

    //displaying the updated total
    cout << "\nUpdated Total: " << total << endl;

}