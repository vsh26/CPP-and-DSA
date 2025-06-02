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

        // Destructor
        ~Chai(){
            delete teaName;     // to avoid memory leak
            cout << "Destructor called!" << endl;
        }

        // Destructor is automatically invoked when an object goes out of scope or is deleted.
        // It cleans up the object before it is destroyed.
        // For members with automatic storage (stack memory), no explicit action is needed.
        // But when your class manages dynamic memory (allocated with 'new'),
        //      the destructor should explicitly free that memory (using 'delete') to avoid leaks.

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
    
    // copy the object, without copy constructor
    
    Chai copiedChaiOne = chaiOne;
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

        Why copy constructor is needed?
        Because there is problem in copying the objects in this way.

        Let's have a look at output:

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
            Chai Name: Modified Lemon Tea
            Servings: 2
            _______________________________________________________
            copiedChaiOne after modification:
            Chai Name: Modified Lemon Tea
            Servings: 2
            _______________________________________________________
            Destructor called!
            Segmentation fault (core dumped)

            
        1. Here, shallow copy of the object is created

        2. Hence, since teaName is in the dynamically allocated memory,
            during shallow copy, the reference to that memory location is copied.
            A new copy of teaName is not created in dynamic memory.
            It just copies the pointer teaName from chaiOne into copiedChaiOne.
            It means both objects share the same dynamic memory (i.e., point to same string in heap memory)

        3. Due to this, modification in teaName of one object,
            leads to modification in that of other object as well.

        4. Since we have to manually free the memory,
            we delete the pointer teaName,
            but, when the Destructor for first object is called the pointer teaName is deleted,
            and due to this when the Destructor for second object is called the pointer teaName does not exist.
            i.e., we are trying to delete same memory twice
            This leads to Segmentation Fault.

        5. Solution: Write a Deep Copy Constructor
    */ 

    return 0;
}