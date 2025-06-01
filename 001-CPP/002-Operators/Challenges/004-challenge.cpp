#include<iostream>
using namespace std;

int main(){
     // Stock is encoded as a bitmask: 1 = Green, 2 = Black, 4 = Oolong

    int stock = 1 | 4;
    // (i.e.; either 1 or 4 is in the stock, not 2);

    int teaType;
    cout << "Enter tea type to check availability (1=Green, 2=Black, 4=Oolong): ";

    cin >> teaType;

    if (teaType != 1 && teaType != 2 && teaType != 4) {
        cout << "Invalid tea type!" << endl;
        return 0;
    }

    if (stock & teaType) {
        cout << "Tea is in stock." << endl;
    } else {
        cout << "Tea is not in stock." << endl;
    }

    return 0;
}

