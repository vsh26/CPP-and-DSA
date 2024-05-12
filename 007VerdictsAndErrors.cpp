/*

    1. MLE ---> Memory Limit Exceeded

        -> Code may run in local machine but not on online platforms
        -> NOTE: SIZE OF GLOBAL ARRAY <= 10^7

    2. RUNTIME ERROR

        -> Segmentation Fault
            -> Memory related fault
            -> Illegal access of memory
            -> Be careful, while dealing with pointers

        -> Undefined Behaviour

    3. TLE ---> Time Limit Exceeded

        Compilation:    a.cpp   -> gcc a.cpp    -> a.out    (Compilation Time)
        Execution:      input   -> execution    -> output   (Execution Time)

        NOTE:
            -> Time limit given on an online platform only includes execution time and not the compilation time
            -> <bits/stdc++.h> increases compile time only

        How do we ESTIMATE Execution Time? -> Using Time Complexity Analysis

    
    NOTE:
        -> In case of RECURSION
            -> It may be MLE (Stack gets filled faster than the time limit)
            -> It may be TLE
    
*/