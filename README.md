Timer
======

A lightweight Timer class in C/C++. Feasible for simple profiling. Compatible with Mac, Linux and Windows.


Usage
======

Sample Code:

    // Computing PI
    // Reference: http://mathworld.wolfram.com/PiFormulas.html
    double func_PI( int n ) {
        Timer::begin( "Compute Pi" ); 

        double res = 0;
        for( int k=1; k<n; k++ ) {
            res += 4 * pow(-1.0, k+1) / ( 2 * k - 1 ); 
        }

        Timer::end( "Compute Pi" ); 
        return res;
    }

    // Computing Fibonaci number
    int func_Fibonacci( int n ) {
        Timer::begin( "Function Fibonaci" ); 

        int res = 1, tmp = 1;
        for( int i=0; i<n; i++ ) {
            tmp = res + tmp; 
            swap( res, tmp ); 
        }

        Timer::end( "Function Fibonaci" ); 
        return res;
    }


    int main() {
        func_PI( 1000000 );
        func_Fibonacci( 1000000 );

        cout << Timer::summery() << endl; 

        return 0; 
    }


Out put will be:

    +--------------------
    | Profiling Summery ...
    +---------------------------------------
    | Function Name          |                 Total |   Be Called |  Percentage |
    | Total Run Time         |            14.1279 ms |     1 times |       100 % |
    | Function Fibonaci      |            4.84595 ms |     1 times |      34.3 % |
    | Compute Pi             |            9.25415 ms |     1 times |    65.502 % |

# Try It Out

In terminal, `cd` to the project folder, and type:

    make
    make run
