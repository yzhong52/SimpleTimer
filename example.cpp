#include "Timmer.h"
#include <iostream>
#include <math.h>

using namespace std; 

#include <ctime>


float function1( int i ) {
	return tan( 1.0f * i ); 
}

float function2( int i ) {
	return cos( 1.0f * i ) * sin( 1.0f * i );
}


#include <windows.h>
int main()
{
	for( int i=0; i<1000; i++ ) {
		Timmer::begin( "Function A" ); 
		function1(i);
		Timmer::end( "Function A" ); 

		Timmer::begin( "Function B" ); 
		function2(i);
		Timmer::end( "Function B" ); 
	}
	
	for( int i=0; i<20; i++ ) {
		Timmer::begin( "Function B" ); 
		function2(i);
		Timmer::end( "Function B" ); 
	}

	cout << Timmer::summery() << endl; 

	return 0; 
}