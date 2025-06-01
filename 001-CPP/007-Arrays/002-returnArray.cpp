#include<iostream>
using namespace std;

//This function that returns a pointer to an integer array
int* prepareChaiOrders(int numOfCups){

    int* orders = new int[numOfCups];       // Dynamically allocate array. Memory allocated in heap

    for(int i = 0; i < numOfCups; i++){
        orders[i] = (i+1) * 10;             // Each cup is (i+1) * 10 ml
    }

    return orders;                          // Return pointer to the array

}

int main(){

    int n = 5;
    
    int* chaiOrder = prepareChaiOrders(n);  // Get dynamic array from function

    for(int i = 0; i < n; i++){
        cout << "Order " << i+1 << ": " << chaiOrder[i] << " ml" << endl;
    }

    delete[] chaiOrder;                     // Free dynamically allocated memory

    return 0;
}