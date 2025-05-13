/*

    TIME COMPLEXITY -> Measured in terms of number of iterations

        For online platforms,
            No of iterations in 1 sec -> 10^7 - 10^8

            Iterations      Time
            10^7        -   1 sec
            10^8        -   10 sec
            10^9        -   100 sec
            10^10       -   1000 sec (15 mins)
            10^11       -   10000 sec

______________________________________________________________________________   


    N < 100000

    for(int i=0; i<N; i++)
    {
        counter++;
    }

    Understading the counter here:
        -> counter = N

    TIME COMPLEXITY -> O(counter) -> O(N) 
    
    N = 10^5 iterations
    Code will run in 1 sec

_______________________________________________________________________________


    N < 100000

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; i++)
        {
            counter++;
        }
    }

    Understading the counter here:
        -> counter = N + N + N + .....N times = N*N = N^2

    TIME COMPLEXITY -> O(counter) -> O(N^2)

    N^2 = 10^10 iterations
    Code will not run in 1 sec


_______________________________________________________________________________


    N < 100000

    while(N>0)
    {
        N = N/2;
        counter++;
    }


    Understading the counter here:
        -> Value of counter in noting but how many times we can divide N by 2 to reduce it to zero

        which means     2^counter = N
        =>                counter = log N

    TIME COMPLEXITY -> O(counter) -> O(log N)

    log N = log 10^5 = 5 * log 10 = 5 * 3 = 15 iterations


_______________________________________________________________________________


    N < 10^18

    while(N>0)
    {
        N = N/2;
        counter++;
    }

    TIME COMPLEXITY -> O(counter) -> O(log N)

    log N = log 10^18 = 18 * log 10 = 18 * 3 = 54 iterations

    NOTE: O(log) is desirable complexity


_______________________________________________________________________________


    N < 100000
    a[i] < 100000

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; i++)
        {
            counter++;
        }
    }

    Understading the counter here:
        -> counter = 1 + 2 + 3 + ..... + N = (N*(N+1) / 2)

    TIME COMPLEXITY -> O(counter) -> O(N^2)

    Code will not run in 1 sec


_______________________________________________________________________________

    IMP EXAMPLE:

    Given T test cases and an array of size N. Print sum of array in each test case.

    Constraints:
    1 <= T <= 1000
    1 <= N <= 1000
    1 <= a[i] <= 1000

    while(T--){
        int N;
        cin >> N;
        int sum = 0;
        for(int = 0; i< N; i++){
            int x;
            cin >> x;
            sum = sum + x;
        }
        cout << sum << endl;
    }

    TIME COMPLEXITY -> O(T*N) -> O(N^2)

    N^2 = 10^6
    Hence, code will be executed in 1 sec


_______________________________________________________________________________


    IMP EXAMPLE:

    Given T test cases and an array of size N. Print sum of array in each test case.

    Constraints:
    1 <= T <= 100000
    1 <= N <= 100000
    1 <= a[i] <= 1000

    while(T--){
        int N;
        cin >> N;
        int sum = 0;
        for(int = 0; i< N; i++){
            int x;
            cin >> x;
            sum = sum + x;
        }
        cout << sum << endl;
    }

    TIME COMPLEXITY -> O(T*N) -> O(N^2)

    N^2 = 10^10
    Hence, code will not be executed in 1 sec


_______________________________________________________________________________


    IMP EXAMPLE:

    Given T test cases and an array of size N. Print sum of array in each test case. 

    Constraints:
    1 <= T <= 100000
    1 <= N <= 100000
    1 <= a[i] <= 1000

    NOTE: Sum of N over all test cases is < 10^7

    int counter = 0;
    while(T--){
        int N;
        cin >> N;
        int sum = 0;
        for(int = 0; i< N; i++){
            int x;
            cin >> x;
            sum = sum + x;
            counter++;
        }
        cout << sum << endl;
    }

    Test case       Iterations
    T=0         -   N0
    T=1         -   N1
    .
    .
    T=t         -   Nt

    counter = N0 + N1 + N2 + ..... <= 10^7
    TIME COMPLEXITY -> O(10^7)
    Hence, code will be executed in 1 sec

*/