#include<iostream>
using namespace std;

int getMax(int size, int arr[]){

    int maxElement = arr[0];

    for(int i = 1; i < size; i++){
        if(maxElement < arr[i]){
            maxElement = arr[i];
        }
    }

    return maxElement;
}

int main(){

    int arr[] = {2, 10, 3, 1, -6};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << getMax(size, arr) << endl;
}