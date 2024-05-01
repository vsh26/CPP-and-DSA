#include<bits/stdc++.h>
using namespace std;

int main(){

    // CALCULATION ORDER IN DATA TYPES

        // --------- INCREASING ------------------------>
        // char, int, long, long long, float, double

    cout << 7/2 << endl;        // 3
    cout << 7/2.0 << endl;      // 3.5
    cout << 'a' + 1 << endl;    // 98

    int a;
    double b;

    a = 3/2;
    cout << a << endl;          // 1
    
    a = 3/2.0;
    cout << a << endl;          // 1

    b = 3/2;
    cout << b << endl;          // 1

    b = 3/2.0;
    cout << b << endl;          // 1.5

    // OVERFLOW, UNDERFLOW

        // -10^9  <    int        < 10^9
        // -10^12 <  long int     < 10^12
        // -10^18 < long long int < 10^18

    int m = INT_MAX;
    cout << m << endl;              // 2147483647
    cout << m + 1 << endl;          // -2147483648

    int n = INT_MIN;
    cout << n << endl;              // -2147483648
    cout << n-1 << endl;            // 2147483647

    int p = 100000;
    int q = 100000;
    int r = p*q;
    long long int s = p*1LL*q;

    cout << p*q << endl;            // 1410065408
    cout << r << endl;              // 1410065408
    cout << (long long)p*q << endl; // 10000000000
    cout << p*1LL*q << endl;        // 10000000000
    cout << s << endl;              // 10000000000

    // PRECISION ERROR
        // Why we don't use use double instead of long long int?

    double c = 100000;
    double d = 100000;
    double e = c*d;
    cout << e << endl;                              // 1e+010
    cout << fixed << e << endl;                     // 10000000000.000000
    cout << fixed << setprecision(2) << e << endl;  // 10000000000.00
    cout << fixed << setprecision(0) << e << endl;  // 10000000000
    
    double f = 1e24;
    cout << fixed << f << endl;                     // 999999999999999983222784
        // The value we got here is almost close to 10^24 but it is not exactly 10^24
        // We don't use double and float in calculations unless and until needed due the precision errors

    // SCOPE
    /*  {
            int x = 2;
            cout << x << endl;
        }
        cout << x << endl;
    */

   // BREAK --> Takes out of last loop
   // CONTINUE --> Takes to last loop


    return 0;
}