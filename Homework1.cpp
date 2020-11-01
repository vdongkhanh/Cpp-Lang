#include <iostream>
using namespace std;

int main(int argc, const char* argv[])
{
    int accNum = 0;
    float beginBal, newBal, charges, credits, creLim;
    while (accNum != -1)
    {
        cout << "Enter account number (-1 to quit): ";
        cin >> accNum;
        if (accNum == -1)
            return 0;
        else {
            cout << "Enter beginning balance number: ";
            cin >> beginBal;
            cout << "Enter total charges: ";
            cin >> charges;
            cout << "Enter total credits: ";
            cin >> credits;
            cout << "Enter credit limit: ";
            cin >> creLim;

            newBal = (beginBal + charges) - credits;
            cout << "New balance is: " << newBal << endl;

            if (newBal < creLim)
            {
                cout << "\n";
            }
            else
            {
                cout << "Account: " << accNum << endl;
                cout << "Credit limit: " << creLim << endl;
                cout << "Balance: " << newBal << endl;
                cout << "Credit limit exceeded!" << endl;
                cout << "\n";
            }
        }
    }
    exit(3);

    return 0;
}

