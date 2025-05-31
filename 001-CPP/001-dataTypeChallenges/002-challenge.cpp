#include<iostream>
using namespace std;

int main(){
    
    float basePrice;
    cin >> basePrice;

    float newPrice = basePrice * 1.1;

    cout << "New price: " << (int)newPrice << endl;

    return 0;
}