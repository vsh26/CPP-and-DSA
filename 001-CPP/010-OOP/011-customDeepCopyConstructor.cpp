#include<iostream>
#include<vector>

using namespace std;

class Chai{

    public:

        string* teaName;
        int servings;

        Chai( string name, int serv){
            teaName = new string(name);

            // this can also be written as
            // teaName = new string;
            // *teaName = name;
            
            servings = serv;
        }

        Chai(Chai &originalObj){
            teaName = new string(*originalObj.teaName);      // deep copy

            // This can also be written as
            // teaName = new string;
            // *teaName = *originalObj.teaName;

            servings = originalObj.servings;
        }

        ~Chai(){
            delete teaName;
            cout << "Destructor called!" << endl;
        }

        void displayChaiDetails(){
            cout << "Chai Name: " << *teaName << endl;
            cout << "Servings: " << servings << endl;
        }
};

int main(){

    Chai chaiOne("Lemon Tea", 2);
    cout << "chaiOne:" << endl;
    chaiOne.displayChaiDetails();
    cout << "_______________________________________________________" << endl;

    // copy the object

    Chai copiedChaiOne(chaiOne);         // Custom Copy Constructor is invoked
    cout << "copiedChaiOne:" << endl;
    copiedChaiOne.displayChaiDetails();
    cout << "_______________________________________________________" << endl;
    cout << "_______________________________________________________" << endl;


    *copiedChaiOne.teaName = "Modified Lemon Tea";


    cout << "chaiOne after modification:" << endl;
    chaiOne.displayChaiDetails();   // Chai Name: Modified Lemon Tea
    cout << "_______________________________________________________" << endl;

    cout << "copiedChaiOne after modification:" << endl;
    copiedChaiOne.displayChaiDetails(); // Chai Name: Modified Lemon Tea
    cout << "_______________________________________________________" << endl;

    /*
    
        Output:
            chaiOne:
            Chai Name: Lemon Tea
            Servings: 2
            _______________________________________________________
            copiedChaiOne:
            Chai Name: Lemon Tea
            Servings: 2
            _______________________________________________________
            _______________________________________________________
            chaiOne after modification:
            Chai Name: Lemon Tea
            Servings: 2
            _______________________________________________________
            copiedChaiOne after modification:
            Chai Name: Modified Lemon Tea
            Servings: 2
            _______________________________________________________
            Destructor called!
            Destructor called!
            
        Hence, the custom implementaion of copy constructor
            can solve the problems with dynamically allocated memory, by creating the deep copy.chaiOne

        Custom copy constructor does not always creates the deep copy of object,
            it depends on implementation.

    */

    return 0;
}