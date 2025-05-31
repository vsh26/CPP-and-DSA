#include<iostream>
using namespace std;

int main(){
    
    int numOfCups;
    cin >> numOfCups;

    bool isMember;
    cin >> isMember;

    if(numOfCups > 12 || isMember){
        cout << "Eligible for discount!" << endl;
    } else {
        cout << "Not eligible for discount!" << endl;
    }

    return 0;
}