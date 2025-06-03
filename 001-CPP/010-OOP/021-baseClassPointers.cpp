/*
    Base class pointers are used to point to derived objects

    Why do this? 
    The big reason: Using base class pointers/ references enable Polymorphism

        Write code that works for many types without knowing exact types upfront
            Imagine you have a program that deals with many kinds of teas:
            GreenTea, MasalaTea, BlackTea, HerbalTea, etc.

            Instead of writing separate functions or code for each tea type, you write one function that accepts a pointer or reference to the base class Tea and calls common functions like brew() or serve().

        Thanks to runtime polymorphism (virtual functions),
        the correct version of these functions is called — the one belonging to the actual derived type —
        even if the pointer or reference is just of type Tea* or Tea&.

        You don’t have to write repetitive or type-specific code!

        Exa: GreenTea and MasalaTea has common methods brew(), serve().
                So we do not need to write brewGreenTea(), brewMasalaTea(),
                serveGreenTea(), serveMasalaTea() seperately for each class.
                We can simply override the base class methods
    
    
    Note:
        - Base class pointers can point to derived objects with extra members.
        - You only have direct access to base class members through base pointers.
        - To access derived-only members (exa. addLemon() method in GreenTea class),
            you need to use casting (e.g., dynamic_cast).
*/

#include <iostream>
#include <vector>
using namespace std;

class Tea {

    public:

        virtual void brew() const {
            cout << "Brewing generic tea" << endl;
        }

        virtual void serve() const {
            cout << "Serving generic tea" << endl;
        }

        virtual ~Tea() = default;  // Virtual destructor
        // A virtual destructor ensures that when a base class pointer is used to delete a derived class object
        // the destructor of the derived class is also called properly.
};

class GreenTea : public Tea {

    public:

        void brew() const override {
            cout << "Brewing green tea by steeping green leaves" << endl;
        }

        void serve() const override {
            cout << "Serving green tea in glass cups" << endl;
        }

        void addLemon() {
            cout << "Lemon added to green tea" << endl;
        }
};

class MasalaTea : public Tea{

    public:

        void brew() const override{
            cout << "Brewing masala tea with spices and milk" << endl;
        }

        void serve() const override{
            cout << "Serving masala tea hot in mugs" << endl;
        }
};


int main() {

    Tea* tea1 = new GreenTea();
    Tea* tea2 = new MasalaTea();

    tea1->brew();
    // tea1->addLemon();    no direct access of derived-class member to base-class pointer
    tea1->serve();
    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;
}