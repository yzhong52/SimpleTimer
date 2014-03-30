Timmer
======

A generic Timmer class in C/C++. Feasible for profiling. Compatible with both Windows and Mac. 


Usage
======

Sample Code:

    Timmer::begin( "Function A" ); 
    // Do sth
    Timmer::end( "Function A" ); 
    cout << Timmer::summery() << endl; 

Out put will be:

    +--------------------
    | Profiling Summery ...
    +---------------------------------------
    | Function Name          |     Total Time |   Be Called |        Average |
    | Function B             |     7.80381 ms |     1 times |     7.80381 ms |
    
  
