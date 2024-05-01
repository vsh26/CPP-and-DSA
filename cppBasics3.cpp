#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // Strings --> Collection of characters

    string str = "Hello";
    cout << str << endl;        // Hello
    cout << str.size() << endl; // 5

    string str1;
    cin >> str1;                // input -> World
    cout << str1 << endl;       // World
    cout << str1.size() << endl;// 5

    cin >> str1;                // input -> World ABCD
    cout << str1 << endl;       // World
    cout << str1.size() << endl;// 5
    // IMP --> (Only "World" is read, as cin stops reading after WHITESPACE or NEWLINE)

    // Concatenation of strings
    cout << str + " " + str1 << endl;   // Hello World

    // Accessing characters of strings
    cout << str[0] << endl;     // H


    // GETLINE
    string str2;
    cin.ignore(); // IMP --> (Always use after cin to move control to new line)
    getline(cin, str2);         // input -> World     ABCD
    cout << str2 << endl;       // World     ABCD

    // push_back
        // reverse string example

        string str3 = "Hello";
        string str3_rev;

        // Using loop

            for (int i = str.size() - 1 ; i >= 0 ; --i){
                str3_rev = str3_rev + str3[i];
            }

            cout << str3_rev << endl;   // olleH

        string str4 = "Hello";
        string str4_rev;
        // Using push_back function

            for (int i = str.size() - 1 ; i >= 0 ; --i ){
                str4_rev.push_back(str[i]);
            }

            cout << str4_rev << endl;   // olleH
    
    // Always use push_back() function instead of loop method
        // 1. Avoid adding char in string
        // 2. Time Complexity

    
    // Dealing with large numbers

        // Exa: Extracting last digit from string
        
        string s = "12345678987654321";
        int last_digit = s[s.size() - 1];       // (ASCII value of character '1' is extracted)
        cout << last_digit << endl;             // 49
        last_digit = s[s.size() - 1] - '0';     // (ASCII value is CONVBERTED into int by subtracting the ASCII value of character '0')
        cout << last_digit << endl;             // 1

    // IN CP,
        // For LOCAL ARRAY SIZE <= 10^5, as there is size limit for local arrays, so we have to use GLOBAL ARRAYS

    return 0;
}