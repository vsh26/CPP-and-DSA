/*

    this
        - this is a special pointer in C++ that points to the current object
        - this->prop is same as (*this).prop

*/

#include<iostream>
#include<vector>

using namespace std;

class Chai{

    public:

        string teaName;
        int servings;
        vector<string> ingredients;

        Chai( string teaName, int servings, vector<string> ingredients){
            this->teaName = teaName;
            this->servings = servings;
            this->ingredients = ingredients;

            cout << "Parameterized Constructor called!" << endl;
        }

        void displayChaiDetails(){

            cout << this << endl;

            cout << "Chai Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients: ";

            for(string ingredient : ingredients){
                cout << ingredient << " ";
            }
            cout << endl;
        }

    private:

        string chaiUniqueNo;
};

class Car{

    public:
        string carName;
        string variant;

        Car(string carName, string variant){
            (*this).carName = carName;
            (*this).variant = variant;
        }

        void displayCarDetails(){
            cout << this << endl;
            cout << "Car Name: " << carName << endl;
            cout << "Variant: " << variant << endl;
        }
};

int main(){

    Chai chaiOne("Lemon Tea", 2, {"Water", "Tea Leaves", "Lemon", "Honey"});
    chaiOne.displayChaiDetails();

    Car carOne("Range Rover", "Velar");
    carOne.displayCarDetails();

    return 0;
}