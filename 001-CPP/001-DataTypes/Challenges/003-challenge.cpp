#include<iostream>
using namespace std;

int main(){
    
    string favTea;
    cout << "Enter the name of your favourite tea: ";
    getline(cin, favTea);

    int numOfCups;
    cout << "Enter the number of cups of tea you want: ";
    cin >> numOfCups;

    cout << "Your order for " << numOfCups << " cups of " << favTea << " is successfully placed!" << endl;

    return 0;
}