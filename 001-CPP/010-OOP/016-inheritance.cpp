#include<iostream>
using namespace std;

// Base class/ Main class/ Parent class/ Original class

class Tea{
    protected:
        string teaName;
        int servings;

    public:
        Tea(string name, int serv){
            teaName = name;
            servings = serv;
            cout << "Tea constructor called for " << teaName << endl;
        }

        virtual void brew() const{
            cout << "Brewing " << teaName << " with generic method" << endl;
        }

        virtual void serve() const{
            cout << "Serving " << servings << " cups of tea with generic method" << endl;
        }

        virtual ~Tea(){
            cout << "Tea destructor called for " << teaName << endl;
        }
};

// Derived called

class GreenTea : public Tea{

    public:
        GreenTea(int serv): Tea("Green Tea", serv){
            cout << "Green Tea constructor called!" << endl;
        }

        void brew() const override{
            cout << "Brewing " << teaName << " by steeping green tea leaves" << endl;
        }

        ~GreenTea(){
            cout << "Green Tea destructor called!" << endl;
        }
};

class MasalaTea : public Tea{

    public:
        MasalaTea(int serv): Tea("Masala Tea", serv){
            cout << "Masala Tea constructor called!" << endl;
        }

        // Final implementation of brew method
        // Child object of MasalaTea won't be able to override this method further
        void brew() const override final{
            cout << "Brewing " << teaName << " with spices and milk" << endl;
        }

        ~MasalaTea(){
            cout << "Masala Tea destructor called!" << endl;
        }
};

class SpicyMasalaTea : public MasalaTea{
    public:
        // void brew() const override{
        //     cout << "Brewing " << teaName << " with more spices and milk" << endl;
        // }

};

int main(){

    Tea* tea1 = new GreenTea(2);
    Tea* tea2 = new MasalaTea(3);

    tea1->brew();
    tea1->serve();
    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;

    return 0;
}