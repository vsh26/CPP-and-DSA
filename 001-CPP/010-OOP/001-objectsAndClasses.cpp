#include<iostream>
#include<vector>

using namespace std;

class Chai{

    // Access Modifier/ Access Specifier
    public:

        // Data Members/ Attributes /Properties
        string teaName;
        int servings;
        vector<string> ingredients;

        // Member Function/ Method
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

    // chaiOne is object of class Chai
    Chai chaiOne;

    chaiOne.teaName = "Lemon Tea";
    chaiOne.servings = 10;
    chaiOne.ingredients = {"Water", "Tea Leaves", "Lemon", "Honey"};

    Chai chaiTwo;
    chaiTwo.teaName = "Masala Chai";
    chaiTwo.servings = 12;
    chaiTwo.ingredients = {"Water", "Milk", "Tea Leaves", "Sugar", "Ginger", "Cardamon"};

    chaiOne.displayChaiDetails();
    chaiTwo.displayChaiDetails();

    return 0;
}