#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //DATA TYPES
        //char, int, float, double, bool

    char c = 'a';
    int a = 1;
    double b = 3.5;

    cout << c << endl;  // a
    cout << a << endl;  // 1
    cout << b << endl;  // 3.5

    //Putting a double value into int
    a = 3.5;
    cout << a << endl;  // 3 (i.e, we can only store int in int)

    bool d = false;
    bool e = true;
    bool f = 0;
    bool g = 1;
    bool h = 3.2;

    cout << d << endl;  // 0
    cout << e << endl;  // 1
    cout << f << endl;  // 0
    cout << g << endl;  // 1
    cout << h << endl;  // 1 (every other value apart from 0 is considered as true)

    // ++i (PRE-INCREMENT) -> First increment then use
    // i++ (POST-INCREMENT) -> First use then increment

    a = 10;
    cout << a++ << endl;    // 10
    cout << a << endl;      // 11

    a = 10;
    cout << ++a << endl;    // 11
    cout << a << endl;      // 11

    a = 10;
    b = a++;
    cout << b << endl;      // 10
    cout << a << endl;      // 11

    a = 10;
    b = ++a;
    cout << b << endl;      // 11
    cout << a << endl;      // 11

    // Character
        //Every chatracter has an ASCII value (https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html)

    char m = 'a';
    char n = 'c';

    cout << m << endl;      // a
    cout << (int)m << endl; // 97
    cout << n << endl;      // c
    cout << (int)n << endl; // 99

    cout << m - n << endl;  // -2

    // ASCII for
        // A    --> 65
        // a    --> 97
        // '0'  --> 48
    
    //  ASCII values for characters
    cout << (int) 'A' << endl;
    cout << (int) 'a' << endl;
    cout << (int) '0' << endl;

    // UPPERCASE to lowercase
    char p;
    p = 'A' + 32;
    cout << p << endl;      // a

    // lowercase to UPPERCASE
    char q;
    q = 'v' - 32;
    cout << q << endl;      // V

    // Extracting int from char
    int r;
    r = '8' - '0';
    cout << r << endl;      // 8

    return 0;
}