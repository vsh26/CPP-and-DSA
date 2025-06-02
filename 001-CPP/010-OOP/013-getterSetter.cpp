#include<iostream>
#include<vector>
using namespace std;

class Chai{

    private:
        string teaName;
        int servings;
        vector<string> ingredients;

    public:
        Chai(){
            teaName = "Unkown tea";
            servings = 1;
            ingredients = {"Water", "Tea leaves"};
        }

        Chai(string name, int serv, vector<string> ingr){
            teaName = name;
            servings = serv;
            ingredients = ingr;
        }

        // Getter
        string getTeaName(){
            return teaName;
        }

        int getServings(){
            return servings;
        }

        vector<string> getIngredients(){
            return ingredients;
        }

        // Setter
        void setTeaName(string name){
            // We can also write logic here, exa: we need to capitalize name
            teaName = name;
        }

        void setServings(int serv){
            servings = serv;
        }

        void setIngredients(vector<string> ingr){
            ingredients = ingr;
        }

        // member function
        // this function can also access the private variables as they are in the same class
        void displayChaiDetails(){
            cout << "Chai Name: " << teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients: ";

            for(string ingredient : ingredients){
                cout << ingredient << " ";
            }
            cout << endl;
        }

};

int main(){

    Chai chaiOne;
    chaiOne.setTeaName("Lemon Tea");
    cout << chaiOne.getTeaName() << endl;

    chaiOne.displayChaiDetails();

    return 0;
}