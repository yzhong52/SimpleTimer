#include "Timer.h"
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std; 

double func_PI( int n ) {
	Timer::begin( "Compute Pi" ); 

	// computing pi
	// reference: http://mathworld.wolfram.com/PiFormulas.html
	double res = 0; 
	for( int k=1; k<n; k++ ) {
		res += 4 * pow(-1.0, k+1) / ( 2 * k - 1 ); 
	}

	Timer::end( "Compute Pi" ); 
	return res;
}

int func_Fibonacci( int n ) {
	Timer::begin( "Function B" ); 
	
	// computing the fibonaci
	int res = 1; 
	int tmp = 1; 
	for( int i=0; i<n; i++ ) {
		tmp = res + tmp; 
		std::swap( res, tmp ); 
	}
	
	Timer::end( "Function B" ); 
	return res;
}


int main()
{
	cout << "Pi: " << func_PI( 1000000 ) << endl;
	cout << "Fibonacci i: " << func_Fibonacci( 1000000 ) << endl;;
	
	cout << Timer::summery() << endl; 

	return 0; 
}