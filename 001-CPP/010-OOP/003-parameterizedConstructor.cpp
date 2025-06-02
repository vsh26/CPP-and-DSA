#include<iostream>
#include<vector>

using namespace std;

class Chai{

    public:

        string teaName;
        int servings;
        vector<string> ingredients;


        // Parameterized Constructor
        Chai( string name, int serv, vector<string> ingr){
            teaName = name;
            servings = serv;
            ingredients = ingr;

            cout << "Parameterized Constructor called!" << endl;
        }

        // Another Way to declare constructor
        // Chai(string name, int serv, vector<string> ingr): teaName(name), servings(serv), ingredients(ingr){}

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

    Chai chaiOne("Lemon Tea", 2, {"Water", "Tea Leaves", "Lemon", "Honey"});
    chaiOne.displayChaiDetails();

    return 0;
}