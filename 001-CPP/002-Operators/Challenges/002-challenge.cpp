#include<iostream>
using namespace std;

int main(){
    
    int numOfBags;
    cin >> numOfBags;

    if(numOfBags < 20){
        numOfBags += 10;
    }

    cout << numOfBags << endl;

    return 0;
}