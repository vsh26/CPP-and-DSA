#include<iostream>
#include<vector>

using namespace std;

class Chai{

    public:

        string teaName;
        int servings;

        Chai( string name, int serv){
            teaName = name;
            servings = serv;
        }

        Chai(Chai &originalObj){
            teaName = originalObj.teaName;      // shallow copy
            servings = originalObj.servings;    // shallow copy
        }

        void displayChaiDetails(){
            cout << "Chai Name: " << teaName << endl;
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


    copiedChaiOne.teaName = "Modified Lemon Tea";


    cout << "chaiOne after modification:" << endl;
    chaiOne.displayChaiDetails();   // Chai Name: Lemon Tea
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

        Shallow copy of object is created here.
    */
    return 0;
}