Timmer
======

A Timer class in C/C++. Feasible for simple profiling. Compatible with both Windows and Mac. Tested on Window 7 and Mac OS Mavericks. 


Usage
======

Sample Code:
    
    // computing PI
    // reference: http://mathworld.wolfram.com/PiFormulas.html
    double func_PI( int n ) {
    	Timer::begin( "Compute Pi" ); 
    
    	double res = 0;
    	for( int k=1; k<n; k++ ) {
    		res += 4 * pow(-1.0, k+1) / ( 2 * k - 1 ); 
    	}
    
    	Timer::end( "Compute Pi" ); 
    	return res;
    }
    
    // computing the fibonaci number
    int func_Fibonacci( int n ) {
    	Timer::begin( "Function B" ); 
    	
    	int res = 1, tmp = 1;
    	for( int i=0; i<n; i++ ) {
    		tmp = res + tmp; 
    		swap( res, tmp ); 
    	}
    	
    	Timer::end( "Function B" ); 
    	return res;
    }
    
    
    int main()
    {
        func_PI( 1000000 );
        func_Fibonacci( 1000000 );
    	
    	cout << Timer::summery() << endl; 
    
    	return 0; 
    }

Out put will be:

    Pi: 3.14159
    Fibonacci i: 1933147736
    +--------------------
    | Profiling Summery ...
    +---------------------------------------
    | Function Name          |                 Total |   Be Called |  Percentage |
    | Total Run Time         |            42.2471 ms |     1 times |       100 % |
    | Function B             |             11.426 ms |     1 times |    27.045 % |
    | Compute Pi             |             26.333 ms |     1 times |     62.33 % |
    
  
