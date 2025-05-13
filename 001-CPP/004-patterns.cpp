#include<iostream>
using namespace std;

/*____________________________________________________________________________________*/

/*

How to approach pattern problems?

1. Outer Loop -> No. of rows: n = 4
2. Inner Loop -> No. of rows/no. elements in each row
3. Work -> Work done in inner loop (i.e., Work done in each row)

*/

/*____________________________________________________________________________________*/

/*

Pattern 01:

1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4

1. Outer Loop -> No. of rows: n = 4
2. Inner Loop -> No. of elements in each row: n = 4
3. Work -> Print i, n times, in every row

*/
void pattern01(int n){
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << i << " ";
        }
        cout << endl;
    }

}

/*____________________________________________________________________________________*/

/*

Pattern 02:

*
* *
* * *
* * * *

1. Outer Loop -> No. of rows: 4
2. Inner Loop -> No. of elements in each row:
                    1st row -> 1
                    2nd row -> 2
                    .
                    ith row -> i
3. Work -> Print *, i times, in ith row

*/
void pattern02(int n){

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }

}


/*____________________________________________________________________________________*/

/*

Pattern 03:

* * * *
* * *
* *
*

1. Outer Loop -> No. of rows: n = 4
2. Inner Loop -> No. of elements in each row:
                    1st row -> 4 (4-1+1)
                    2nd row -> 3 (4-2+1)
                    3rd row -> 2 (4-3+1)
                    4th row -> 1 (4-4+1)
                    ith row -> (n-i+1)
3. Work -> Print *, (n-i+1) times, in ith row
*/
void pattern03(int n){

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (n-i+1); j++){
            cout << "* ";
        }
        cout << endl;
    }

}

/*____________________________________________________________________________________*/

/*

Pattern 04:

1
1 2
1 2 3
1 2 3 4

1. Outer Loop -> No. of rows: n = 4
2. Inner Loop -> No. of elements in each row:
                    1st row -> 1
                    2nd row -> 2
                    .
                    ith row -> i
3. Work -> Print 1 to i, for each ith row
*/
void pattern04(int n){

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

}

/*____________________________________________________________________________________*/

/*

Pattern 05:

A
B C
D E F
G H I J

1. Outer Loop -> No. of rows: n = 4
2. Inner Loop -> No. of elements in each row:
                    1st row -> 1
                    2nd row -> 2
                    .
                    ith row -> i
3. Work -> Print Alphabets (A, B, C, D, ...).
            No. of alphabets in each row = Row number (i)

*/
void pattern05(int n){

    char ch = 'A';

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << ch <<" ";
            ch++;
        }
        cout << endl;
    }

}

/*____________________________________________________________________________________*/

/*

Pattern 06:

* * * * *
*       *
*       *
* * * * *

1. Outer Loop -> No. of rows: n = 4
2. Inner Loop -> No. of elements in each row: (n+1)
3. Work->
            1st row     -> 1* + 3 *      + 1*
            2nd row     -> 1* + 3 spaces + 1*
            3rd row     -> 1* + 3 spaces + 1*
            Last row    -> 1* + 3 *      + 1*

            i.e.,

            1st row     -> 1* + (n-1) *      + 1*
            Other rows  -> 1* + (n-1) spaces + 1*
            Last row    -> 1* + (n-1) *      + 1*

*/
void pattern06(int n){

    for(int i = 1; i <= n ; i++){

        cout << "* ";

        for(int j = 1; j <= (n-1); j++){
            if(i == 1 || i == n){
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        
        cout << "*" <<endl; 
    }

}

/*____________________________________________________________________________________*/

/*

Pattern 07:
    
      *
    * *
  * * *
* * * *

1. Outer Loop -> No. of rows: n = 4
2. Inner Loop -> No. of elements in each row: n = 4
3. Work ->
            1st row -> 3 spaces + 1*
            2nd row -> 2 spaces + 2*
            3rd row -> 1 spaces + 3*
            4th row -> 0 spaces + 4*
            .
            ith row -> (n-1) spaces + i*

*/
void pattern07(int n){

    for(int i = 1; i<=n; i++){
        for(int j = 1; j <= (n-i); j++){
            cout << "  ";
        }
        for(int j = (n-i+1); j <= n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

/*____________________________________________________________________________________*/

/*

Pattern 08:

1
2 3
4 5 6
7 8 9 10


1. Outer Loop -> No. of rows: n = 4
2. Inner Loop -> No. of elements in each row:
                    1st row -> 1
                    2nd row -> 2
                    .
                    ith row -> i
3. Work -> Print integers (This is value of number of times inner loop executed)

*/
void pattern08(int n){

    int count = 0;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            count++;
            cout << count << " ";
        }
        cout << endl;
    }

}

/*____________________________________________________________________________________*/

/*

Pattern 09:

   *
  ***
 *****
*******
*******
 *****
  ***
   *

1st Pyramid:
    1. Outer Loop -> No. of rows: n = 4
    2. Inner Loop -> No. of elements in each row
    3. Work ->
                1st row -> 3 spaces + 1*
                2nd row -> 2 spaces + 3*
                3rd row -> 1 spaces + 5*
                4th row -> 0 spaces + 7*
                .
                ith row -> (n-i) spaces + (2*i -1)*

2nd Pyramid:
    1. Outer Loop -> No. of rows: n = 4
    2. Inner Loop -> No. of elements in each row
    3. Work ->
                1st row -> 0 spaces + 7*
                2nd row -> 1 spaces + 5*
                3rd row -> 2 spaces + 3*
                4th row -> 3 spaces + 1*
                .
                ith row -> (i-1) spaces + (2(n-i+1) - 1)*

*/
void pattern09(int n){

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (n-i); j++){
            cout << "  ";
        }
        for(int j = 1; j <= ((2*i)-1); j++){
            cout << "* ";
        }
        cout << endl;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (i-1); j++){
            cout << "  ";
        }
        for(int j = 1; j <= ((2*(n-i+1)) - 1); j++){
            cout << "* ";
        }
        cout << endl;
    }

}

/*____________________________________________________________________________________*/

/*

Pattern 10:

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/
void pattern10(int n){

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= i; j++){
            cout << "* ";
        }

        for(int j = 1; j <= 2*(n-i) ; j++){
            cout << "  ";
        }

        for(int j = 1; j <= i; j++){
            cout << "* ";
        }

        cout << endl;
    }

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= (n-i+1); j++){
            cout << "* ";
        }

        for(int j = 1; j <= (2*(i-1)); j++){
            cout << "  ";
        }

        for(int j = 1; j <= (n-i+1); j++){
            cout << "* ";
        }

        cout << endl;
    }

}

/*____________________________________________________________________________________*/

/*

Pattern 11:

1
0 1
1 0 1
0 1 0 1

1. Outer Loop -> No. of rows: n = 4
2. Inner Loop -> No. of elements in each row:
                    1st row -> 1
                    2nd row -> 2
                    .
                    ith row -> i
3. Work -> Print 0,1


*/
void pattern11(int n){

    for(int i = 1; i <= n; i++){

        if(i%2 == 0){
            bool flag = 0;
            for(int j = 1; j <= i; j++){
                cout << flag << " ";
                flag = !flag;
            }

        }else{
            int flag = 1;
            for(int j = 1; j <= i; j++){
                cout << flag << " ";
                flag = !flag;
            }
        }

        cout << endl;
    }

}

/*____________________________________________________________________________________*/

/*

Pattern 12:

      * * * *
    * * * *
  * * * *
* * * *

1. Outer Loop -> No. of rows: n = 4
2. Inner Loop -> No. of elements in each row
3. Work ->
            1st row -> 3 spaces + n*
            2nd row -> 2 spaces + n*
            3rd row -> 1 spaces + n*
            4th row -> 0 spaces + n*
            ith row -> (n-i)spaces + n*

*/
void pattern12(int n){

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= (n-i); j++){
            cout << "  ";
        }

        for(int j = 1; j <= n ; j++){
            cout << "* ";
        }

        cout << endl;
    }

}

/*____________________________________________________________________________________*/

/*

Pattern 13:

      1
    2 1 2
  3 2 1 2 3
4 3 2 1 2 3 4

*/

void pattern13(int n){

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (n-i); j++){
            cout << "  ";
        }
        
        int num = i;
        for(int j = 1; j <= ((2*i)-1)/2; j++){
            cout << num << " ";
            num--;
        }

        for(int j = 1; j <= (((2*i)-1)/2) + 1; j++){
            cout << num << " ";
            num++;
        }

        cout << endl;
    }

}

/*____________________________________________________________________________________*/

int main(){
    int n;
    cin>>n;
    cout<<endl; pattern01(n);
    cout<<endl; pattern02(n);
    cout<<endl; pattern03(n);
    cout<<endl; pattern04(n);
    cout<<endl; pattern05(n);
    cout<<endl; pattern06(n);
    cout<<endl; pattern07(n);
    cout<<endl; pattern08(n);
    cout<<endl; pattern09(n);
    cout<<endl; pattern10(n);
    cout<<endl; pattern11(n);
    cout<<endl; pattern12(n);
    cout<<endl; pattern13(n);
    return 0;
}