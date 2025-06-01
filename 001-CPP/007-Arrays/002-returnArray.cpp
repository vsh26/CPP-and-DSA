#include<iostream>
using namespace std;

int* prepareChaiOrders(int numOfCups){

    int* orders = new int[numOfCups];

    for(int i = 0; i < numOfCups; i++){
        orders[i] = (i+1) * 10;
    }

    return orders;

}

int main(){

    int n = 5;
    
    int* chaiOrder = prepareChaiOrders(n);

    for(int i = 0; i < n; i++){
        cout << "Order " << i+1 << ": " << chaiOrder[i] << " ml" << endl;
    }

    return 0;
}