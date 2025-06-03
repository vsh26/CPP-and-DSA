#include<iostream>
using namespace std;

// Runtime Polymorphism/ Late Binding/ Dynamic Polymorphism

// Function Overriding/ Method Overriding

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

class GreenTea : public Tea{

    private:
        int steepTime;  // extra property

    public:

        GreenTea(int serv): Tea("Green Tea", serv){
            cout << "Green Tea constructor called!" << endl;
        }

        void brew() const override{
            cout << "Brewing " << teaName << " by steeping green tea leaves" << endl;
        }

        void serve() const override{
            cout << "Serving " << servings << " cups of green tea in transparent glass cups" << endl;
        }

        int getSteepTime() const{
            return steepTime;
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

        void brew() const override final{
            cout << "Brewing " << teaName << " with spices and milk" << endl;
        }

        ~MasalaTea(){
            cout << "Masala Tea destructor called!" << endl;
        }
};

int main(){

    Tea* tea1 = new GreenTea(2);
    Tea* tea2 = new MasalaTea(3);

    // tea1 and tea2 are pointers of type Tea* (base class pointer)
    // But they actually point to derived class objects (GreenTea and MasalaTea).

    tea1->brew();           // brew() from GreenTea class overrides brew() from Tea class
    tea1->serve();          // serve() from GreenTea class overrides serve() from Tea class
    tea2->brew();           // brew() from MasalaTea class overrides brew() from Tea class
    tea2->serve();

    delete tea1;
    delete tea2;

    return 0;
}