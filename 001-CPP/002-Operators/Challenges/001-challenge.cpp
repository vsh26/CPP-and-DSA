#include<iostream>
using namespace std;

int main(){
    
    int numOfTeaPacks;
    cin >> numOfTeaPacks;

    float pricePerPack;
    cin >> pricePerPack;
    
    float totalPrice = numOfTeaPacks * pricePerPack * 1.10;

    cout << totalPrice << endl;

    return 0;
}