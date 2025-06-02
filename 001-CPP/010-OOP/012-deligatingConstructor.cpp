#include<iostream>
#include<vector>

using namespace std;

class Chai{

    public:

        string teaName;
        int servings;
        vector<string> ingredients;

        // Deligating constructor
        Chai(string name) : Chai(name, 1, {"Water", "Tea Leaves"}){}

        // Main constructor
        Chai( string name, int serv, vector<string> ingr){
            teaName = name;
            servings = serv;
            ingredients = ingr;

            cout << "Main Constructor called!" << endl;
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

    Chai chaiOne("Quick Chai");
    chaiOne.displayChaiDetails();

    return 0;
}