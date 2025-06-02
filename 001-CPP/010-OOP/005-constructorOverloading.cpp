#include<iostream>
#include<vector>

using namespace std;

class Chai{

    public:

        string teaName;
        int servings;
        vector<string> ingredients;


        // Constructor Overloading (Multiple constructors with different parameter lists)

        Chai(){
            teaName = "Unknown";
            servings = 1;
            ingredients = {"Water", "Tea Leaves"};

            cout << "Constructor called!" << endl;
        }

        Chai( string name, int serv, vector<string> ingr){
            teaName = name;
            servings = serv;
            ingredients = ingr;

            cout << "Parameterized Constructor called!" << endl;
        }

        void displayChaiDetails(){
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

int main(){

    Chai defaultChai;
    defaultChai.displayChaiDetails();

    Chai chaiOne("Lemon Tea", 2, {"Water", "Tea Leaves", "Lemon", "Honey"});
    chaiOne.displayChaiDetails();

    return 0;
}