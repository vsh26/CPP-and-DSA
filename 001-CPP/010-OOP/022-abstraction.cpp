#include<iostream>
using namespace std;

class Tea{

    public:
        virtual void prepareIngredients() = 0;  // pure virtual function
        virtual void brew() = 0;    // pure virtual function
        virtual void serve() = 0;   // pure virtual function

        void makeTea(){
            prepareIngredients();
            brew();
            serve();
        }
};
// Tea is an abstract class

// Derived class
class GreenTea : public Tea{

    public:
        void prepareIngredients() override{
            cout << "Green tea leaves and water is ready!" << endl;
        }

        void brew() override{
            cout << "Green tea is brewed!" << endl;
        }

        void serve() override{
            cout << "Green tea is served!" << endl;
        }

};

class MasalaTea : public Tea{

    public:
        void prepareIngredients() override{
            cout << "Tea masala, tea leaves and water is ready!" << endl;
        }

        void brew() override{
            cout << "Masala tea is brewed!" << endl;
        }

        void serve() override{
            cout << "Masala tea is served!" << endl;
        }

};

int main(){

    GreenTea myGreenTea;
    MasalaTea myMasalTea;

    myGreenTea.makeTea();
    myMasalTea.makeTea();

    return 0;
}