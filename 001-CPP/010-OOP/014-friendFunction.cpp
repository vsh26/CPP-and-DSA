#include<iostream>
#include<vector>
using namespace std;

class Chai{

    private:

        string teaName;
        int servings;

    public:

        Chai(string name, int serv){
            teaName = name;
            servings = serv;
        }

        void display() const{
            cout << "Tea Name: " << teaName << endl;
        }

        friend bool compareServings(const Chai &chai1, const Chai &chai2);
};

bool compareServings(const Chai &chai1, const Chai &chai2){
    return chai1.servings > chai2.servings;
}

int main(){

    Chai masalaChai("Masala chai", 4);
    Chai gingerChai("Ginger chai", 8);

    masalaChai.display();
    gingerChai.display();

    if(compareServings(masalaChai, gingerChai)){
        cout << "Masala chai is having more servings" << endl;
    } else {
        cout << "Ginger chai is having more servings" << endl;
    }

    return 0;
}