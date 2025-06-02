#include<iostream>
#include<vector>

using namespace std;

class Chai{

    public:

        string teaName;
        int servings;
        vector<string> ingredients;


        // Constructor
        Chai(){
            teaName = "Unknown";
            servings = 1;
            ingredients = {"Water", "Tea Leaves"};

            cout << "Constructor called!" << endl;
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

    return 0;
}